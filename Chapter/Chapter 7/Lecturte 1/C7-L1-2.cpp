#include<iostream>
using namespace std;

class cricket
{
	public :
		void score(int over)
		{
			if(over != 20 && over != 90)
			{
				cout << endl << endl << "======================================================================" << endl
						<< "Welcome to cricket tournament..." << endl << endl;
				cout << "Team : INDIA VS PAKISTAN" << endl << endl;
				cout << "Over : " << over << endl << "======================================================================" << endl; 
			}
		}
};

class T20 : public cricket
{
	public :
		void score(int over)
		{
			if(over == 20)
			{
				cout << endl << endl << "======================================================================" << endl
						<< "Welcome to T20 Cricket tournament..." << endl << endl;
				cout << "Team : INDIA VS PAKISTAN" << endl << endl;
				cout << "Over : 20" << endl << "======================================================================" << endl; 
			}
		}
};

class Test : public cricket
{
	public :
		void score(int over)
		{
			if(over == 90)
			{
				cout << endl << endl << "======================================================================" << endl
						<< "Welcome to Test Match..." << endl << endl;
				cout << "Team : INDIA VS PAKISTAN" << endl << endl;
				cout << "Over : 90" << endl << "======================================================================" << endl; 
			}
		}
};

int main()
{
	int over;
	
	cout << "Enter the over : ";
	cin >> over;
		
	cricket c;
	T20 t;
	Test T;
	
	t.score(over);
	T.score(over);
	T.cricket::score(over);
}
