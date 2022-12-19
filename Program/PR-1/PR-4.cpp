#include<iostream>
using namespace std;

int main()
{
	char a;
	
	cout << "Enter THe Any Character :";
	cin  >> a;
	
	if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U' || a=='a' || a=='i'|| a=='o' || a=='u')
	{
		cout << "Character Is Vowel...";
	}
	else if(a>='0' && a<='9')
	{
		cout << "Enter Not Digit..";
	}
	else
	{
		cout << "Character Is Consonont...";
	}
}
