#include<iostream>
using namespace std;

int main()
{
	int n,i;
	
	cout << "Enter The Size Of Array : ";
	cin  >> n;
	cout << endl << endl;
	int arr[n];
	
	cout << "Enter Array Detail" << endl << endl;
	for(int i=0; i<n; i++)
	{
		cout << "Enter The Array a : ";
		cin  >> arr[i];
	}
	
	cout << endl << "---------------------------------" << endl;
	
	cout << endl << "Even Elements : " << endl << endl;
	for(i=0; i<n; i++)
	{
		if(arr[i]%2==0)
		{
			cout << "Array : " << arr[i] << endl << endl;
		}
	}
}
