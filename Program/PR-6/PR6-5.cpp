#include <iostream>
using namespace std;

class NUM {
private:
    int n;

public:
    void getNum(int x)
    {
        n = x;
    }
    void dispNum(void)
    {
        cout << "Number is: " << n;
    }
    NUM operator+(NUM& obj)
    {
        NUM x; 
        x.n = this->n + obj.n;
        return (x); 
    }
};

int main()
{
	int x;
	cout << "Enter X : ";
	cin >> x;
    NUM num1, num2, sum;
    num1.getNum(x);
    num2.getNum(x);
    sum = num1 + num2;

    sum.dispNum();
    cout << endl;
}
