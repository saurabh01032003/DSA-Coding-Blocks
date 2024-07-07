#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 1;
    int num;
    cout << "Enter the nth Number: " << endl;
    cin >> num;
    int i = 2;
    int sum = 0;
    if (num == 0)
    {
        cout << "The Zeroth Fibbonacci Number is: " << 0 << endl;
    }
    else if (num == 1)
    {
        cout << "First Fibbonacci Number is: " << 1 << endl;
    }
    else
    {
        while (i <= num)
        {
            sum = a + b;
            a = b;
            b = sum;
            i++;
        }
        cout << "The " << num << "th Fibbonacci Number is :" << sum << endl;
    }
    return 0;
}