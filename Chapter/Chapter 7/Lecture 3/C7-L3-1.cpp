#include<iostream>
using namespace std;

class result{
	private:
		int sub=85;
		double percentage;
		int ans;
	public:
		void sci()
		{
			cout << "Result Of Examintion" << endl;
			cout << "=====================" << endl;
			cout << "Science \t: " << sub << endl;
		}
		void math()
		{
			cout << "Maths \t\t: " << sub - 3 << endl;
		}
		void eng()
		{
			cout << "English \t: " << sub - 1 << endl;
		}
		void guj()
		{
			cout << "Gujrati \t: " << sub + 1 << endl;
		}
		void ss()
		{
			cout << "Social Science \t: " << sub - 2 << endl;
		}
		void com()
		{
			cout << "Computer \t: " << sub + 2 << endl;
			cout << "=====================" << endl << endl;
		}
		void total()
		{
			ans = sub + (sub - 3) + (sub - 1) + (sub + 1) + (sub - 2) + (sub + 2);
			cout << "Total \t\t: " << ans << endl;
		}
		void per()
		{
			percentage = (ans * 100) / 600;
			cout << "Percentage \t: " << percentage << endl;
		}
		void grade()
		{
			if(percentage >90 && percentage <= 100)
			{
				cout << "Grade \t\t: A";
				cout << endl << "=====================" << endl;
			}
			else if(percentage >80 && percentage <= 90)
			{
				cout << "Grade \t\t: B";
				cout << endl << "=====================" << endl;
			}
			else if(percentage >70 && percentage <= 80)
			{
				cout << "Grade \t\t: C";
				cout << endl << "=====================" << endl;
			}
			else if(percentage >60 && percentage <= 70)
			{
				cout << "Grade \t\t: D";
				cout << endl << "=====================" << endl;
			}
			else if(percentage >33 && percentage <= 60)
			{
				cout << "Grade \t\t: E";
				cout << endl << "=====================" << endl;
			}
			else if(percentage >0 && percentage <= 33)
			{
				cout << "Grade \t\t: F";
				cout << endl << "=====================" << endl;
			}
		}
};

int main()
{
	result r;
	r.sci();
	r.math();
	r.eng();
	r.guj();
	r.ss();
	r.com();
	r.total();
	r.per();
	r.grade();
}
