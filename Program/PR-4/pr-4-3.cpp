#include<iostream>
using namespace std;

class Hotel {
	
	private :
		int id;
		string name;
		string type;
		int ss; 
		int rs;
		int ey;
		string add;
		string rt;
		string w;
		
	public :
		
		void inputdata(int id,string name,string type,int ss,int rs,int ey,string add,string  rt,string w) {
			
			this->id = id;
			this->name = name;
			this->type = type;
			this->ss = ss;
			this->rs = rs;
			this->ey = ey;
			this->add = add;
			this->rt = rt;
			this->w = w;
		}
		
		void outputdata() {
			
			cout << endl << "DISPLAY HOTEL DATA" << endl << endl << endl;
			
			cout <<"HOTEL ID             : " << id << endl
				<< "HOTEL NAME           : " << name << endl
				<< "HOTEL TYPE           : " << type << endl
				<< "HOTEL STAFF SIZE     : " << ss << endl
				<< "HOTEL ROOM SIZE      : " << rs << endl
				<< "HOTEL ESTABLISH YEAR : " << ey << endl
				<< "HOTEL ADDRESS        : " << add << endl
				<< "HOTEL RATING TYPE    : " << rt << endl
				<< "HOTEL WEBSITE        : " << w << endl;
		}
		
};

int main() {
	
	Hotel h1;
	
    h1.inputdata(1 , "HRHotel" , "Motel" , 100 , 250 , 1998 , "surat" , "5star" , "hrhotel.com");
	h1.outputdata();
}
