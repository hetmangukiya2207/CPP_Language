#include<iostream>
using namespace std;

class Div{
	public:
		Division(int a, int b)
		{
			cout << "Answer : " <<  a/b <<  endl;
		}
};
class divided : public Div{
	public:
		Division(int a, int b)
		{
			cout << "Div : " <<  a/b <<  endl;
		}
};
class Divid : public divided{
	public:
		Division(int a, int b)
		{
			cout << a << " & " << b << " Division : " << a/b << endl;
		}
};

int main() 
{
	int a,b;
	cout << "Enter A : ";
	cin >> a;
	cout << "Enter B : ";
	cin >> b;
	Divid d;
	d.Division(a,b);
}

