#include<iostream>
using namespace std;

class school {
	
	private :
	
		int id;
		string name;
		int rno;
		string std;
		int a;
		long long int cont;
		static string inst;
		string add;
		
	public :
		
		void setData() {
			
			cout << endl << endl << "INPUT STUDENT DATA" << endl;
			cout <<"-------------------------------------------------------------------------- " << endl << endl;
			
			cout << "Enter a Student Id : ";
			cin  >> id;
			cout << "Enter a Student Name : ";
			cin  >> name;
			cout << "Enter a Student Roll No : ";
			cin  >> rno;
			cout << "Enter a Student Standard : ";
			cin  >> std;
			cout << "Enter a Student Age : ";
			cin  >> a;
			cout << "Enter a Student Contact No : ";
			cin  >> cont;
			cout << "Enter a Student Address : ";
			cin  >> add;
			
		}
		
		void getData() {
			
			cout << endl << "DISPLAY STUDENT DATA" << endl;
			cout << "============================================================================= " << endl;
			cout << "STUDENT ID : " << id << endl
				 << "STUDENT NAME : " << name<< endl
				 << "STUDENT ROLL NO : " << rno << endl
				 << "STUDENT STANDARD : " << std << endl
				 << "STUDENT AGE : " << a << endl
				 << "STUDENT CONTACT NO : " << cont << endl
			     << "STUDENT EDUCTION INSTITUTE NAME : " << inst << endl
				 << "STUDENT ADDRESS : " << add << endl;
			cout << "============================================================================= " << endl;
		}
		
};

class Collage {
	
	private :
	
		int id;
		string name;
		int rno;
		string std;
		int a;
		long long int cont;
		static string inst;
		string add;
		
	public :
		
		void inputdata() {
			
			cout << endl << endl << "INPUT Collage DATA" << endl;
			cout << "-------------------------------------------------------------------------- " << endl << endl;
			
			cout << "Enter a Student Id : ";
			cin  >> id;
			cout << "Enter a Student Name : ";
			cin  >> name;
			cout << "Enter a Student Roll No : ";
			cin  >> rno;
			cout << "Enter a Student Standard : ";
			cin  >> std;
			cout << "Enter a Student Age : ";
			cin  >> a;
			cout << "Enter a Student Contact No : ";
			cin  >> cont;
			cout << "Enter a Student Address : ";
			cin  >> add;
			
		}
		
		void outputdata() {
			
			cout << endl << "DISPLAY Collage DATA" << endl;
			cout << "============================================================================= " << endl;
			cout << "STUDENT ID                      : " << id << endl
				 << "STUDENT NAME : " << name << endl
				 << "STUDENT ROLL NO : " << rno << endl
				 << "STUDENT STANDARD : " << std << endl
				 << "STUDENT AGE : " << a << endl
				 << "STUDENT CONTACT NO : " << cont << endl
				 << "STUDENT EDUCTION INSTITUTE NAME : " << inst << endl
				 << "STUDENT ADDRESS : " << add << endl;
			cout << "============================================================================= " << endl;
		}
		
};

string school ::inst = "Aspire Public School";
string Collage :: inst = "Bhagwan Mahaveer Univercitys";

int main() {
	
	school h;
	Collage c;
	
	h.setData();
	h.getData();
	
	c.inputdata();
	c.outputdata();
}
