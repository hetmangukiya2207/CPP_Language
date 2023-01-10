#include<iostream>
using namespace std;

class A
{
	public:
		virtual void classA()
		{
			cout<<"Class A"<<endl;	
		}	
};

class B : virtual public A
{
	public:
		void classB()
		{
			cout<<"Class B"<<endl;	
		}	
};


class C : virtual public A
{
	public:
		void classC()
		{
			cout<<"Class C"<<endl;	
		}	
};


class D : public C,public B
{
	public:
		void classD()
		{
			cout<<"Class D"<<endl;	
		}	
};
int main()
{
	D d1;
	d1.classD();
}

