#include<iostream>
using namespace std;

class cafe{
	
	private:
		int id;
		string name;
		string type;
		string rate;
		string location;
		int year;
		string quantity;
	
	public:
		
		cafe()
		{
			cout << "Welcome to HR's Cafe " << endl << endl;
			cout << "Enter Id\t\t: ";
			cin >> id;
			cout << "Enter Name\t\t: ";
			cin >> name;
			cout << "Enter Type\t\t: ";
			cin >> type;
			cout << "Enter Rate\t\t: ";
			cin >> rate;
			cout << "Enter Location\t\t: ";
			cin >> location;
			cout << "Enter Establish Year\t: ";
			cin >> year;
			cout << "Enter Staff Quantity\t: ";
			cin >> quantity;
			cout << endl << endl;
			
			cout << "Id\tName\tType\tRate\tLocation\tYear\tquality" << endl
				 << "======= ======= ======= ======= =============== ======= =======";
				 
			cout << endl << endl;
			
			cout << id << "\t" << name << "\t" << type << "\t" << rate << "\t" << location << "\t\t" << year << "\t" << quantity ; 
		}
};

int main()
{
	int n,i;
	
	cout << "Enter the cafe member : ";
	cin >> n;

	cafe c[n];
}
