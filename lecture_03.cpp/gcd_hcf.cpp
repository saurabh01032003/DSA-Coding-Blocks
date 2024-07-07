#include <iostream>
#include <algorithm>
// #include <climits>
// #include <cmath>
using namespace std;
int main()
{
    int arr[100];
    int a;
    cin >> a;
    int b;
    cin >> b;
    for (int i = min(a,b); i >= 1;i--)//
    {
        if(a%i == 0 and b % i == 0)
        {
            cout << "GCD is " << i;
            break;
        }
    }
}