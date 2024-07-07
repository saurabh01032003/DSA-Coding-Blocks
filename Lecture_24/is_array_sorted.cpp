// #include <iostream>
// using namespace std;
// // bool flag = true;
// bool f(int *arr, int i, int n)
// {
//     // Base Case
//     if (i == n-1)
//     {
//         return true;
//     }

//     // Recursive Case
//     if (arr[i] > arr[i + 1])
//     {
//         // flag = false;
//         return false;
//     }
    
//     f(arr, i + 1, n);
// }
// int main()
// {
//     int arr[] = {10, 15, 30, 40, 50};
//     int n = sizeof(arr) / sizeof(int);
//     // cout << f(arr,0,n) << endl;
//     if (f(arr, 0, n))
//     {
//         cout << "true" << endl;
//     }
//     else
//     {
//         cout << "false";
//     }
// }

#include <iostream>
using namespace std;
bool f(int *arr,int n, int i)
{
    // Base Case
    if(i == n-1)
    {
        return true;
    }

    // Recursive Case
    if(arr[i] < arr[i+1] and f(arr,n,i+1))
    {
        return true;
    }
}
int main()
{
    int arr[] = {10,60,30,90,50};
    int n = sizeof(arr)/sizeof(int);
    if(f(arr,n,0))
    {
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }
}