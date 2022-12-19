#include<iostream>
using namespace std;
class detail {
	
	private :
		
		int h_no,r_no;
		string h_area, r_cho;
		
	public :
		
		void setdata() {
			
			cout << endl << "-- House Details --" << endl << endl;
			cout << "Enter The House Number :";
			cin  >> h_no;
			cout << "Enter The House Area :";
			cin  >> h_area;
			cout << endl << "-- Room Details --" << endl << endl;
			cout << "Enter The Room Number :";
			cin  >> r_no;
			cout << "Enter The Room Choice :";
			cin  >> r_cho;
		}
		
		void getdata() {
			
			cout << endl << endl << "\t\t\t-:House:-" << endl << endl;
			cout << "\tHouse Number\t:" << h_no << endl << "\tHouse Area\t:" << h_area << endl;
			cout << endl << endl << "\t\t\t-:Room:-" << endl << endl;
			cout << "\tRoom Number\t:" << r_no << endl << "\tRoom Choice\t:" << r_cho << endl;
		}
};

int main() {
	
	detail d1;
	d1.setdata();
	d1.getdata();
}

