#include<iostream>
using namespace std;

int s(int a[100],int b[100],int n)
{
	int i;
	
	for (i=0;i<n;i++)
	{
		a[i] = a[i] + b[i];
		b[i] = a[i] - b[i];
		a[i] = a[i] - b[i];
	}
}
int main()
	{
	int n,i;
	
	cout<<"Enter length :";
	cin>>n;
	
	int a[n];
	int b[n];
	
		for (i=0;i<n;i++)
		{
			cout<<"Enter elements of array a :";
			cin>> a[i];
		}
		
			for (i=0;i<n;i++)
		{
			cout<<"Enter elements of array b :";
			cin>> b[i];
		}
		
		s(a,b,n);
		
		cout<<"Aray after swapping :"<<endl;
			for (i=0;i<n;i++){
			cout<<"array a :"<<a[i]<<endl;
		}
			for (i=0;i<n;i++){
			cout<<"array b :"<<b[i]<<endl;	
		}				
}
