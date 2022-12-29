#include<iostream>
using namespace std;

class Animal {
	
	protected :
		string name;
		double age;
		
	public : 
	
			void SetData() {
			
			cout << "Enter The Animal Name : ";
			cin  >> name;
			cout <<"Enter The Animal Age : ";
			cin  >> age;
			
		}
};

class Zebra : public Animal{
	
	protected :
		string Name;
		string colour;
		
		public : 
	
			void SetDataZ() {
			
			cout << "Zebra Name : ";
			cin  >> Name;
			cout <<"Zebra colour : ";
			cin  >> colour;
			
		}
			void GetDataZ() {
				
				cout << "==========================================="<<endl
				     << " The Animal Name : " << name << endl
				     << " Zebra Name   : " << Name << endl
				     << "==========================================="<<endl;
			}
		
		
};

class Dolphin : public Animal{
	
	protected :
		string Name;
		string colour;
		
		public : 
	
			void SetDataD() {
			
			cout << endl << "Dolphin Name : ";
			cin  >> Name;
			cout << endl <<"Dolphine colour : ";
			cin  >> colour;
			
		}
			void GetDataD() {
				
				cout << "==========================================="<<endl
				     << " The Animal Name : " << name << endl
				     << " Dolphin Name  : " << Name << endl
				     << "==========================================="<<endl;
			}
		
		
		
};

int main(){
	Zebra z;
	Dolphin d;
	z.SetData();
	z.SetDataZ();
	d.SetData();
	d.SetDataD();
	z.GetDataZ();
	d.GetDataD();
}
