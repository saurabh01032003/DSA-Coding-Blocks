#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Number of Elements  you want to enter: " << endl;
    cin >> num;
    int i = 1;
    int val;
    int largest = 0;
    cout << "The numbers entered are :" << endl;
    while (i <= num)
    {
        cin >> val;
        if (val > largest)
        {
            largest = val;
        }

        cout << endl;
        i++;
    }

    cout << "Largest Number is: " << largest << endl;

    return 0;
}