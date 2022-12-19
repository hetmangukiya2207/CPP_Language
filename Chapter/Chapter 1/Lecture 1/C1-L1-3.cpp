#include<iostream>
using namespace std;

int main()
{
	int a[1000], count = 0,i;
	
	for(i=2020; i<=2030; i++)
	{
		if(i%4 == 0)
		a[count++] = i;
	}
	
	cout << endl << "Leap Year from 2020 To 2030" << endl << endl << endl;
	
	for(i=0; i<count; i++)
	{
		cout << a[i] << "\t";
	}
}
