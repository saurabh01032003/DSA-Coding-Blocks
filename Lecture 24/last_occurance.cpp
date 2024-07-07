#include <iostream>
using namespace std;
int f(int *arr, int target, int i)
{
    // Base Case
    if (i == -1)
    {
        return -1; // target not found
    }

    // Recursive Case
    if (arr[i] == target)
    {
        return i;
    }

    return f(arr, target, i - 1);
}
int main()
{
    int arr[] = {10, 20, 30, 20, 30};
    int n = sizeof(arr) / sizeof(int);
    int target = 10;
    cout << f(arr, target, n - 1) << endl;
}