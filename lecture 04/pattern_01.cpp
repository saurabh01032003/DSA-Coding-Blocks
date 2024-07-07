#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the value of n: " << endl;
    cin >> num;
    int i = 1;
    while (i <= num)
    {
        // To print stars
        int j = 1;
        while (j <= i)
        {
            cout << "*" ;
             j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}