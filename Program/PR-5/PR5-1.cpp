#include<iostream>
using namespace std;

class Shape
{
	protected:
		int width;
		int height;
		
	public :
		Shape(){
			cout << "Enter first vaue for triangle & second value for rectengle..." << endl;
			cout << "===================================================" << endl;
			cout << "Enter the width : ";
			cin >> width;
			cout << "Enter Height : ";
			cin >> height;
			cout << "===================================================" << endl;
		}
};

class triangle : public Shape
{
	protected :
		int ansT;
	public : 
		void tri()
		{
			ansT = (height * width) / 2;
		}
		void triR()
		{
			
			cout << "===================================================" << endl;
			cout << "Area of triangle : " << ansT << endl;
			cout << "===================================================" << endl;
		}
};

class rectengle : public Shape
{
		int ansR;
	public : 
		void rec()
		{
			ansR = height * width;
		}
		void recR()
		{
			
			cout << "===================================================" << endl;
			cout << "Area of Rectengle : " << ansR << endl;
			cout << "===================================================" << endl;
		}
};

int main()
{
	
	triangle t1;
	t1.tri();
	rectengle r1;
	r1.rec();
	t1.triR();
	r1.recR();
}
