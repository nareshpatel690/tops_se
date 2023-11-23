#include<iostream>

using namespace std;

class company

{
	public:
		
		int id;
		string company;
		int turnover;
		string location;
		
		void inputdata()
		{
			cout<<"\nenter the company ID:";
			cin>>id;
			
			cout<<"\nenter company name:";
			cin>>company;
			
			cout<<"\nenter company turnover:";
			
	     	cin>>turnover;
	     	
	     	cout<<"\nenter location of company:";
	     	cin>>location;
			
		}
		
		void displaydata()
		{
			cout<<"\n company id:"<<id;
			cout<<"\n company name:"<<company;
			cout<<"\n company turnover:"<<turnover;
			cout<<"\n company location:"<<location;
		}
		
};
		
		
class employee
{
	public:
	int id;
	string name;
	string department;
	int salary;
	
	
	void inputdata()
{
		
		
	cout<<"\n enter the employee id:";
	cin>>id;
	
	cout<<"\n enter employee name: ";
	cin>>name;
	
	cout<<"\n enter employee department:";
	cin>>department;
	
	cout<<"\n enter employee salary:";
	cin>>salary;
}



      void displaydata()
     {
     	cout<<"\n employee id:"<<id;
     	cout<<"\n employee name:"<<name;
     	cout<<"\n employee department:"<<department;
     	cout<<"\n employee salary:"<<salary;
     	
     	
     	
	 }

		};
		
		main()
		{
			
			company cobj;
			cobj.inputdata();
			cobj.displaydata();
			
			employee eobj;
			eobj.inputdata();
			eobj.displaydata();
			
			
			
			
			
			
			
			
			
			
			
			
		}
			
		
			
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		