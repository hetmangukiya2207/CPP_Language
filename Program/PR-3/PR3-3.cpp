#include<iostream>
using namespace std;

class Time {
	
	private :
		
		int hourse, minit, second;
		
	public :
		
		void getdata() {
			
			cout << "Enter The Second :";
			cin  >> second;
		}
		
		void putdata() {
			
			if(second>=3600) {
				
				hourse = second / 3600;
			}
			
			if(second % 3600 == 0) {
				
				minit = 0;
				second = 0;
			}
			
			
			if(second>=60) {
				
				minit = second / 60;
			}
			
			second %= 60;
			
			cout << endl << "------------------------" << endl << 
        "\t" << hourse << " : " << minit << " : " << second << endl;
		}
};

int main() {
	
	Time t1;
	
	t1.getdata();
	t1.putdata();
	
}


