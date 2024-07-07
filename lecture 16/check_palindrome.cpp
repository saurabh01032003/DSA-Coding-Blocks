// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     char str[] = "racplcar";
//     int n = strlen(str);
//     int i = 0;
//     int j = n - 1;
//     while (i < j)
//     {
//         if (str[i] != str[j])
//         {
//             cout << "Str is not Palindrome " << endl;
//             break;
//         }
//         i++;
//         j--;
//     }
//     if (i >= j)
//     {
//         cout << "Str is Palindrome  " << endl;
//     }
// }

// // 2. Approach
// // #include <iostream>
// // #include <cstring>
// // using namespace std;
// // int main()
// // {
// //     char str[] = "madam";
// //     char str2[100];
// //     strcpy(str2, str);
// //     strrev(str2);
// //     if (strcmp(str, str2) == 0)
// //     {
// //         cout << "Palindrome";
// //     }
// //     else
// //     {
// //         cout << "Not Palindrome" << endl;
// //     }
// // }

#include <iostream>
#include <cstring>
using namespace std;
bool checkPalindrome(char *str)
{
    // 1. Using 2-pointer approach
    // int i = 0;
    // int j = strlen(str) - 1;
    // while (i < j)
    // {
    //     if (str[i] != str[j])
    //     {
    //         return false;
    //     }
    //     i++;
    //     j--;
    // }
    // return true;

    // 2. Using brute force approach
    char str2[100];
    strcpy(str2,str);
    strrev(str2);
    if (strcmp(str,str2) == 0)
    {
        return true;
    }else{
        return false;
    }
}
int main()
{
    char str[] = "naman";
    int n = strlen(str);
    if (checkPalindrome(str))
    {
        cout << str << " is Palindrome" << endl;
    }
    else
    {
        cout << str << " is not Palindrome " << endl;
    }
}
