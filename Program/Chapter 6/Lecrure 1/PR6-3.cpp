#include<iostream>
using namespace std;

class sum{
	protected :
			int a,b;
	public :
			sum()
			{
				cout << "=============================" << endl;
				cout << "Enter A : ";
				cin >> a;
				cout << "Enter B : ";
				cin >> b;
				cout << "=============================" << endl;
			}
			void ab()
			{
				cout << "Sum : " << a+b;
			}
};
class Sum : public sum{
	public :
			void ab()
			{
				cout << "Sum Of " << a << " & " << b << " = " << a+b << endl;
				cout << "=============================" << endl;
			}
};

int main()
{
	Sum s;
	s.ab();
}
