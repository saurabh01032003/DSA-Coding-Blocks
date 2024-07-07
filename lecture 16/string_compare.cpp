#include <iostream>
#include <cstring>
using namespace std;
// int compareString(char *str1, char *str2)
// {
//     int i = 0;
//     int j = 0;
//     while (str1[i] != '\0' and str2[j] != '\0')
//     {
//         if (str1[i] == str2[j])
//         {
//             i++;
//             j++;
//         }
//         else if (str1[i] < str2[j])
//         {
//             return -1;
//         }
//         else
//         {
//             return 1;
//         }
//     }
//     if (str1[i] == '\0' and str2[j] == '\0')
//     {
//         return 0;
//     }
//     else if (str1[i] == '\0')
//     {
//         return -1;
//     }
//     else if (str2[i] == '\0')
//     {
//         return 1;
//     }
//     // else
//     // {
//     //     // str1[i] == '\0' and str2[i] == '\0'
//     //     return 0;
//     // }
// }

int main()
{
    char str1[] = "abcd";
    char str2[] = "abc";
    // cout << compareString(str1, str2) << endl;
    cout << strcmp(str1,str2) << endl;
}