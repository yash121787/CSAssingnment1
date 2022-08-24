#include<iostream>
#include<cmath>
using namespace std;

class que3
{
    int a, b;

public:
    void getData()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }

    void Operation()
    {
        cout << "The value of a + b is: " << a + b << endl;
        cout << "The value of a - b is: " << a - b << endl;
        cout << "The value of a * b is: " << a * b << endl;
        cout << "The value of a / b is: " << a / b << endl;
    }
};

int main()
{
    que3 calc;
    calc.getData();
    calc.Operation();
    return 0;
}