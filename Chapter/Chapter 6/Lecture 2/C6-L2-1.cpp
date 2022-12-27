#include<iostream>
using namespace std;

class RBI {
	
	protected :
		
		int rate;
	
	public :
		
		void setDataRBI() {
			
			cout << endl << endl << "\t\t\t HELLO AVERY BANK" << endl << endl;
			cout << "---------------------------------------------------------" << endl;
			cout << "\t\t WELCOME TO RESERVE BANK OF INDIA" << endl << endl;
			
			cout << "Enter The Bank Rate(%) : ";
			cin  >> rate;
		}
};

class SBI : public RBI {
	
	private :
		
		int investAmount;
		int roi;
		
	public :
		
		void setDataSBI() {
			
			cout << endl << "\t\t WELCOM TO STATE BANK OF INDIA " << endl << endl;
			
			cout << "Enter The Your Bank Invest Amount : ";
			cin  >> investAmount;
		}
		
		void getDataSBI() {
			
			roi = investAmount * rate / 100;
			
			cout << endl << endl << "\t\t\t---  STATE BANK OF INDIA ---" << endl; 
			cout << endl << "\t\t Return on investment of STATE BANK OF INDIA : " << roi << endl;
			cout << "--------------------------------------------------------------------------- " << endl << endl;
		}
};


class BOB : public RBI {
	
	private :
		
		int investAmount;
		int roi;
		
	public :
		
		void setDataBOB() {
			
			cout << endl << "\t\t WELCOM TO BANK OD BARODA " << endl << endl;
			
			cout << "Enter The Your Bank Invest Amount : ";
			cin  >> investAmount;
		}
		
		void getDataBOB() {
			
			roi = investAmount * rate / 100;
			
			cout << endl << endl << "\t\t\t--- BANK OF BARODA ---" << endl; 
			cout << endl << "\t\t Return on investment of Bank Of Baroda : " << roi << endl;
			cout << "--------------------------------------------------------------------------- " << endl << endl;
		}
};

class ICICI : public RBI {
	
	private :
		
		int investAmount;
		int roi;
		
	public :
		
		void setDataICICI() {
			
			cout << endl << endl << "\t\t WELCOM TO  INDUSTRIAL CREDIT INVESTMENT CORPORATION  OF INDIA " << endl << endl;
			
			cout << "Enter The Your Bank Invest Amount : ";
			cin  >> investAmount;
		}
		
		void getDataICICI() {
			
		roi = investAmount * rate / 100;
			
			cout << endl << endl << "\t\t\t--- INDUSTRIAL  CREDIT INVESTMENT CORPORATION OF INDIA ---" << endl; 
			cout << endl << "\t\t Return on investment of INDUSTRIAL CREDIT INVESTMENT CORPORATION  OF INDIA : " << roi << endl;
			cout << "--------------------------------------------------------------------------- " << endl << endl;
		}
};

int main() {
	
	SBI s;
	BOB b;
	ICICI i;
	 
	s.setDataRBI();
	s.setDataSBI();
	s.getDataSBI();
	
	b.setDataRBI();
	b.setDataBOB();
	b.getDataBOB();
	
	i.setDataRBI();
	i.setDataICICI();
	i.getDataICICI();

	
}
