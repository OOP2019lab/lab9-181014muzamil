#include"Employee.h"

Employee::Employee(char* name,const Address & A):A(A)
{
	int size=0;
	for(int i=0;name[i]!='\0';i++)
	{
	size++;
	emp_name=new char[size+1];
	}
	for(int i=0;i<size;i++)
	{
		emp_name[i]=name[i];
	}
	emp_name[size]='\0';
}

Employee::Employee(const Employee& E2):A(E2.A)
{
	int size=0;
	delete this->emp_name;
	for(int i=0;E2.emp_name[i]!='\0';i++)
	{
	size++;
	emp_name=new char[size+1];
	}
	for(int i=0;i<size;i++)
		this->emp_name=E2.emp_name;
	this->emp_name[size]='\0';

	for(int i=0;i<noProj;i++)
		this->proj[i]=E2.proj[i];
}

ostream& operator<<(ostream& osObject, const Employee& E2)
{
	osObject<<E2.A;
	cout<<endl;
	for(int i=0;E2.emp_name!='\0';i++)
		osObject<<E2.emp_name[i];
	cout<<endl;
	for(int i=0;i<E2.noProj;i++){
		osObject<<E2.proj[i][0]<<" ";
	}
	cout<<endl;
	return osObject;
}

const Employee &   Employee::operator=(const Employee& other)
{
	this->A=other.A;

	int size=0;
	delete this->emp_name;
	for(int i=0;other.emp_name[i]!='\0';i++)
	{
	size++;
	emp_name=new char[size+1];
	}
	for(int i=0;i<size;i++)
		this->emp_name=other.emp_name;
	this->emp_name[size]='\0';

	for(int i=0;i<noProj;i++)
		this->proj[i]=other.proj[i];
	return *this;
}

void Employee::addProject(Project const * P)
{
	proj=new Project * [2];
	if(noProj==0)
		proj[0]=new Project(*P);
	if(noProj==1)
		proj[1]=new Project(*P);
	if(noProj>1)
		cout<<"Employee Can Have Only Two Projects"<<endl;
}

void Employee::removeProject(Project const * P)
{
	if(proj[0]==P)
	{
	delete proj[0];
	proj[0]=nullptr;
	noProj--;
	}

	else if(proj[1]==P)
	{
	delete proj[1];
	proj[1]=nullptr;
	noProj--;
	}

	else if(noProj<1)
	{
	cout<<"We could not remove the project"<<endl;
	}
}

Employee::~Employee(){
	if(emp_name!=nullptr){
		delete [] emp_name;
	}
	for(int i=0;i<2;i++)
	{
	if(proj[i]!=nullptr)
		delete proj[i];
	}
	delete [] proj;
}