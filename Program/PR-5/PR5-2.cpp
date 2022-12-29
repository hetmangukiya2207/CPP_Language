#include<iostream>
using namespace std;

class Mother {
	
	public :
		
		void display() {
			cout << "============================================";
			cout << endl << "Mother Says :" << endl;
			cout << "============================================" << endl;
			cout << "Where are you my daughter ?" << endl;
			cout << "You can some eat my little dau?" << endl; 
			cout << "============================================";
		}
};

class Daugther : public Mother {
	
	public :
		
		void display() {
			
			Mother :: display();
			
			cout << endl << "Daughter :" << endl;
			cout << "============================================" << endl;
			cout << "Mom i am goint to home now." << endl;
			cout << "I want to eat hot double chhesse pizza." << endl;
			cout << "============================================";
		}
};

int main() {
	
	Daugther dau;
	
	dau.display();
}
