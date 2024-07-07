// #include <iostream>
// using namespace std;
// int main()
// {
//     string str = "aabacbebebe";
//     int k = 3;

//     int i = 0;
//     int j = 0;
//     int cnt = 0;
//     int str_length = 0;
//     int freqMap[26] = {0};
//     while (j < str.size())
//     {
//         // Expend the window
//         freqMap[str[j] - 'a']++;
//         if (freqMap[str[j] - 'a'] == 1)
//         {
//             cnt++;
//         }

//         // Check for violation of property
//         while (cnt > k)
//         {
//             // shrink the window
//             freqMap[str[i] - 'a']--;
//             if (freqMap[str[i] - 'a'] == 0)
//             {
//                 cnt--;
//             }
//             i++;
//         }

//         // Check for validity of window
//         if (cnt == 3)
//         {
//             str_length = max(str_length, j - i + 1);
//         }

//         // continue expension
//         j++;
//     }
//     cout << str_length << endl;
// }

// #######################################################################################################################################################
#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    string str = "aabacbebebe";
    int k = 3;

    int i = 0;
    int j = 0;
    unordered_map<char,int> freqMap;
    int maxLength = 0;
    int cnt = 0;//To track number of unique characters
    while(j < str.size())
    {
        // Expend the window
        freqMap[str[j]]++;
        if(freqMap[str[j]] == 1)
        {
            // New char added to map
            cnt++;
        }

        // If property fails
        while(cnt > k)
        {
            // Shrink the window
            freqMap[str[i]]--;
            if(freqMap[str[i]] == 0)
            {
                cnt--;
            }
            i++;
        }

        // Check for validity of window
        if(cnt == k)
        {
            maxLength = max(maxLength,j-i+1);
        }

        // Continue expension
        j++;
    }
    cout << maxLength << endl;

}