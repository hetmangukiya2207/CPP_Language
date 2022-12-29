#include<iostream>
using namespace std;

class PD {
	
	protected :
		
	string name;
	double age;
	string email;
	long long int Con;
	
	public : 
	
	PD() {
		cout << "================================================" << endl;
		cout << "Enter the personal details..." << endl ;
		cout << "================================================" << endl;
		cout << "Enter your name              : ";
		cin  >> name;
		cout << "Enter your Age               : ";
		cin  >> age;
		cout << "Enter your Email             : ";
		cin  >> email;
		cout << "Enter your Contact Number    : ";
		cin  >> Con;
		cout << "================================================" << endl;
	}
};
class Companydetail {
	
	protected :
		
		double experience;
		string role;
		double salary;
		string cname;
		
	public : 
	
	Companydetail() {
		cout << "Enter the company details..." << endl;
		cout << "================================================" << endl;
		cout << "Enter your Experience        : ";
		cin  >>  experience;
		cout << "Enter your Role              : ";
		cin  >> role;
		cout << "Enter your Salary            : ";
		cin  >> salary;
		cout << "Enter your Company Name      : ";
		cin  >> cname;
		cout << "================================================" << endl;
	}
	
};

class Emp :public PD , public Companydetail {
	
	public :
	Emp():Companydetail(),PD()
	{
		cout << "Comapny Name" << "\t"
			 << "Name" << "\t"
			 << "Role" << "\t"
			 << "Salary" << "\t"
			 << "Exp" << "\t"
			 << "Age" << "\t"
			 << "Cont.sNo" << "\t\t"
			 << "Email" << "\t"
			 << endl
			 << "============"<< "\t"
			 << "=======" << "\t"
			 << "=======" << "\t"
			 << "=======" << "\t"
			 << "=======" << "\t"
			 << "=======" << "\t"
			 << "=======" << "\t\t"
			 << "=======" << "\t"
			 << endl;
		cout << cname << "\t\t" 
			 << name  << "\t"
			 << role  << "\t"
			 << salary  << "\t"
			 << experience  << "\t"
			 << age  << "\t"
			 << Con  << "\t"
			 << email  << "\t"
			 << endl;
	}
};

int main()
{
	Emp e;
}
