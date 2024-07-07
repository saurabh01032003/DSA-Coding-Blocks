// // // #include <iostream>
// // // using namespace std;

// // // int f(int n)
// // // {
// // //     // Base Case
// // //     if (n == 0)
// // //     {
// // //         return 1;
// // //     }

// // //     // Recursive Case
// // //     return n * f(n - 1);
// // // }

// // // int main()
// // // {
// // //     int n;
// // //     cin >> n;
// // //     cout << f(n) << endl;
// // // }

// // #include <iostream>
// // using namespace std;

// // int f(int n)
// // {
// //     // Base Case
// //     if (n == 3) // you can put that value in base case whose value is known to you
// //     {
// //         return 6;
// //     }

// //     // Recursive Case
// //     return n * f(n - 1);
// // }
// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     cout << f(n) << endl;
// // }

// #include <iostream>
// using namespace std;

// int f(int n)
// {
//     // Base Case
//     if (n == 0)
//     {
//         return 1;
//     }

//     // Recursive Case
//     return n * f(n - 1);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << f(n); // f(n) denotes factorial of n
// }


#include <iostream>
using namespace std;
int f(int n){
    // Base Case
    if(n==0)
    {
        return 1;
    }

    // Recursive Case
    return n*f(n-1);
}
int main()
{
    int n;
    cin >> n;
    cout << f(n) << endl;
}