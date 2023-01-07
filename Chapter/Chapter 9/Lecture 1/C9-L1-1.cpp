#include<iostream>
using namespace std;
#include<string.h>

class Logic {
	public :
	int i;
	int count = 0;
	string Incorect = "Enter Valid passwordword";
	string a;
	int length;
	char password[50];
	string positivem = "You entered correct passwordword" ;
	public :
		
		//division- logic
		void div(double a, double b){
			
			if(b==0){
				
				throw b;	
			}else{
				cout << "========================================"<< endl;
				cout <<" Answer : " << a/b << endl;
				cout << "========================================"<< endl;
			}
		}
		//voting-logic
		double allowvoter(double age){
			
			if(age <18.0){
				
				throw age;
			}
			else{
				
				cout << "========================================"<< endl;
				cout <<"You Can Vote..." << endl; 
				cout << "========================================"<< endl;
			}
		}
		//passwordword-logic
		void passwordcheck(){
				cout << "========================================"<< endl;
			
				cout <<" Enter Email : ";
				cin  >> a; 
				
				cout <<" Enter password : ";
				cin  >> password; 
				cout << "========================================"<< endl;
				
				length = strlen(password);
		
			 	for( i=0 ; i < length ; i++)
	           	{
	                if(password[i]>= 65 && password[i]<=90) {
	
	                    count++;
	                }
	           }
	          
	            if(count >= 1) {
	              cout << endl <<positivem << endl;   
	           }
	           else {
	               throw count;
	           }
		}	
};

class Division : public Logic {
	double a,b;
	
	public :
		void setdata(){
			
				cout << "========================================"<< endl;
			cout <<" Enter A : ";
			cin  >> a; 
			
			cout <<" Enter B : ";
			cin  >> b;
				cout << "========================================"<< endl; 
		}
		
		void getdivision(){
			try {
				div(a,b);
			}
			
		catch(double b){
				
				cout << "========================================"<< endl;
				cout << " " << b <<" Can not divided by Zero" << endl;
				cout << "========================================"<< endl;
			}	
		}		
	};

class Vote : public Logic {
	double age;
	public :
		void setdatavote(){
			cout << "========================================"<< endl;
			cout <<" Enter your Age : ";
			cin  >> age; 
			cout << "========================================"<< endl;
			}
		
		void geteligibility(){
			try {
				allowvoter( age);
			}
			
			catch(double age){
				cout << "========================================"<< endl;
				
				cout << "You Can Note Vote..." << endl;
				cout << "========================================"<< endl;
			}
				catch(string age){
				cout << "========================================"<< endl;
				
				cout << " " << age <<"You Can Note Vote..." << endl;
				cout << "========================================"<< endl;
			}			
		}
		
	};

class passwordword : public Logic{
	
	public :
	
		
		void getpasswordword(){
			try {
				passwordcheck();
			}
			
		catch(int count){	
				cout << Incorect << endl;
			}
		
		}
};

int main(){
	
	Division d;
	d.setdata();
	d.getdivision();
	
	Vote v;
	v.setdatavote();
	v.geteligibility();
	
	passwordword p;
	p.getpasswordword();
}
