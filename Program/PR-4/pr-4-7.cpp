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
			
			cout << endl << endl << "--------------------------------" << endl;
			cout << " Name\t: " << Name << "   "<< endl
				 << "--------------------------------" << endl
				 << " Id No\t: " << Id  << "" << endl
				 << "--------------------------------" << endl << endl; 	
		}
};


int main() {
	
	Het d("Het", 1);
	
	d.inputdata();
}
