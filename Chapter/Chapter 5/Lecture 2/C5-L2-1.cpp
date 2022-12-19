#include<iostream>
using namespace std;

class Hotel{
	
	private :
		
		int id;
		string name;
		string type;
		string rate;
		static string location;
		int year;
		int staff;
		int room;
		
	public :
		
		void setData(int i, int n)
		{
			system("cls");
			cout <<"Enter the Information of hotel (Without any space) " << endl;
			cout << "Hotel number " << i << " / " << n << endl;
			cout << "Enter the id : ";
			cin >> id;
			cout << "Enter the name : ";
			cin >> name;
			cout << "Enter the type (Hotel/Motel) : ";
			cin >> type;
			cout << "Enter the rate (1_star, 2_star, ... 7_star) : ";
			cin >> rate;
			cout << "Enter the establish year : ";
			cin >> year;
			cout << "Enter the staff quantity : ";
			cin >> staff;
			cout << "Enter the room quantity of hotel : ";
			cin >> room;
		}
		
		void getData()
		{
			cout 	<< id << "\t"
					<< name << "\t"
					<< type << "\t"
					<< rate << "\t"
					<< location << "\t\t"
					<< year << "\t\t"
					<< staff << "\t\t"
					<< room << endl;
		}
		
		static void header ()
		{
			cout << "Id\tname\ttype\trate\tlocation\tyear\t\tstaff quality\troom quality" << endl;
			cout << "======= ======= ======= ======= =============== =============== =============== ===============" << endl;
		}
};

string Hotel::location = "Surat";

int main()
{
	int i,n;
	
	cout << "Enter the number of hotel : ";
	cin >> n;
	
	Hotel h[n];
	
	for(i=0; i<n; i++)
	{
		h[i].setData(i+1,n);
	}
	
	system("cls");
	
	Hotel::header();
	
	for(i=0; i<n; i++)
	{
		h[i].getData();
	}
}
