#include<iostream>
using namespace std;

class cal{
	public :
		void arg(int a,int b)
		{
			cout << "Division of " << a << " & " << b << " : " << a/b << endl;
		}
		void arg(int a,int b,int c)
		{
			cout << "Substraction of " << a << ", " << b << " & " << c << " : " << a-b-c << endl;
		}
		void arg(int a,int b,int c,int d)
		{
			cout << "Multiplication of " << a << ", " << b << ", " << c  << " & " << d << " : " << a*b*c*d << endl;
		}
		void arg(int a,int b,int c,int d,int e)
		{
			cout << "Addition of " << a << ", " << b << ", " << c  << " & " << d << " : " << a+b+c+d+e << endl;
		}
};

int main()
{
	cal a1;
	
	int a,b,c,d,e;
	cout << "========================================================" << endl;
	cout << "Enter the value..." << endl;
	cout << "========================================================" << endl;
	
	cout << "Enter A : ";
	cin >> a;
	cout << "Enter B : ";
	cin >> b;
	cout << "Enter C : ";
	cin >> c;
	cout << "Enter D : ";
	cin >> d;
	cout << "Enter E : ";
	cin >> e;
	cout << "========================================================" << endl;
	
	a1.arg(a,b);
	a1.arg(a,b,c);
	a1.arg(a,b,c,d);
	a1.arg(a,b,c,d,e);
}
