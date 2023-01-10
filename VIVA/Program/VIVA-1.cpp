#include<iostream>
using namespace std;

int fac(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n*fac(n-1);
	}
}

int main()
{
	int n;
	cout << "====================================" << endl;
	cout << "Enter the number: ";
	cin >> n;
	cout << "====================================" << endl << endl << endl;
	
	cout << ".....Answer Of Factorial Number....." << endl << endl;
	
	cout << "====================================" << endl;
	cout << n << " factorial number is " << fac(n) << endl;
	cout << "====================================" << endl;
}

