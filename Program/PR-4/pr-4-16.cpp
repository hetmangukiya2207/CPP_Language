#include <iostream>
using namespace std;

class Bank
{
public:
    string name, email;
    long long int account, number;
    char n;
    char a;
    int x;
    long def = 200000;
    long dep, with;
    void phase1()
    {
        cout << endl << endl << "\t\t\t\t -: BANK MANAGEMENY SYSTEM :-" << endl;
        cout << "----------------------------------------------------------------------------------------------------------";

        cout << endl << endl << "\t\t\t\t -: Program Designed  			By :-" << endl;
        cout << "----------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "\t\t\t\t -:     Jaynesh Sodvadiya    :-" << endl;

        cout << endl << endl << "\t\t\t\t -:        Trainer        :-" << endl;
        cout << "----------------------------------------------------------------------------------------------------------";
        cout << endl << "\t\t\t\t -:     Jay Gondaliya    :-" << endl;

        cout << endl << endl << "\t\t\t      Press Any Key And Enter To Continue... " << endl;

        cin >> n;

        if (n >= 97 && n <= 122 || n >= 65 && n <= 90 || n >= 9 && n <= 96 || n >= 123 && n <= 126)
        {
            cout << "----------------------------------------------------------------------------------------------------------" << endl << endl;
            cout << "\t\t-: Press A To Login As Administrator Or S To Login As Staff :-" << endl << endl;
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            phase2();
        }
    }

    void phase2()
    {
        cin >> a;

        switch (a)
        {
        case 65:
            cout << endl << endl << "----------------------------------------------------------------------------------------------------------";
            cout << endl << endl << "\t\t\t\t -: Welcome As a Administrator :-";
            cout << endl << endl << "----------------------------------------------------------------------------------------------------------";
            phase3a();
            phase4();
            phase5();
            break;

        case 83:
            cout << endl << endl << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << endl << endl << "\t\t\t\t -: Welcome As a Staff :-";
            cout << endl << endl << "----------------------------------------------------------------------------------------------------------";
            phase3s();
            phase4();
            phase5();
            break;

        default:
            cout << endl << "\t\t\tEnter Valid Input" << endl << endl;
            cout << endl << endl ;
        }
    }

    void phase3a()
    {
        
        cout << endl << endl << "Enter The Name Of Administrator           :- ";
        cin >> name;
        cout << "Enter The Account Number Of Administrator :- ";
        cin >> account;
        cout << "Enter The Phone Number Of Administrator   :- ";
        cin >> number;
        cout << "Enter The Email Address Of Administrator  :- ";
        cin >> email;
        cout << endl << endl;
    }

    void phase3s()
    {
        cout << endl << endl << "Enter The Name Of Staff           :- ";
        cin >> name;
        cout << "Enter The Account Number Of Staff :- ";
        cin >> account;
        cout << "Enter The Phone Number Of Staff   :- ";
        cin >> number;
        cout << "Enter The Email Address Of Staff  :- ";
        cin >> email;
        cout << endl << endl;
    }

    void phase4()
    {
        cout << endl << endl << "----------------------------------------------------------------------------------------------------------" << endl;
        cout << "Name                :- " << name << endl;
        cout << "Account No          :- " << account << endl;
        cout << "Phone No            :- " << number << endl;
        cout << "Email               :- " << email << endl;
        cout << "----------------------------------------------------------------------------------------------------------" << endl;
    }

    void phase5()
    {
        cout << "\t\t\tPress [1] To Deposite Money :- " << endl;
        cout << "\t\t\tPress [2] To Transfer Money :- " << endl;
        cout << "\t\t\tPress [3] To Withdraw Money :- " << endl;

        cin >> x;

        switch (x)
        {
        case 1:
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\tEnter Deposite Value    :- ";
            cin  >> dep;
            cout << endl << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\tYour Actual Ammount is  :- " << def << endl;
            cout << "\t\t\tYour Account Balence is :- " << def + 
           dep << endl;
            break;

        case 2:
            cout << endl << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\tEnter Transfer Value    :- ";
            cin  >> with;
            cout << endl << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\tYour Actual Balence is  :- " << def << endl;

            if (with <= 200000)
            {
                cout << "\t\t\tYour Account Balence is :- "<< def - with << endl;
            }
            else
            {
                cout << "\t\t\tYou Cant Enter Money More Than Account Balence !!";
            }
            break;

        case 3:
            cout << endl << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\tEnter Withdraw Value    :- ";
            cin  >> with;
            cout << "\n----------------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\tYour Actual Balence is  :- " << def << endl;

            if (with <= 200000)
            {
                cout << "\t\t\tYour Account Balence is :- " << def - with << endl;
            }
            else
            {
                cout << "\t\t\tYou Cant Enter Money More Than Account Balence !!";
            }

            default :
            cout << "\t\t\tPlease Enter Valid Input ";
        }
    }
};

int main()
{
    Bank b1;
    b1.phase1();
}
