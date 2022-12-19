#include<iostream>
using namespace std;

class Student{
	
	private :
		int id;
		string name;
		int age;
		string course;
		string email;
		string city;
		string collage;
		
	public :
		
		void setData(int i, int n){
			system("cls");
			cout << "Student Number " << i << " Of : "<< n << endl;  
			
			cout << "Enter Student Id \t: ";
			cin >> id;
			cout << "Enter Student Name \t: ";
			cin >> name;
			cout << "Enter Student Age \t: ";
			cin >> age;
			cout << "Enter Student Course \t: ";
			cin >> course;
			cout << "Enter Student Email \t: ";
			cin >> email;
			cout << "Enter Student City \t: ";
			cin >> city;
			cout << "Enter Student Collage \t: ";
			cin >> collage;
		}
		
		static void header()
		{
			cout << "Id\tName\tAge\tCourse\tEmail\t\tCity\tCollage\n======= ======= ======= ======= =============== ======= =======\n"; 
		} 
		
		void getData()
		{
			cout << id << "\t" << name << "\t" << age << "\t" << course << "\t" << email << "\t" << city << "\t" << collage << endl;
		}
};

int main()
{
	int n = 5;
	Student s[n];
	
	for(int i=0; i<n; i++)
	{
		s[i].setData(i+1,n);
	}
	
	Student::header();
	
	for(int i=0; i<n; i++)
	{
		s[i].getData();
	}
}
