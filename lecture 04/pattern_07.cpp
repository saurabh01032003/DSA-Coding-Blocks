#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the value of num : " << endl;
    cin >> num;
    int i = 1;
    while (i <= num)
    {
        // print (n - i) spaces
        int j = 1;
        while (j <= num - i)
        {
            cout << "_";
            j++;
        }

        // print numbers of half triangle elements
        int number = i;
        int k = 1;
        while (k <= i)
        {
            cout << number;
            number++;
            k++;
        }
        // Print remaining numbers
        int m = 1;
        int value =  2 * i - 2;
        while (m <= i - 1)
        {
            cout <<value;
            value--;
            m++;
        }
        cout << endl;
        i++;
    }
}