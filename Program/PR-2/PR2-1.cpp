#include<iostream>
using namespace std;

int sum(int a,int b)
{
	int c;
	
	c = a+b;
	
	return c;
}

int avg(int sum)
{
	int d;
	
	d = sum/2;
	
	cout<<"average : "<<d<<endl;
}

int main()
{
	int a,b;
	
	cout<<"Enter a:";
	cin>>a;
	
	cout<<"Enter b:";
	cin>>b;
	
	avg(sum(a,b));
}
