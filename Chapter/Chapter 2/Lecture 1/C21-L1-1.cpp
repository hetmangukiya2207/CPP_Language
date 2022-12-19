#include<iostream>
using namespace std;

int sum(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int mul(int a, int b)
{
	return a*b;
}

int div(int a, int b)
{
	return a/b;
}

int mod(int a, int b)
{
	return a%b;
}

int main()
{
	
	int a, b, n, ans;
	
	cout << endl <<"1. Addition\t\t+" << endl;
	cout <<"2. Subtraction\t\t-0" << endl;;
	cout <<"3. Multiplication\t*" << endl;
	cout <<"4. Division\t\t/" << endl;
	cout <<"5. Moduls\t\t%" << endl;
	cout <<"6. Exit " << endl;

	
	do {
	
	cout << endl << "Enter The a : ";
	cin  >> a;
	cout << "Enter The b : ";
	cin  >> b;
	
	cout << endl <<"Enter The Any Choice :";
	cin  >> n;
	
	switch(n)
	{
		case 1: 
		    
		    ans = sum(a,b);
		    cout << endl << " ADDITION : " << ans << endl;
		    break;
		
		case 2: 
		    
		    ans = sub(a,b);
		    cout << endl << "SUBTRACTION : "<< ans << endl;
		    break;
		    
		case 3: 
		    
		    ans = mul(a,b);
		    cout << endl << "MULTIPLICATION :" << ans << endl;
		    break;
		    
		case 4: 
		    
		    ans = div(a,b);
		    cout << endl <<" DIVISION : " << ans << endl;
		    break; 
			
		case 5: 
		    
		    ans = mod(a,b);
		    cout << endl <<" MODULS : " << ans << endl;
		    break;  
		    
		case 6:
			
			cout << endl << "Thanks For...." << endl;
			break;
		
		default :
			
			 cout << endl << "Inavalid Syntax." << endl;			 
	}
	n++;
  }while(n<=6);
}

