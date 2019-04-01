#include"Address.h"

Address::Address(char* house, char* Street, char * Cit,char* county)
{
	int size=0;
	for(int i=0;house[i]!='\0';i++)
    {	
		size++;
		house_Number=new char[size+1];
    }
	for(int i=0;i<size;i++)
		house_Number[i]=house[i];
	house_Number[size]='\0';

    size=0;
	for(int i=0;Street[i]!='\0';i++)
	{
		size++;
	    street_Name=new char[size+1];
	}
	for(int i=0;i<size;i++)
		street_Name[i]=Street[i];
	street_Name[size]='\0';

    size=0;
	for(int i=0;Cit[i]!='\0';i++)
	{
		size++;
	    city=new char[size+1];
	}
	for(int i=0;i<size;i++)
		city[i]=Cit[i];
	city[size]='\0';

    size=0;
	for(int i=0;county[i]!='\0';i++)
	{
		size++;
	    country=new char[size+1];
	}
	for(int i=0;i<size;i++)
		country[i]=county[i];
	country[size]='\0';
}

Address::Address(const Address& A2)
{
		delete house_Number;
		delete street_Name;
		delete city;
		delete country;

	int size=0;
	for(int i=0;A2.house_Number[i]!='\0';i++)
    {	
		size++;
		house_Number=new char[size+1];
    }
	for(int i=0;i<size;i++)
		house_Number[i]=A2.house_Number[i];
	house_Number[size]='\0';

    size=0;
	for(int i=0;A2.street_Name[i]!='\0';i++)
	{
		size++;
	    street_Name=new char[size+1];
	}
	for(int i=0;i<size;i++)
		street_Name[i]=A2.street_Name[i];
	street_Name[size]='\0';

    size=0;
	for(int i=0;A2.city[i]!='\0';i++)
	{
		size++;
	    city=new char[size+1];
	}
	for(int i=0;i<size;i++)
		city[i]=A2.city[i];
	city[size]='\0';

    size=0;
	for(int i=0;A2.country[i]!='\0';i++)
	{
		size++;
	    country=new char[size+1];
	}
	for(int i=0;i<size;i++)
		country[i]=A2.country[i];
	country[size]='\0';
}

ostream & operator<<(ostream & osObject, const Address& A2)
{
	for(int i=0;A2.house_Number[i]!='\0';i++)
		osObject<<A2.house_Number[i];
	cout<<endl;
	for(int i=0;A2.street_Name[i]!='\0';i++)
		osObject<<A2.street_Name[i];
	cout<<endl;
	for(int i=0;A2.city[i]!='\0';i++)
		osObject<<A2.city[i];
	cout<<endl;
	for(int i=0;A2.country[i]!='\0';i++)
		osObject<<A2.country[i];
	cout<<endl;
	return osObject;
}

const Address &   Address::operator=(const Address& A2)
{
		delete house_Number;
		delete street_Name;
		delete city;
		delete country;

	int size=0;
	for(int i=0;A2.house_Number[i]!='\0';i++)
    {	
		size++;
		house_Number=new char[size+1];
    }
	for(int i=0;i<size;i++)
		house_Number[i]=A2.house_Number[i];
	house_Number[size]='\0';

    size=0;
	for(int i=0;A2.street_Name[i]!='\0';i++)
	{
		size++;
	    street_Name=new char[size+1];
	}
	for(int i=0;i<size;i++)
		street_Name[i]=A2.street_Name[i];
	street_Name[size]='\0';

    size=0;
	for(int i=0;A2.city[i]!='\0';i++)
	{
		size++;
	    city=new char[size+1];
	}
	for(int i=0;i<size;i++)
		city[i]=A2.city[i];
	city[size]='\0';

    size=0;
	for(int i=0;A2.country[i]!='\0';i++)
	{
		size++;
	    country=new char[size+1];
	}
	for(int i=0;i<size;i++)
		country[i]=A2.country[i];
	country[size]='\0';
return *this;
}

Address::~Address()
{
		delete house_Number;
		delete street_Name;
		delete city;
		delete country;
}