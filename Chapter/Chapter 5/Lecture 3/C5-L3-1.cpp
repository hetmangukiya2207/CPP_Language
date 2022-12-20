#include<iostream>
using namespace std;

class time2;
class time1{
	
	private:
		int min;
		int hou;
		int sec;
		
	public:
		void setData()
		{
			cout << "Time : 01" << endl;
			cout << "Enter the Hours : ";
			cin >> hou;
			cout << "Enter the Minute : ";
			cin >> min;
			cout << "Enter the Seconds : ";
			cin >> sec;
		}
		friend void sumTime(time1, time2);
};
		
		
class time2{
	
	private:
		int min;
		int hou;
		int sec;
		
	public:
		void setData()
		{
			cout << "Time : 02" << endl;
			cout << "Enter the Hours : ";
			cin >> hou;
			cout << "Enter the Minutes : ";
			cin >> min;
			cout << "Enter the Seconds : ";
			cin >> sec;
			
		}
			friend void sumTime(time1,time2);
};

	void sumTime(time1 t1,time2 t2){
			
			cout << t1.hou + t2.hou << ":" << t1.min + t2.min << ":" << t1.sec + t2.sec << endl;
		}
	

int main(){

time1 t1;
time2 t2;
t1.setData();
t2.setData();

sumTime(t1,t2);
}
