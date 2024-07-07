// // // // Approach 1
// // // #include <iostream>
// // // using namespace std;
// // // int f(int x, int y)
// // // {
// // //     // Base Case
// // //     if (y == 0)
// // //     {
// // //         return 1;
// // //     }

// // //     // Recursive Case
// // //     return x * f(x, y - 1);
// // // }
// // // int main()
// // // {
// // //     int x, y;
// // //     cin >> x >> y;
// // //     cout << f(x, y); //  Represents x multiplied y times
// // // }

// // #include <iostream>
// // using namespace std;
// // int f(int x, int y)
// // {
// //     // Base Case
// //     if (y == 0)
// //     {
// //         return 1;  // Evaluate x to power 0
// //     }

// //     // Recursive Case
// //     return x*f(x,y-1);
// // }
// // int main()
// // {
// //     int x,y;
// //     cin >> x >> y;
// //     cout << f(x,y) << endl;
// // }

// // // Approach 2
// // // #include <iostream>
// // // using namespace std;
// // // int f(int x, int y)
// // // {
// // //     // Base Case
// // //     if (y == 0)
// // //     {
// // //         return 1;
// // //     }

// // //     // Recursive Case
// // //     if (y % 2 == 0)
// // //     {
// // //         return f(x, y / 2) * f(x, y / 2);
// // //     }
// // //     else
// // //     {
// // //         return x * f(x, y / 2) * f(x, y / 2);
// // //     }
// // // }
// // // int main()
// // // {
// // //     int x, y;
// // //     cin >> x >> y;
// // //     cout << f(x, y);
// // // }

// #include <iostream>
// using namespace std;
// int f(int x, int y)
// {
//     // Base Case
//     if (y == 0)
//     {
//         return 1; // Evaluate x to power 0
//     }

//     // Recursive Case
//     if (y % 2 == 0)
//     {
//         return f(x, y / 2) * f(x, y / 2);
//     }
//     else
//     {
//         // y is odd
//         return f(x, y / 2) * f(x, y / 2) * x;
//     }
// }
// int main()
// {
//     // int x, y;
//     // cin >> x >> y;
//     int x = 2, y = 5;
//     cout << f(x, y) << endl;
// }

// // Approach 01
// #include <iostream>
// using namespace std;
// int f(int x, int y)
// {
//     // Base Case
//     if (y == 0)
//     {
//         return 1;
//     }

//     // Recursive Case
//     return x * f(x, y - 1);
// }
// int main()
// {
//     int x, y;
//     cin >> x >> y;
//     cout << f(x, y);
// }

// Approach 02
#include <iostream>
using namespace std;
int f(int x, int y)
{
    // Base Case
    if (y == 0)
    {
        return 1;
    }

    // Recursive Case
    int A = f(x, y / 2);
    if (y % 2 == 0)
    {
        return A * A;
    }
    else
    {
        return x * A * A;
    }
}
int main()
{
    int x, y;
    cin >> x >> y;
    cout << f(x, y);
}