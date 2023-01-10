#include<iostream>
using namespace std;

class Division{
	int a;
	int b;
	public:
		void SetData()
		{
			cout << "Enter A : ";
			cin >> a;
			cout << "Enter B : ";
			cin >> b;
		}
		void GetData()
		{
			if(b == 0)
			{
				throw b;
			}
			else
			{
				cout << "Division : " << a-b << endl;
			}
		}
		void Div()
		{
			try
			{
				GetData();
			}
			catch(int b)
			{
				cout << b << " Can Not Divided By Zero" << endl;
			}
		}
};
int main()
{
	Division d1;
	d1.SetData();
	d1.Div();
}
