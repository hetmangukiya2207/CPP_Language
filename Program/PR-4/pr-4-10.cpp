#include<iostream>
using namespace std;
	
class Het {
	
	private :
		
		string Name;
		int Id;
		
	public :
		
		Het() {
		
			cout << "--------------------------------" << endl;
			cout << " Welcome to our store..........." << endl
				 << "--------------------------------" << endl; 	
		}
		
		Het(Het &m) {
			
			Name = m.Name;
			Id = 50;
		}
	
		Het(string Name, int Id) {
			
			this->Name = Name;
			this->Id = Id;
		}		
		
		void outputdata() {
			
				cout << endl << "--------------------------------" << endl;
			cout << " Name\t: " << Name << "   "<< endl
				 << " Id No\t: " << Id  << "" << endl
				 << "--------------------------------" << endl; 	
		}	
		
};

int main() {
	
	Het m;
	Het m0("Het", 1);
	Het m1("Jaydeep",2);
	Het m2(m0);
	
	
	m0.outputdata();
	m1.outputdata();
	m2.outputdata();
	
}

