#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the Value of n : " << endl;
    cin >> num;
    int i = 1;
    int number;
    while (i <= num)
    {
        int j = 1;
        if (i % 2 == 0)
        {
            number = 0;
        }
        else
        {
            number = 1;
        }
        while (j <= i)
        {
            cout << number << " ";
            number = 1 - number;
            j++;
        }
        cout << endl;
        i++;
    }
}