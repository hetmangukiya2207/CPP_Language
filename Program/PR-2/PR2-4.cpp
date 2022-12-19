#include<iostream>
using namespace std;

inline int multip(int n, int i)
{
	cout<<n<<" * "<<i<<"\t"<<"= "<<n*i<<endl;
}

int main()
{
	int n,i;
	
	cout<<"Enter number : ";
	cin>>n;
	
	for(i=1;i<=10;i++)
	{
		multip(n,i);
	}
}
