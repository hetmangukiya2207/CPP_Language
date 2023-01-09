#include <iostream>
using namespace std;
class A {
    int a;
public:
   void setDataA() {
      cout << "==============================" << endl;
      cout << "Enter The A : ";
      cin >> a;
   }
	virtual void getData() {
	   cout << endl << "A\t: " << a << endl << endl;
	}
};
class B : public A {
   int b;
public:
   void setDataB() {
      cout << "Enter The B : ";
      cin >> b;
      cout << "==============================" << endl;
   }
   virtual void getData() {
      cout << endl << "B : " << b << endl << endl;
      cout << "==============================" << endl;
   }
};
int main() {
   A *a1;
   B b1;
   a1 = &b1;
   a1->setDataA();
   b1.setDataB();
   a1->getData();
}
