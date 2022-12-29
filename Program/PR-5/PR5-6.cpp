#include<iostream>
using namespace std;

class A {
	
	protected :
		
		int id;
		string name;
		string role;
		int salary;
		string exprience;
		string comp_name;
		string address;
		string email;
		long long int contact;
		
	public :
		
		void SetDataA() {
			
			cout << "Enter your Id           : ";
			cin  >> id;
			cout << "Enter your Name         : ";
			cin  >> name;
			cout << "Enter your Role         : ";
			cin  >> role;
		}
};

class B : public A {
		
	public :
		
		void SetDataB() {
			
			cout << "Enter your Salary       : ";
			cin  >> salary;
			cout << "Enter your Exprience    : ";
			cin  >> exprience;
		}
};

class C : public B {
		
	public :
		
		void SetDataC() {
			
			cout << "Enter your Company Name : ";
			cin  >> comp_name;
			cout << "Enter your Address      : ";
			cin  >> address;
		}
		
		void GetDataC() {
			cout << "========================================"<<endl;
			cout << "NAME   : " << name << endl
				 << "ROLE   : " << role << endl
		    	 << "SALARY : " << salary << endl;
		    cout << "========================================"<<endl;
		}
};

class D : public C {
	
	public :
		
		void SetDataD() {
			
			cout << "Enter your Email       : ";
			cin  >> email;
			cout << "Enter your Contact No. : ";
			cin  >> contact;
		}
		
		void GetDataD() {
			
			cout << "========================================"<<endl;
			cout << " ID           : " << id << endl
				 << " NAME         : " << name << endl
				 << " ROLE         : " << role << endl
				 << " SALARY       : " << salary << endl
				 << " EXPRIENCE    : " << exprience << endl
				 << " COMAPNY NAME : " << comp_name << endl
				 << " ADDRESS      : " << address << endl
				 << " EMAIL        : " << email << endl
				 << " CONTACT NO.  : " << contact << endl;
			cout << "========================================"<<endl;					 
		}
};

int main() {
	
 	D d1;
 	
 	d1.SetDataA();
 	d1.SetDataB();
 	d1.SetDataC();
 	d1.GetDataC();
 	d1.SetDataD();
 	d1.GetDataD();
}
