#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Enter The Size Of Array :";
	cin  >> n;
	
	int a[n];
	
	cout << endl;
	for(int i=0; i<n; i++)
	{
		cout << " \t Enter The Element :";
		cin  >> a[i];
		
		for(int j=0; j<=100; j++)
		{
			if(j*j==a[i])
			{
				cout << "\t |---------------------------|" << endl;
				cout << "\t |Array Squre :" << j << "\t     |" << endl;
				cout << "\t |---------------------------|" << endl;
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}
