#include<iostream>
using namespace std;

class Mathametical{
	protected:
		int r;
		int l;
		int b,h;
		double PI = 3.14;
		double cir,tri,rec;
	public:
		virtual void calculate(int a, char b) = 0;
		
		double circle()
		{
			cir = PI * r * r;
			cout << "Area Of Circle : " << cir << endl;
		}
		double triangle()
		{
			tri = (b*h)/2;
			cout << "Area Of Triangle : " << tri << endl;
		}
		double rectengle()
		{
			rec = l*b;
			cout << "Area Of Rectangle : " << rec << endl;
		}
};

class access : protected Mathametical{
	public:
		int a;
		void calculate(int a, char x)
		{	
			cout << "Enter 1 : Area Of Circle" << endl
				  << "Enter 2 : Area Of Triangle" << endl
				  << "Enter 3 : Area Of Rectengle" << endl << endl << endl
				  << "==========================================" << endl
				  << "Press Any Number : ";
			cin >> a;
			
			switch (a)
			{
				case 1 :
					{
						cout << endl << endl << "============================================" << endl;
						cout << "Enter Radius : ";
						cin >> r;
						cout << endl << "==================================================" << endl;
						circle();
						break;
					}
				case 2 :
					{
						cout << endl << endl << "============================================" << endl;
						cout << "Enter Base : ";
						cin >> b;
						cout << "Enter Height : ";
						cin >> h;
						cout << endl << "==================================================" << endl;
						triangle();
						break;
					}
				case 3 :
					{
						cout << endl << endl << "============================================" << endl;
						cout << "Enter Base : ";
						cin >> b;
						cout << "Enter Length : ";
						cin >> l;
						cout << endl << "==================================================" << endl;
						rectengle();
						break;
					}
			}
				  
		}
};

int main()
{
	access a1;
	a1.calculate(1,'A');
}
