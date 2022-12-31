#include<iostream>
using namespace std;

class marks{
	private : 
		string s1;
		string s2;
		string s3;
		string s4;
		string s5;
		int m1;
		int m2;
		int m3;
		int m4;
		int m5;
		char grade;
		double per;
		double total;
		
	public : 
		marks()
		{
			cout << "========================================" << endl;
			cout << "Enter Subject 1 : ";
			cin >> s1;
			cout << "Enter Subject 2 : ";
			cin >> s2;
			cout << "Enter Subject 3 : ";
			cin >> s3;
			cout << "Enter Subject 4 : ";
			cin >> s4;
			cout << "Enter Subject 5 : ";
			cin >> s5;
			cout << "========================================" << endl;
		}
		void setData()
		{
			cout << endl << endl << endl <<endl << "========================================" << endl;
			cout << "Enter Marks Of Subject(out of 100)" << endl;
			cout << "========================================" << endl;
			cout << s1 << " : ";
			cin >> m1;
			cout << s2 << " : ";
			cin >> m2;
			cout << s3 << " : ";
			cin >> m3;
			cout << s4 << " : ";
			cin >> m4;
			cout << s5 << " : ";
			cin >> m5;
			cout << "========================================" << endl;
		}
		
		void proceedMarks()
		{
			total = m1+m2+m3+m4+m5;
			cout << "========================================" << endl;
			cout << "Total marks : " << total << endl;
			per = (total * 100) / 500;
			cout << "Percentage : " << per << endl;
			cout << "========================================" << endl;
			if (per > 90 && per <= 100)
			{
				grade = 'A';
			}
			else if (per > 80 && per <= 90)
			{
				grade = 'B';
			}
			else if (per > 70 && per <= 80)
			{
				grade = 'C';
			}
			else if (per > 60 && per <= 70)
			{
				grade = 'D';
			}else if (per > 33 && per <= 60)
			{
				grade = 'E';
			}
			else
			{
				grade = 'F';
			}
		}
		~ marks()
		{
			cout 	<< endl << endl 
					<< "========================================" << endl
					<< "\t\tResult" << endl
					<< "========================================" << endl
					<< s1 << "\t\t: " << m1 << endl
					<< s2 << "\t\t: " << m2 << endl
					<< s3 << "\t\t: " << m3 << endl
					<< s4 << "\t\t: " << m4 << endl
					<< s5 << "\t\t: " << m5 << endl
					<< "========================================" << endl
					<< "Grade \t\t: " << grade << endl
					<< "Percentage \t: " << per << endl
					<< "========================================" << endl;
					
		}
};
int main()
{
	marks m;
	m.setData();
	m.proceedMarks();
}
