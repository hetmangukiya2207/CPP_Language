#include<iostream>
using namespace std;

class Student {
	
	private :
		
		int rollNo;
		string name;
		int standard;
		int age;
		long long int ContactNumber;
		string address;

	public : 	
		void inputdata(int i, int n) {
			
			system("cls");
			cout <<endl << "INPUT STUDENT  DATA "<< i << " of "<< n << endl;
			
			cout << "Enter a Student Roll No : ";
			cin  >> rollNo;
			cout << "Enter The Student Name : ";
			cin  >> name;
			cout << "Enter The Student Standard : ";
			cin  >> standard;
			cout << "Enter The Student Age : ";
			cin  >> age;
			cout << "Enter The Student Contact No : ";
			cin  >> ContactNumber;
			cout << "Enter The Student Address : ";
			cin  >> address;
		}

		static void header(){
			system("cls");
			cout <<"ID\tNAME\tSTD\tAGE\tADDRESS\tMO.NO\n======= ======= ======= ======= ======= =======\n";
		}
		void outputdata(){
			
				cout << endl << rollNo << "\t"<< name << "\t" 
			          << standard << "\t" << age 
				       <<  "\t" << address<<"\t" << ContactNumber <<endl;
				  
		}
			
	};
	
	int main(){
		int i,n;
		
		cout << "Enter a no. of student : ";
		cin >> n;
		
		Student s[n];
		
		for(i=0;i<n;i++)
			s[i].inputdata(i+1,n);
			
		Student::header();
		
		for(i=0;i<n;i++)
			s[i].outputdata();		
	}
