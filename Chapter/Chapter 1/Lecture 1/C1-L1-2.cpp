#include<iostream>
using namespace std;
#include<string.h>

int main()
{
	int n,i;
	char name[100];

	cout << "Enter Your String : ";
	cin >> name;
	
	n = strlen(name);
	
	for(i=0; i<n; i++)
	{
		if(name[i] >= 65 && name[i] <= 90)
		{
			name[i] + 32;
		}
		else
		{
			name[i] -= 32;
		}
	}
	cout << "Toggle Case : " << name;
}
