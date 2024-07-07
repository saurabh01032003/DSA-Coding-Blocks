// // // #include <iostream>
// // // using namespace std;

// // // int f(int n)
// // // {
// // //     // Base Case
// // //     if (n == 0 || n == 1)
// // //     {
// // //         return n;
// // //     }

// // //     // Recursive Case
// // //     return f(n - 1) + f(n - 2);

// // // }

// // // int main()
// // // {
// // //     int n;
// // //     cin >> n;
// // //     cout << "nth fibbonacci number is : " << f(n) << endl;
// // // }

// // #include <iostream>
// // using namespace std;

// // int f(int n)
// // {
// //     // Base Case
// //     if (n == 1 || n == 0)
// //     {
// //         return n;
// //     }

// //     // Recursive Case
// //     return f(n - 1) + f(n - 2);
// // }
// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     cout << "nth Fibbonacci Number  " << f(n) << endl;
// // }

// #include <iostream> 
// using namespace std;

// int f(int n)
// {
//     // Base Case
//     if(n == 1 || n == 0)
//     {
//         return n;
//     }

//     // Recursive Case
//     return f(n-1) + f(n-2);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << f(n); // f(n) represents nth fibbonacci number
// }

#include <iostream>
using namespace std;
int fibonacci(int n)
{
    // Base Case 
    if(n == 0 or n==1)
    {
        return n;
    }


    // Recursive Case
    return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
}