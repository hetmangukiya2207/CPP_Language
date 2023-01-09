#include<iostream>
using namespace std;

class Logic{
	int a;
	int b;
	public:
		void setData()
		{
			cout << "========================================" << endl;
			cout << "Enter A : ";
			cin >> a;
			cout << "Enter B : ";
			cin >> b;
			cout << "========================================" << endl;
		}
		void getDiv()
		{
			if(b == 0)
			{
				throw b;
			}
			else
			{
				cout << "Division of " << a << " & " << b << " : " << a/b << endl;
			}
		}
		void mylogic()
		{
			try{
				getDiv();
			}
			catch(int b){
				
				cout << "========================================"<< endl;
				cout << b << " Can not divided by Zero !!" << endl;
				cout << "========================================"<< endl;
			}
			catch(...){
				
				cout << "========================================"<< endl;
				cout << b << " Can not divided by Symbol & Character !!" << endl;
				cout << "========================================"<< endl;
			}	
		}
};
int main()
{
	Logic l;
	l.setData();
	l.mylogic();
}
