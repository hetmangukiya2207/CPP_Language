#include<iostream>
using namespace std;

class Customber{
	
	private:
		
		int id;
		string name;
		int age;
		string cardname;
		string number;
		string city;
		double validity;
	
	public :
		void setData(int i, int n)
		{
			system("cls");
			cout << "Customber No \t\t\t: " << i << " Of " << n << endl;
			cout << "Enter Id \t\t\t: ";
			cin >> id;
			cout << "Enter Name \t\t\t: ";
			cin >> name;
			cout << "Enter Age \t\t\t: ";
			cin >> age;
			cout << "Enter Card Company Name \t: ";
			cin >> cardname;
			cout << "Enter Your Mobile Number \t: ";
			cin >> number;
			cout << "Enter City \t\t\t: ";
			cin >> city;
			cout << "Enter Your Validity (In Year) \t: ";
			cin >> validity;
		}
		
		static void header()
		{
			system("cls");
			cout << "id\tname\tage\tcompanyname\tmobile number\tcity\tvalidity\t" << endl;
			cout << "======= ======= ======= =============== =============== ======= =======" << endl; 
		}
		
		void getData()
		{
			cout << id << "\t" << name << "\t" << age << "\t" << cardname << "\t\t" << number << "\t" << city << "\t" << validity << endl;  
		}
};

int main ()
{
	int i,n = 5;
	Customber a[n];
	
	for(i=0; i<n; i++)
	{
		a[i].setData(i+1,n);
	}
	
	Customber::header();
	
	for(i=0; i<n; i++)
	{
		a[i].getData();
	}
}
