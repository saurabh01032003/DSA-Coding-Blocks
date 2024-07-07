// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     string str = "1234";

// // //     cout << stoi(str) << endl;
// // //     cout << stoi(str) + 1 << endl;
// // //     // int num = stoi(str);
// // //     // cout << num << endl;
// // //     // cout << num+1 << endl;
// // // }

// // // Recursive approach
// // #include <iostream>
// // using namespace std;
// // int stringtoInteger(string str, int n)
// // {
// //     // Base Case
// //     if (n == 0)
// //     {
// //         // We have empty string
// //         return 0;
// //     }

// //     // Recursive Case
// //     // 1. Ask your friend to generate substring that starts at 0th index and has length of n-1
// //     string sub_string = str.substr(0,n-1);

// //     // Ask your friend to covert substring into integer
// //     int intFromMyFriend = stringtoInteger(sub_string,n-1);

// //     return intFromMyFriend*10 + str[n-1]-'0';//str[i] is a character integer

// // }
// // int main()
// // {
// //     string str = "5414";
// //     int n = str.size();
// //     cout << stringtoInteger(str, n) + 1 << endl;
// // }

// #include <iostream>
// using namespace std;

// int stringToInteger(string str, int n)
// {
//     if(n == 0)
//     {
//         return 0;
//     }

//     // Recursive Case
//     string substring = str.substr(0,n-1);
//     int A = stringToInteger(substring,n-1);

//     return A*10 + str[n-1]-'0';
// }
// int main()
// {
//     string str = "1234";
//     int n = str.size();
//     cout << stringToInteger(str,n) + 1 << endl;
// }

#include <iostream>
using namespace std;
int f(string str, int n)
{
    // Base Case
    if(n == 0)
    {
        return 0;
    }

    // Recursive Case
    string str1 = str.substr(0, n - 1);
    int last_digit = str[n - 1] - '0';
    return f(str1, n - 1) * 10 + last_digit;
}
int main()
{
    string str = "1234";
    int n = str.size();
    cout << f(str, n) + 1 << endl;
}