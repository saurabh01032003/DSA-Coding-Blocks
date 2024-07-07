// // // // #include <iostream>
// // // // using namespace std;

// // // // void f(int n)
// // // // {
// // // //     // Base Case
// // // //     if (n == 0)
// // // //     {
// // // //         return; // Here Return statement is mendatory otherwise you will trap in infinite loop
// // // //     }

// // // //     // Recursive Case
// // // //     f(n - 1);
// // // //     cout << n << " ";
// // // // }

// // // // int main()
// // // // {
// // // //     int n;
// // // //     cin >> n;
// // // //     f(n);
// // // // }

// // // #include <iostream>
// // // using namespace std;
// // // void f(int n)
// // // {
// // //     //  Base Case
// // //     if (n == 0)
// // //     {
// // //         return;
// // //     }

// // //     // Recursive Case
// // //     f(n - 1);
// // //     cout << n << " ";
// // // }
// // // int main()
// // // {
// // //     int n;
// // //     cin >> n;
// // //     f(n);
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

// //     // Recursive Case
// //     f(n - 1);
// //     cout << n << " ";
// // }
// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     f(n);// f(n) represents print number from 1 to n
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
//     f(n - 1);
//     cout << n << " ";
// }
// int main()
// {
//     int n;
//     cin >> n;
//     f(n);
// }

// // Approach - 01
// #include <iostream>
// using namespace std;
// int f(int a,int b)
// {
//     // Base Case
//     if(b == 0) // a^0 == 1
//     {
//         return 1;
//     }

//     // Recursive Case
//     return a * f(a,b-1);
// }
// int main()
// {
//     int a,b;
//     cin >> a >> b;
//     cout << f(a,b) << endl;
// }

// Approach - 02
#include <iostream>
using namespace std;
int f(int a, int b)
{
    // Base Case
    if (b == 0)
    {
        return 1;
    }

    // Recursive Case
    if (b % 2 == 0)
    {
        return f(a, b / 2) * f(a, b / 2);
    }
    else
    {
        return a * f(a, b / 2) * f(a, b / 2);
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << f(a, b) << endl;
}