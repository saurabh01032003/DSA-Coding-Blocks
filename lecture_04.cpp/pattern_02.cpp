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
        // for num = 4
        /*1
          1 2
          1 2 3
          1 2 3 4 */
        int j = 1;
        while (j <= i)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}