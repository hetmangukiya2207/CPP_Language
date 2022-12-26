#include<iostream>
using namespace std;

class P{
	protected:
		double Temperature;
		double Fehrenheit;
		double Kelvin;
		
	
	public:
		
		void Temp()
		{
			cout << "===============================================================" << endl ;
			cout << "Enter Temperature Value : ";
			cin >> Temperature;
			cout << "===============================================================" << endl << endl << endl ;
			
			
			cout << "===============================================================" << endl << endl;
			cout << "Temperature : " << Temperature << endl << endl ;
		}
};

class Q : public P{
	public:
		void Fern()
		{
			Fehrenheit = (Temperature * 9 / 5) + 32;
			
			cout << "Fehrenheit : " << Fehrenheit << endl << endl ;
		} 
};

class R : public Q{
	
	public: 
			void kel()
			{
				Kelvin = 273.5 + ((Fehrenheit - 32.0) * (5.0/9.0));
				
				cout << "Kelvin : " << Kelvin << endl << endl;
			cout << "===============================================================" << endl ;
			}
	
};

int main()
{
	R h;
	
	h.Temp();
	h.Fern();
	h.kel();
}
