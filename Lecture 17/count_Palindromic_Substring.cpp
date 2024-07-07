// #include <iostream>
// using namespace std;
// int main()
// {
//     string str = "abaaba";
//     int cnt = 0;

//     // Brute Force
//     // Time Complexity : O(n^3)

//     // Iterate over starting index
//     for (int i = 0; i < str.size(); i++)
//     {
//         // Iterate over ending index
//         for (int j = i; j < str.size(); j++)
//         {
//             bool flag = true;
//             int k = i;
//             int l = j;
//             while (k < l)
//             {
//                 if (str[k] != str[l])
//                 {
//                     flag = false; // we won't get substring with starting index i and ending index j
//                     break;
//                 }
//                 else
//                 {
//                     k++;
//                     l--;
//                 }
//             }
//             if (flag)
//             {
//                 // We have got a palindromic substring
//                 cnt++;
//             }
//         }
//     }
//     cout << cnt << endl;
// }

#include <iostream>
using namespace std;
int main()
{
    string str = "abaaba";
    int n = str.size();
    int cnt = 0;

    // Count Odd length Substring
    for(int i = 0;i < str.size();i++)
    {
        int j = 0;
        while(i-j >= 0 and i+j <= n-1 and str[i+j] == str[i-j])
        {
            cnt++;
            j++;
        }
    }

    // Count Even Lenght Substring
    for(double i = 0.5;i < str.size();i++)
    {
        double j = 0.5;
        while(i-j >= 0 and i+j <= n-1 and str[(int)(i-j)] == str[(int)(i+j)])
        {
            cnt++;
            j++;
        }
    }
    cout << cnt << endl;
}