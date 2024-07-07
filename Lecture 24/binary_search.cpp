#include <iostream>
using namespace std;
int f(int *arr, int s, int e, int target)
{
    // Base Case
    if(s > e)
    {
        return -1;
    }

    // Recursive Case
    int m = (s + e) / 2;
    if (target == arr[m])
    {
        return m;
    }
    else if (target > arr[m])
    {
        f(arr, m + 1, e, target);
    }else{
        f(arr,s,m-1,target);
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    int s = 0;
    int e = n - 1;
    int target = 20;
    cout << f(arr, s, e, target) << endl;
}