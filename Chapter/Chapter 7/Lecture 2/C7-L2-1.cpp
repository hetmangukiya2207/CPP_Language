#include<iostream>
using namespace std;

class N{
	private:
		int a;
	public :
		void setData()
		{
			cout << "Enter A : ";
			cin >> a;
		}
		
		N operator< (N n2)
		{
			N tmp;
			
			if(a<n2.a)
			{
				tmp.a = n2.a;
				cout << "The Highest Number : " << tmp.a << endl;
				return tmp;
			}
			else if(a>n2.a)
			{
				tmp.a = a;
				cout << "The Highest Number : " << tmp.a << endl;
				return tmp;
			}
			else if(a==n2.a)
			{
				tmp.a = a = n2.a;
				cout << "Bothe Are Same : " << tmp.a << endl;
			}
			else
			{
				cout << "Invalid Choice..." << endl;
			}
		}
};

int main()
{
	N n1,n2,n3;
	
	n1.setData();
	n2.setData();
	
	n3 = n1<n2;
}
