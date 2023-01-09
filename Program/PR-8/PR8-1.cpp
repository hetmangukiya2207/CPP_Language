#include <iostream>
using namespace std;

class Garage{
public:
  Garage(){
	   try {
	   } catch (string g) {
	   	throw g ;
	   }
  }
};
class Car : public Garage{
	string Fault = "Car Are Fully Damage...";
	public:
	  	Car() {
	   throw  Fault;
	   	Garage();
  		}
};
int main() {
  	try{
		Car a;
  	} 
  	catch (string g) {
    	cout << "Error From Car's Garage..." << g << endl;
  	}
}
