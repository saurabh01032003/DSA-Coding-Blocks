// // // // #include <iostream>
// // // // using namespace std;
// // // // string spellingMap[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
// // // // void f(int n)
// // // // {
// // // //     // Base Case
// // // //     if (n == 0)
// // // //     {
// // // //         return;
// // // //     }

// // // //     // Recursive Case
// // // //     f(n / 10);

// // // //     // Now Print the last digit
// // // //     int digit = n % 10;
// // // //     cout << spellingMap[digit] << " ";
// // // // }
// // // // int main()
// // // // {
// // // //     int n;
// // // //     cin >> n;
// // // //     f(n);
// // // // }

// // // #include <iostream>
// // // using namespace std;
// // // string spellingMap[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
// // // void f(int n)
// // // {
// // //     // Base Case
// // //     if (n == 0)
// // //     {
// // //         return;
// // //     }

// // //     // Recursive Case
// // //     f(n / 10);
// // //     int last_digit = n % 10;
// // //     cout << spellingMap[last_digit] << " ";
// // // }
// // // int main()
// // // {
// // //     int n;
// // //     cin >> n;
// // //     f(n);
// // // }

// // #include <iostream>
// // using namespace std;
// // string spellingMap[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
// // void f(int n)
// // {
// //     // Base Case
// //     if (n == 0)
// //     {
// //         return;
// //     }

// //     // Recursive Case
// //     f(n / 10);
// //     int digit = n % 10;
// //     cout << spellingMap[digit] << " ";
// // }
// // int main()
// // {
// //     int n = 123;
// //     f(n);
// // }

// #include <iostream>
// using namespace std;
// string spellingMap[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
// void f(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }

//     f(n / 10);
//     int last_digit = n % 10;
//     cout << spellingMap[last_digit] << " ";
// }
// int main()
// {
//     int n = 4567;
//     f(n);
// }

#include <iostream>
using namespace std;
string spellingMap[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
void f(int n)
{
    // Base Case
    if (n == 0)
    {
        return;
    }

    // Recursive Case
    f(n / 10);
    int digit = n % 10;
    cout << spellingMap[digit] << " ";
}
int main()
{
    int n;
    cin >> n;
    f(n);
}