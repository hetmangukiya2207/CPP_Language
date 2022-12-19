#include<iostream>
using namespace std;

class Car{
	
	private :
		
			int CarId;
			string CarCompanyName;
			string CarColor;
			string CarModel;
			int CarReleaseYear;
			
	public : 
			
			void setData()
			{
				cout << "Enter Car Id \t\t\t: ";
				cin >> CarId;
				cout << "Enter Car Company Name \t: ";
				cin >> CarCompanyName;
				cout << "Enter Car Color \t\t: ";
				cin >> CarColor;
				cout << "Enter Car Model \t\t: ";
				cin >> CarModel;
				cout << "Enter Car Release Year \t: ";
				cin >> CarReleaseYear;
				cout << endl << endl << endl;
			}
			
			void getData()
			{
				cout  << "Car Id \t\t: " << CarId << endl
					  << "Car Company Name \t: " << CarCompanyName << endl
					  << "Car Colour \t\t: " << CarColor << endl
					  << "Car Model \t\t: " << CarModel << endl
					  << "Car Release Year \t: " << CarReleaseYear << endl
					  << endl << endl;
			}
};

int main()
{
	Car c1, c2, c3, c4;
	
	c1.setData();
	c2.setData();
	c3.setData();
	c4.setData();
	
	c1.getData();
	c2.getData();
	c3.getData();
	c4.getData();
}
