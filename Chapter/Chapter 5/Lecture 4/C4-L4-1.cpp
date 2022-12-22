#include<iostream>
using namespace std;
class Companies {
	
	private :
		
		int cid;
	    string cn;
		int csq;
		string cr;
		int cird;
		int ced;
		string cc;
		
	public :
	
		Companies(int i,int n,int cid,string cn,int sq,string cr,int cird,int ced,string cc) {
				
            cout << i + 1 << "Company Data : " << endl << endl;
		    cout << " Company Id\t: " << cid << endl
			     << " Company Name\t: " << cn << endl
			     << " Company Staff Quanitity\t: " << csq << endl
			     << " Company Revenue\t: "<< cr << endl
			     << " Company Import Raw Diamonds\t: "<< cird << endl
			     << " Company Export Diamonds\t: " << ced << endl 
      	       	 << " Company CEO\t: " << cc<< endl << endl;
	        
		}
};

int main() {
	
	int n;
	int cid;
    string cn;
	int csq;
	string cr;
	int cird;
	int ced;
	string cc;
	
	cout << "Enter a number of companies. : ";
	cin  >> n;	 
	for(int i=0; i<n; i++) 	
	{
	 	
		cout << i+1<< "-" << "Company Data "<< endl << endl;
		cout << "Enter The Company Id : ";
		cin  >> cid;
		cout << "Enter The Company Name : ";
		cin  >> cn;
		cout << "Enter The Company Staff Quantity : ";
		cin  >> csq;
		cout << "Enter The Company Revenue (per year) : ";
		cin  >> cr;
		cout << "Enter The Company Import Raw Diamonds (no. of raw diamonds imported per year) : ";
		cin  >> cird;
		cout << "Enter The Company Export Diamonds (no. of diamonds per year) : ";
		cin  >> ced;
		cout << "Enter The Company CEO (name of CEO of the company):";
		cin  >> cc;
		cout << endl;
		
	}
}

