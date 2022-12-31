#include<iostream>
using namespace std;

class stud{
	private :
		double fees;
		static double tf;
		string name;
	public :
		void setData(int i, int n)
		{
			cout << "========================================" << endl;
			cout << "Student " << i << " / " << n << endl;
			cout << "========================================" << endl << endl ;
			cout << "Enter name : ";
			cin >> name;
			cout << "Enter fees : ";
			cin >> fees;
			cout << endl << "========================================" << endl;
			tf += fees ;
		}
		static void totalFees()
		{
			cout << "Total Fees : " << tf << endl;
			cout << "========================================" << endl;
		}		
};

double stud::tf = 0;

int main()
{
	int i,n;
	stud s;
	
	cout << "Enter Student number : ";
	cin >> n;
	
	for(i=0; i<n; i++)
	{
		s.setData(i+1,n);
	}
	s.totalFees();
}
