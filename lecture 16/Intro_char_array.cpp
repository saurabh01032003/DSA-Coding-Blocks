#include <iostream>
#include <cstring>
using namespace std;

// void readString(char *str, char dlim)
// {
//     char ch;
//     int i = 0;
//     while (true)
//     {
//         ch = cin.get();
//         if (ch == dlim)
//         {
//             break;
//         }
//         str[i] = ch;
//         i++;
//     }
//     str[i] = '\0';
// }
int main()
{
    // // 1. Initialising the Character array
    // char str[] = {'a', 'b', 'c', '\0'};
    // // Printing a character array
    // cout << str << endl;

    // // 2. Initialising a Character array
    // char str1[] = "Hello";

    // // size of charecters in str1 is 6 i.e 5 of Hello + 1 of NULL
    // cout << sizeof(str1) / sizeof(char) << endl;

    // // Printing Using For loop
    // for (int i = 0; str1[i] != '\0'; i++)
    // {
    //     cout << str1[i];
    // }
    // cout << endl;

    // // Length of String
    // char str2[] = "coding blocks"; // "Saurabh Mishra";//14 is length == number of characters except '\0'
    // // int count = 0;
    // // for (int i = 0; str2[i] != '\0'; i++)
    // // {
    // //     count++;
    // // }
    // // cout <<"Length is = " << count << endl;
    // cout << strlen(str2) << endl;
    // cout << endl;

    // // Reading Input from User
    char str[101];
    // // // 1. Using cin >> (it automaticallly adds '\0' and do not read white spaces)
    // // cin >> str;
    // // cout << str << endl;

    // // 2. Using function
    // readString(str, '$');
    // cout << str;

    // 3. Using cin.getline
    // cin.getline(str,5);// Only 4 inputs are read from user 1 is '\0' at the end automatically added
    cin.getline(str,15,'$');
    cout << str;
}