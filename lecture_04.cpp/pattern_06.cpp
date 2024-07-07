#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the value of num: " << endl;
    cin >> num;
    int i = 1;

    while (i <= num)
    {
        // Print (n - i) spaces
        int j = 1;
        while (j <= num - i)
        {
            cout << "_";
            j++;
        }
        // Print numbers
        int number = i;
        int k = 1;
        while (k <= i)
        {
            cout << number;
            // number++;
            number++;
            k++;
        }
        cout << endl;
        i++;
    }
}