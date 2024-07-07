// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     // char str[] = {'a', 'b', 'c', 'd', 'e', '\0'};
//     // cout << str ;
//     // cout << endl;
//     // char str2[] ="coding blocks";
//     // cout << str2;

//     // int arr[] = {1, 2, 3};
//     // cout << arr;

//     // Length of String
//     // int count = 0;
//     // int i = 0;
//     // while (str[i] != 0)
//     // {
//     //     count++;
//     //     i++;
//     // }
//     // // cout << count;
//     // cout << strlen(str);
//     // strrev(str);
//     // cout << str; // Array takes input by address
//     char str1[1000];
//     char str2[1000];
//     // int i = 0;
//     int j = 0;
//     int i = 0;
//     while (str1[i] )
//         if (str1[i] == str2[j])
//         {
//             i++;
//             j++;
//         }
//         else if (str1[i] > str2[i])
//         {
//             cout << str1 << " is greator";
//             break;
//         }
//         else if (str1[i] < str2[i])
//         {
//             cout << str2 << " is str2 is greator ";
//             break;
//         }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[10][10];
//     int m = 3;
//     int n = 3;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             swap(arr[i][j], arr[j][i]);
//         }
//     }
//     cout << "Transpose of matrix is : " << endl;

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int arr[10][10];
//     int m = 3;
//     int n = 3;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n ; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     int target;
//     cin >> target;
//     for (int i = 0; i < m; i++)
//     {
//         binary_search(arr[i],arr[i+1],target);
//     }
// }


// #include <iostream>
// #include <algorithm>
// using namespace std;
// bool isGoodSubstring(string str)
// {
//     for (int i = 0; )

// }
// int main()
// {
//     string str = "abcde";
//     int n = str.length();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             string subString = str.substr(i,j-i+1);
//             if (isGoodSubstring)
//             {
//                 // Substring you have extracted is good Sub String
        
//             }
//             // cout << subString << endl;
//         }
//         cout << endl;
//     }
// }