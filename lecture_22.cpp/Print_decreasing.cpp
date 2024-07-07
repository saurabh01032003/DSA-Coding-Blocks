// // // #include <iostream>
// // // using namespace std;

// // // void f(int n)
// // // {
// // //     // Base Case
// // //     if(n == 0)
// // //     {
// // //         return;
// // //     }

// // //     cout << n <<" ";
// // //     // Recursive Case
// // //     f(n-1); // Print number till n-1 in decreasing order
// // // }

// // // int main()
// // // {
// // //     int n;
// // //     cin >> n;
// // //     f(n); // Represents "Print Number till n int decreasing Order"
// // // }

// // #include <iostream>
// // using namespace std;
// // void f(int n)
// // {
// //     // Base Case
// //     if (n == 0)
// //     {
// //         return;
// //     }
// //     cout << n << " ";
// //     // Recursive Case
// //     f(n - 1);
// // }
// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     f(n);
// // }

// #include <iostream>
// using namespace std;
// void f(int n)
// {
//     // Base Case
//     if (n == 0)
//     {
//         return;
//     }

//     // Recursive Case
//     cout << n << " ";
//     f(n - 1);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     f(n);
// }

#include <iostream>
using namespace std;
void f(int n)
{
    // Base Case
    if(n == 0)
    {
        return;
    }

    // Recursive Case
    cout << n << " ";
    f(n - 1);
}
int main()
{
    int n;
    cin >> n;
    f(n);
}