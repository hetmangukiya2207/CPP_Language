#include<iostream>
using namespace std;

class Time {
	
	private :
		
		int hours1, hours2;
		int minit1, minit2, count, hours, minit;
		
	public :
		
		void getdata() {
			
			cout << "Enter The Hours 1 :";
			cin  >> hours1;
			cout << "Enter The Hours 2 :";
			cin  >> hours2;
			cout << endl << endl;
			cout << "Enter The Minit 1 :";
			cin  >> minit1;
			cout << "Enter The Minit 2 :";
			cin  >> minit2;
		}
		
		void putdata() {
			
		    hours  = hours1 + hours2;
			minit = minit1 + minit2;	
			
			if(minit>=60) {
		
				count = minit/60;
				minit  =  minit % 60;
				hours+=count;
			}
				
			cout << endl << "\t--------------------------------------------" << endl << endl;
			cout << "\t\t\t" << hours << " : " << minit << endl << 
endl;
			cout << "\t--------------------------------------------" 
     << endl << endl;
		}
};

int main() 
{
	
	Time t1;
	t1.getdata();
	t1.putdata();
}

