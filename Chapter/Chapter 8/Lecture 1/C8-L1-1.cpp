#include<iostream>
using namespace std;
class Admin{
	protected :
		string CompanyName;
		long long int managerSalary;
		int employeeSalary;
		int totalStaff;
		long long int totalAnnualRevenue;
		string canTerminate;
		Admin()
		{
			CompanyName = "HR_Petrolium";
			managerSalary = 100000;
			employeeSalary = 100000;
			totalStaff = 10000;
			totalAnnualRevenue = 100000000;
			canTerminate = "Manager&Empolyee";
		}
		void myAccess()
		{
			cout << "===========================================" << endl;
			cout << "Admin Can Access This..." << endl;
			cout << "===========================================" << endl;
			cout << "Company Name    		: " << CompanyName << endl;
			cout << "Manager Salary  		: " << managerSalary << endl;
			cout << "Employee Salary 		: " << employeeSalary << endl;
			cout << "Total Staff     		: " << totalStaff << endl;
			cout << "Total Annual Revenue : " << totalAnnualRevenue << endl;
			cout << "You Can Terminate 	: " << canTerminate << endl;
			cout << "===========================================" << endl << endl << endl;
		}
};
class Manager : protected Admin{
	protected :
		void myAccess()
		{
			Admin::myAccess();
			string canterminate = "Empolyee";
			cout << "===========================================" << endl;
			cout << "Manager Can Access This..." << endl;
			cout << "===========================================" << endl;
			cout << "Company Name    		: " << CompanyName << endl;
			cout << "Manager Salary  		: " << managerSalary << endl;
			cout << "Employee Salary 		: " << employeeSalary << endl;
			cout << "Total Staff     		: " << totalStaff << endl;
			cout << "You Can Terminate 	: " << canTerminate << endl;
			cout << "===========================================" << endl << endl << endl;
		}
};
class Emp : private Manager{
	public :
		void myAccess()
		{
			Manager::myAccess();
			cout << "===========================================" << endl;
			cout << "Empolyee Can Access This..." << endl;
			cout << "===========================================" << endl;
			cout << "Company Name    		: " << CompanyName << endl;
			cout << "Employee Salary 		: " << employeeSalary << endl;
			cout << "===========================================" << endl << endl << endl;
		}
};
int main()
{
	Emp e1;
	e1.myAccess();
}
