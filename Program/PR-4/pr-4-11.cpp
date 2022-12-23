#include<iostream>
using namespace std;

 class foo  {

	private : 
	
	int id;
	string name;
	static string instname;
	
	public : 
	
	void inputdata(){
		
		cout << "=============================================" << endl;
		
		cout << "Enter Your Data : " << endl;
		
		cout << "=============================================" << endl;
		
		cout << "Enter your id : ";
		cin  >> id;
		cout << "Enter your Name : ";
		cin  >> name;
		cout << "=============================================" << endl;
	}
	void outputdata()
		{
			cout << "=============================================" << endl; 
			cout << "Id : " << id << endl
			     << "your name : " << name << endl
			     << "Institute name : " << instname << endl;
			cout << "=============================================";
		}
		

		
 };
 string foo :: instname = "Red & White institute";
 
 int main(){
 	
 	foo f;
 	f.inputdata();
 	f.outputdata();
 }
