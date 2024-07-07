#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 13, 14};
    int n = sizeof(arr) / sizeof(int);
    cout << n << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << '\t';
    }
    cout << endl;
    int D[5] = {};
    for (int i = 0; i <= 4; i++)
    {
        cout << D[i] << '\t';
    }
    cout << endl;

    int E[5] = {2, 3, 4};
    for (int i = 0; i < 5; i++)
    {
        cout << E[i] << '\t';
    }

    return 0;
}