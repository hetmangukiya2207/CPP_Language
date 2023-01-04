#include<iostream>
using namespace std;

class incre{
	private :
		int a;
	public :
		void setData()
		{
			cout << "Enter A : ";
			cin >> a;
		}
		incre operator++(int){
			 incre j;
			 j.a = ++a;
			 cout << "A : " << j.a << endl;
			 j.a = --a;
			 j.a = --a;
			 cout << "A : " << j.a << endl;
		}
};

int main()
{
	incre i,i1,i2;
	i.setData();
	i1 = i++;
	
}
