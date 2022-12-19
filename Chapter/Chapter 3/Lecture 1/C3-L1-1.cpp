#include<iostream>
using namespace std;

class Employee
{
	private :
		
		int EmpId;
		string EmpName;
		string EmpRole;
		int EmpAge;
		int EmpSalary;
		double EmpExperience;
		string EmpCity;
		string EmpCompanyName;
		
	public :
		
		void setData()
		{
			cout << "Enter Employee Id \t\t: ";
			cin >> EmpId;
			cout << "Enter Employee Name \t\t: ";
			cin >> EmpName;
			cout << "Enter Employee Role \t\t: ";
			cin >> EmpRole;
			cout << "Enter Employee Age \t\t: ";
			cin >> EmpAge;
			cout << "Enter Employee Salary \t\t: ";
			cin >> EmpSalary;
			cout << "Enter Employee Experience \t: ";
			cin >> EmpExperience;
			cout << "Enter Employee City \t\t: ";
			cin >> EmpCity;
			cout << "Enter Employee Comapany Name \t: ";
			cin >> EmpCompanyName;
			cout << endl << endl << endl;
		}
		
		void getData()
		{
			cout << "Id \t\t: " << EmpId << endl
				  << "Name \t\t: " << EmpName << endl
				  << "Role \t\t: " << EmpRole << endl
				  << "Age \t\t: " << EmpAge << endl
				  << "Salary \t\t: " << EmpSalary << endl
				  << "City \t\t: " << EmpCity << endl
				  << "Comapny Name \t: " << EmpCompanyName << endl
				  << endl << endl;
		}
};

int main()
{
	Employee e1, e2, e3, e4, e5;
	
	e1.setData();
	e2.setData();
	e3.setData();
	e4.setData();
	e5.setData();
	
	e1.getData();
	e2.getData();
	e3.getData();
	e4.getData();
	e5.getData();
}
