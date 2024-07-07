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
        // print (n - i) spaces
        int j = 1;
        while (j <= num - i)
        {
            cout << " ";
            j++;
        }

        // print i spaces
        int k = 1;
        while (k <= i)
        {
            cout << "*";
            k++;
        }
        cout << endl;
        i++;
    }

    return 0;
}