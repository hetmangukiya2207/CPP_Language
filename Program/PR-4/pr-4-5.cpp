#include<iostream>
using namespace std;

class India {
	
	private :
		
		string s;
		string d;
		string cc;
		static string c;
	
	public :
		
		void inputdata() {
			
			cout << endl << endl << "INPUT COUNTRY DATA" << endl;
			cout << "-------------------------------------------------------------" << endl ;
			cout << "Enter The States : ";
			cin  >> s;
			cout << "Enter The District : ";
			cin  >> d;
			cout << "Enter The Capital City : ";
			cin  >> cc;
		}
		
		static void States() {
			
			cout << "=======================================================================================" << endl;
			cout << endl << endl << "STATES\tDISTRICT CAPITAL COUNTRY\n-------\t-------\t-------\t-------\n";
		}
		
		void outputdata() {
			
			cout << s << "\t" << d << "\t" << cc << "\t"<< c << "\n";
		}
};

string India :: c = "India";

int main() {
	
	int n;
	
	cout << "Enter a no. of country data : ";
	cin  >> n;
	
	India d[n];
	
	for(int i=0; i<n; i++)	 d[i].inputdata();
	
	India :: States();
	
	for(int i=0; i<n; i++) 	d[i].outputdata();
	
	
}

