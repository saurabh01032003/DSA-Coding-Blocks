#include<iostream>
using namespace std;
int main ()
{
     int a, b, c;
    cout << "Enter the first Number :" << endl;
    cin >> a;
    cout << "Enter the Second Number :" << endl;
    cin >> b;
    cout << "Enter the Third Number :" << endl;
    cin >> c;
    if (a > b && a > c)
    {
        cout << a << " is Largest Number" << endl;
    }
        else
        {
            if (b > c)
            {
                cout << b << " is Largest Number"  << endl;
            }
            else
            {
                cout << c << " is Largest Number" << endl;
            }
        }
    
    return 0;
}