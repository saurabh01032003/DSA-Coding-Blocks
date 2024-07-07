#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 1;
    int num;
    cout << "Enter Your Number: " << endl;
    cin >> num;
    if (num == 0 or num == 1)
    {
        cout << num << "is a fibbonacci:" << endl;
    }
    int c;
    while (true)
    {
        c = a + b;
        if (c == num)
        {
            cout << "Number is Fibbonacci" << endl;
            break; // return 0;
        }
        else if (c > num)
        {
            cout << "Number is not Fibbonacci" << endl;
            break;// return 0;
        }
        else

        {
            a = b;
            b = c;
        }
    }

    return 0;
}

