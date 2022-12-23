#include<iostream>
using namespace std;

class Het {
			
	public :
		
		int rollNo;
		string name;
		int standard;
		int age;
		long long int contactNo;
		string address;

		
		void inputdata() {
			
			cout << "INPUT STUDENT  DATA" << endl;
			
			cout << "Enter a Student Roll No : ";
			cin  >> rollNo;
			cout << "Enter The Student Name : ";
			cin  >> name;
			cout << "Enter The Student Standard : ";
			cin  >> standard;
			cout << "Enter The Student Age : ";
			cin  >> age;
			cout << "Enter The Student Contact No : ";
			cin  >> contactNo;
			cout << "Enter The Student Address : ";
			cin  >> address;
		}
		 
		 
		
};

class Gret {
	
	public :
		
		
		void outputdata() {
			
			Het H1;
			H1.inputdata();
			
			cout << endl <<"--------------------------------" << endl;
			cout << "STUDENT" << endl;
			cout << "--------------------------------" << endl;
			cout << "STUDENT ROLL NO    : "<< H1.rollNo << endl
				 << "STUDENT NAME       : " << H1.name  <<endl
				 << "STUDENT STANDARD   : " << H1.standard<< endl
				 << "STUDENT AGE        : " << H1.age  << endl
				 << "STUDENT CONTACT NO : " << H1.contactNo  << endl
				 << "STUDENT ADDRESS    : " << H1.address << endl;
			cout << "--------------------------------" << endl;
			cout << "--------------------------------" << endl;
		}
		
};
int main() {
	
	
	Gret G1;
	
 	G1.outputdata();
 	
}
