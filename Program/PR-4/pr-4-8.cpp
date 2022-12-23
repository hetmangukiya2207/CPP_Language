#include<iostream>
using namespace std;


class Het {
	
	private :
		
		string Name;
		int Id;
		
	public :
	
		Het(string Name, int Id ) {
			
			this->Name = Name;
			this->Id  = Id ;
		}		
		
		void inputdata() {
			
			cout << endl << "--------------------------------" << endl;
			cout << " Name\t: " << Name << "   "<< endl
				 << " Id No\t: " << Id  << "" << endl
				 << "--------------------------------" << endl; 	
		}
};

int main() {
	
	Het h("Het", 1);
	Het h1("Gret",2);
	Het h2("Pramit",3);
	Het h3 = h;
	
	h.inputdata();
	h1.inputdata();
	h2.inputdata();
	h3.inputdata();
	
}
