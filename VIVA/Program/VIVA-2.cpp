#include<iostream>
using namespace std;

class bank
{
	public :
	int Id;
	string Name;
	string Type;
	string Branch;
	int  Balance;
	public:
		void setdata(int i, int n)
		{
			system("cls");
				cout<<"Enter Bank Datil.."<<endl;
				cout<<endl;
				cout<<"Enter  Id       : ";
				cin>>Id;
				cout<<"Enter Name      : ";
				cin >> Name;
				cout<<"Enter Type      : ";
				cin>>Type;
				cout<<"Enter Branch name  : ";
				cin>>Branch;
				cout<<"Enter Balance      : ";
				cin>>Balance;
			}
				
		void search(int s)
		{
			int i;
			
				if(s==Id)
				{
					cout<<"Id       : "<<Id<<endl;
					cout<<"Name     : "<<Name<<endl;
					cout<<"Type     : "<<Type<<endl;
					cout<<"Branch name : "<<Branch<<endl;
					cout<<"Balance     : "<<Balance<<endl;
				}
			}
};

int main()
{
	int i,n=1,s;
	bank b[n];	
	for(i=0;i<n;i++)
	{
		b[i].setdata(i+1,n);
	}
	system("cls");
	cout<<"Enter your Account Number : ";
	cin >> s;
	
	for(i=0;i<n;i++){
			b[i].search(s);
	}
}

