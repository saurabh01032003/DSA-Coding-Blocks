// // // #include <iostream>
// // // using namespace std;

// // // int f(int x, int y)
// // // {
// // //     // Base Case
// // //     if (y == 0)
// // //     {
// // //         return 0;
// // //     }

// // //     // Recursive Case
// // //     return x + f(x, y - 1); // f(x,y-1) --> x is added (y-1) times

// // // }

// // // int main()
// // // {
// // //     int x, y;
// // //     cin >> x >> y;
// // //     cout << "Product of x and y is : " << f(x, y) << endl; // f(x,y) --> Represents product of x and y i.e x is added y times
// // // }

// // #include <iostream>
// // using namespace std;
// // int f(int a, int b)
// // {
// //     // Base Case
// //     if (b == 0)
// //     {
// //         return 0;
// //     }

// //     // Recursive Case
// //     return a + f(a, b - 1);
// // }
// // int main()
// // {
// //     int a;
// //     int b;
// //     cin >> a >> b;
// //     cout << f(a, b); // F(a,b) denotes adding a , b - times
// // }

// #include <iostream>
// using namespace std;
// int f(int x, int y)
// {
//     // Base Case
//     if (y == 0)
//     {
//         return 0;
//     }

//     // Recursive Case
//     return x + f(x, y - 1);
// }
// int main()
// {
//     int x, y;
//     cin >> x >> y;
//     cout << f(x, y) << endl;
// }

#include <iostream>
using namespace std;
int f(int a, int b)
{
    // Base Case
    if(b == 0)
    {
        return 0;
    }

    // Reursive Case
    return a + f(a, b - 1);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << f(a, b) << endl; // f(a,b) represents a is added b-times
}