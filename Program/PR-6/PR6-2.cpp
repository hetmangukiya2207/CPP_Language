#include<iostream>
using namespace std;

class Addition{
	int a;
	public :
		void addi()
		{
			cout << "=========================================" << endl;
			cout << "A : " << a << endl;
		}
		void addi(int a)
		{
			cout << "Value Of A : " << a << endl;
		}
		void addi(int a,int b)
		{
			cout << "Addition Of " << a << " & " << b <<  " = " << a-b << endl;
		}
		void addi(int a, int b , int c)
		{
			cout << "Addition Of " << a << " , " << b << " & " << c << " = " << a-b-c << endl;
			cout << "=========================================" << endl;
		}
		void addi(string name)
		{
			cout << "Created By : " << name;
		}
};

int main()
{
	int a,b,c;
	cout << "=========================================" << endl;
	cout << "Enter A : ";
	cin >> a;
	cout << "Enter B : ";
	cin >> b;
	cout << "Enter C : ";
	cin >> c;
	cout << endl << "=========================================" << endl;

	Addition f;
	
	f.addi();
	f.addi(a);
	f.addi(a,b);
	f.addi(a,b,c);
	f.addi("Het");
}

