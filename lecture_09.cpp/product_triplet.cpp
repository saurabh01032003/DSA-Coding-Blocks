#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {-10, -20, 1, 2, 3};
    int n = sizeof(arr) / sizeof(int);
    int fl = INT_MIN;
    int sl = INT_MIN;
    int tl = INT_MIN;
    int fS = INT_MAX;
    int sS = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > fl)
        {
            tl = sl;
            sl = fl;
            fl = arr[i];
        }
        else if (arr[i] > sl)
        {
            tl = sl;
            sl = arr[i];
        }
        else if (arr[i] > tl)
        {
            tl = arr[i];
        }

        
        if (arr[i] < fS)
        {
            sS = fS;
            fS = arr[i];
        }
        else if (arr[i] < sS)
        {
            sS = arr[i];
        }
    }
    int a = fl * sl * tl;
    int b = fS * sS * fl;
    cout << max(a, b);
}