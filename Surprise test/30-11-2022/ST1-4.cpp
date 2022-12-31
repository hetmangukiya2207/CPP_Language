#include<iostream>
using namespace std;
 
 class Resturant {
  	private : 
  		int id;
  		string name;
  		public :
  		Resturant () 
		{
  			cout << "Welcome to the HR's Resturant"<< endl;
			cout << "=============================" << endl;
  	    }

  		Resturant (int id, string name) 
		{
  			this -> id = id;
  			this -> name = name;
  			
  			cout << "Your id is :" << id << endl
  				<< "Name :" << name << endl;
			cout << "=============================" << endl << endl;
  		}
  		
  		Resturant (Resturant &h) 
		{
  			id = h.id;
  			name = h.name;

  			cout << "Your id is :" << id << endl
  				     << "Name :" << name << endl;
			cout << "=============================" << endl;
  		}
};

int main() 
{
  	Resturant h;
  	Resturant h1(1,"Het");
  	Resturant h2(2,"Jaydeep");
  	Resturant h3(3,"Om");
  	Resturant h4 = h1;
  	Resturant h5(h2);
}
