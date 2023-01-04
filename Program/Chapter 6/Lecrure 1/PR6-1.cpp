#include<iostream>
using namespace std;

 class message{
 	private :
 		string name;
 	public :
 		message()
 		{
			cout << "==========================================================" << endl;
 			cout << "Welcom To HR's World..." << endl;	
		}
		print()
		{
			cout << "==========================================================" << endl;
			cout << "Enter Name : ";
			cin >> name;
			
			cout << endl << "Name : " << name << endl;
		}
		print(string surname)
		{
			cout << "==========================================================" << endl;
			cout << "Enter Surname : ";
			cin >> surname;
			
			cout << endl << "Surname : " << surname << endl;
			cout << "==========================================================" << endl;
			cout << "Full Name : " << name << " " << surname << endl;
			cout << "==========================================================" << endl;
		}
 };
 
 int main()
 {
 	string surname;
 	message m;
 	m.print();
 	m.print(surname);
 }
