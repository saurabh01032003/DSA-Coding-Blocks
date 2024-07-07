#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the value of n : " << endl;
    cin >> num;
    int i = 1;
    int number = 1;
    while (i <= num)
    {
        // pattern 03
        /*  1
            2 3
            4 5 6
            7 8 9 10 */
        int j = 1;
        while (j <= i)
        {
            cout << number << "  ";
            number++;
            j++;
        }
        cout << endl;
        i++;
    }
}