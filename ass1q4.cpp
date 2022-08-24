#include <iostream>
#include <cmath>
using namespace std;

class Calculation
{
    int a[5];
    int i;

public:
    void getData()
    {
        cout << "Enter the value of array: " << endl;
        for (i = 0; i < 5; i++)
        {
            cin >> a[i];
        }
    }

    void performsum()
    {
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum = sum + a[i];
        }
        cout << "The sum of array element is: " <<sum<< endl;
    }

    void findlargest()
    {
        int large = a[0];

        for (i = 0; i < 5; ++i)
        {
            if (a[i] > large)
                large = a[i];
        }

        cout << "The largest element is: " << large << endl;
    }

    void findsmallest()
    {
        int small = a[0];
        for (i = 0; i < 5; ++i)
        {

            if (a[i] < small)
                small = a[i];
        }
        cout << "The smallest element is: " << small << endl;
    }
};

int main()
{
    Calculation calc;
    calc.getData();
    calc.performsum();
    calc.findlargest();
    calc.findsmallest();

    return 0;
}