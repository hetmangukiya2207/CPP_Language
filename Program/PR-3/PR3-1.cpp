#include<iostream>
using namespace std;

class Distance 
{
	
	private :
		
		int feet1, feet2;
		int inch1, inch2, count, feet, inch;
		
	public :
		
		void getdata() {
			
			cout << "Enter The Feet 1 :";
			cin  >> feet1;
			cout << "Enter The Feet 2 :";
			cin  >> feet2;
			cout << endl << endl;
			cout << "Enter The Inch 1 :";
			cin  >> inch1;
			cout << "Enter The Inch 2 :";
			cin  >> inch2;
		}
		
		void putdata() {
			
			feet  = feet1 + feet2;
			inch = inch1 + inch2;	
			
			if(inch>=12)
			{
				count = inch/12;
				inch  =  inch % 12;
				feet+=count;
			}
				
			cout << endl << "\t------------------------------" << 
        endl << endl;
			cout <<  "\t\tFeet\t: " << feet << endl
				 << "\t\tInch\t: " << inch << endl;
		}
};

int main() {
	
	Distance d1;
	d1.getdata();
	d1.putdata();
}

