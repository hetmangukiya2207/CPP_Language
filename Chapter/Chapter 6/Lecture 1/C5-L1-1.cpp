#include<iostream>
using namespace std;

class X{
	protected:
		int a;
		int b;
		int c;
		int A,B,C;
		int sum=0;
};

class Y : public X{
		public:
			
		void setData()
		{
			
			cout << "=========================================" << endl;
			cout << "Enter Cube Value : " << endl;
			cout << "=========================================" << endl;
			cout << "A : ";
			cin >> a;
			cout << "B : ";
			cin >> b;
			cout << "C : ";
			cin >> c;
			cout << "=========================================" << endl;
		}
		
		void getData()
		{
			A = a*a*a;
			B = b*b*b;
			C = c*c*c;
			
			cout << "Value Of Cube : " << endl;
			cout << "=========================================" << endl;
			cout << "A : " << A << endl;
			cout << "B : " << B << endl;
			cout << "C : " << C << endl;
			cout << "=========================================" << endl;
			
			sum = A + B + C;
			
			cout << "Sum of all cube : " << sum << endl;
			cout << "=========================================" << endl;
		}
};

int main()
{
	Y sum;
	
	sum.setData();
	sum.getData();
}
