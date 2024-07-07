#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10,20,30,20,10};
    int n = sizeof(arr) / sizeof(int);
    int target;
    cin >> target;
    int i;
    for (i = n - 1; i >= 0; i--)
    {
        if (target == arr[i])
        {
            cout << "Target element found at : " << i << endl;
            break;
        }
    }
    if (i == -1)
    {
        cout << "Target element not found ";
    }
}