#include <iostream>
using namespace std;

class Market {
public:

    void Verify() {
        Market m;
        string id = "admin";
        int pass = 606060; 

        string NumberId;
        int password;

        cout << "Please Enter admin And 606060" << endl << endl;
        cout << "Enter user id : ";
        cin >> id;
        cout << "Enter pasword : ";
        cin >> password;

        if(id == id && pass == password) {
            cout << "Login Successful";
        }
        else {
            cout << "Enter correct password or user id";
            m.Verify();
        }

    }

        int ino;
        string iname;
        int q;
        int t;
        int d;

    void setData() {



        cout << "Enter Item Number : ";
        cin >> ino;
        cout << "Enter Item Name : ";
        cin >> iname;
        cout << "Enter Item Quantity : ";
        cin >> q;
        cout << "Enter Tax : ";
        cin >> t;
        cout << "Enter Discount : ";
        cin >> d;

    }
    
    void heading() {

    	cout << endl << "NUMBER" << "\t" << "NAME " << "\t" << "QUANTITY" << "\t" << "TAX" << "\t" << "DISCOUNT" << endl;
        cout << "------" << "\t" << "-----" << "\t" << "--------" << "\t" << "---" << "\t" << "--------" << endl;
	}

    void getData() {

    	cout << ino << "\t" << iname << "\t " << q << "\t\t" << t << "\t" << d << endl;
    }

   
};

int main()
{
    Market m1[10];
    
    m1[0].Verify();

    int n;
    
    cout << "\n\nhow many item want you purchase ? : ";
    cin >> n;

    for(int i=0; i<n; i++) {
        cout << endl << endl;
        m1[i].setData();
    }

    Market temp;
    for(int i=0; i<n; i++) {
        for(int j=i+1;j<n;j++) {
            if(m1[i].ino > m1[j].ino) {
                temp = m1[i];
                m1[i] = m1[j];
                m1[j] = temp;
            }
        }
    }

    cout <<"----------------------------------------------------------------------------------------------------------------";
    
    m1[0].heading();

    for(int i=0; i<n; i++) {
        cout << endl << endl;
        m1[i].getData();
    }

}
