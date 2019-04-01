#include"Project.h"
 
Project::Project(char* n,int b, int d)
{
	int size=0;
	for(int i=0;n[i]!='\0';i++)
	{
	size++;
	name=new char[size+1];
	}

	for(int i=0;i<size;i++)
	name[i]=n[i];
	name[size]='\0';

	this->budget=b;
	this->duration=d;
}
Project::Project(const Project& P2)
{
	int size=0;
	for(int i=0;P2.name[i]!='\0';i++)
	{
	size++;
	this->name=new char[size+1];
	}
	for(int i=0;i<size;i++)
	{
	this->name[i]=P2.name[i];
	}
	this->name[size]='\0';

	this->budget=P2.budget;
	this->duration=P2.duration;
}
 ostream& operator<<(ostream& osObject, const Project& P2)
 {
   for(int i=0;P2.name[i]!='\0';i++)
   {
	   osObject<<P2.name[i]; 
   }
   cout<<endl;
   osObject<<P2.budget<<endl;
   osObject<<P2.duration<<endl;
   return osObject;
 }
const Project &   Project::operator=(const Project& P2)
{
	int size=0;
	for(int i=0;P2.name[i]!='\0';i++)
	{
	size++;
	this->name=new char[size+1];
	}
	for(int i=0;i<size;i++)
	{
	this->name[i]=P2.name[i];
	}
	this->name[size]='\0';

	this->budget=P2.budget;
	this->duration=P2.duration;
	return *this;
}
void Project::setBudget(int b)
{
	budget=b;
}
Project::~Project()
{
delete name;
}