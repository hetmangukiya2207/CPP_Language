#include<iostream>
using namespace std;

class A;

class B {
	
	private :
		int a;
		
	public :
		
		void setData() {
			
			cout << endl << endl << "INPUT A" << endl << endl;
			cout << "Enter The A : ";
			cin  >> a;
		}
		
		friend void Oyy(B , A);
};


class A {
	
	private :
		int b;
		
	public :
		
		void setData() {
			
			cout << endl << endl << "INPUT B" << endl << endl;
			cout << "Enter The B : ";
			cin  >> b;
		}
		
		friend void Oyy(B , A);
};

void Oyy(B h, A H) {
	
	cout << endl << "ADDISION A OF B" << endl;
	cout << "A + B : " << h.a + H.b << endl;
}

int main() {
	
	B h1;
	A   H1;
	
	
	h1.setData();
	H1.setData();
	
	Oyy(h1,H1);
}

