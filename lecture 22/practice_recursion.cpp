// #include <iostream>
// using namespace std;

// int f(int x, int y)
// {
//     // Base case
//     if(y == 0)
//     {
//         return 1;
//     }

//     // Recursive Case
//     return x*f(x,y-1);

// }
// int main()
// {
//     int x , y;
//     cin>> x>> y;
//     cout << f(x,y);
// }

// #include <iostream>
// using namespace std;

// int f(int x, int y)
// {
//     // Base Case
//     if(y == 0)
//     {
//         return 1;
//     }

//     // Recursive Case
//     int A = f(x, y / 2);
//     if (y % 2 == 0)
//     {
//         return A * A;
//     }else{
//         return A*A*x;
//     }
// }
// int main()
// {
//     int x, y;
//     cin >> x >> y;

//     cout << f(x, y);
// }

// #include <iostream>
// using namespace std;
// int f(int *arr, int i, int t)
// {
//     // Base Case
//     if (i == 0)
//     {
//         if (t == arr[i])
//         {
//             return i;
//         }
//         else
//         {
//             return -1;
//         }
//     }

//     // Recursive Case
//     if (t == arr[i])
//     {
//         return i;
//     }

//     return f(arr, i - 1, 40);
// }
// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = sizeof(arr) / sizeof(int);
//     cout << f(arr, n - 1, 40) << endl;
// }

#include <iostream>
using namespace std;
int f(int *arr, int i)
{
    
}
int main()
{
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int);

   cout <<  f(arr, 0) << endl;
}