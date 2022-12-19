#include<iostream>
using namespace std;

class Person {
	
	private :
		
		int p_no;
		string p_name;
		
	public :
		
		void getdata() {
			
			cout << endl << "-- Person Details --" << endl << endl;
			cout << "Enter The Person Number :";
			cin  >> p_no;
			cout << "Enter The Person Name :";
			cin  >> p_name;
			
		}
		
		void putdata() {
			
			cout << endl << endl << "\t\t\t-----:PERSON:-----" << endl << endl;
			cout << "\tPerson Number\t:" << p_no << endl
				 << "\tPerson Name\t:" << p_name << endl;
		}
};

int main() {
	
	Person p1;
	p1.getdata();
	p1.putdata();
}

