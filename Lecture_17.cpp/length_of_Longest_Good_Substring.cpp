// #include <iostream>
// #include <climits>
// using namespace std;
// bool checkGoodSubstring(string subString)
// {
//     for(int i = 0;i < subString.size();i++)
//     {
//         if(subString[i] == 'a' || subString[i] == 'e' || subString[i] == 'i' || subString[i]== 'o' || subString[i] == 'u')
//         {
//             i++;
//         }else{
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {

// Time : **************************O(n^3)************************

//     string str = "cbaeicdeiou";

//     int lengthMax = INT_MIN;
//     for(int i = 0;i < str.size();i++)
//     {
//         for(int j = i;j < str.size();j++)
//         {
//             string subString = str.substr(i,j-i+1);

//             if(checkGoodSubstring(subString))
//             {
//                 lengthMax = max(j-i+1,lengthMax);

//             }
//         }
//     }
//     cout << lengthMax << endl;
// }

// *********************O(n)*******************
// Sliding Window

#include <iostream>
using namespace std;
int main()
{
    string str = "cbaeicdeiou";
    int maxLength = 0;//To track length of maximum substring containing vowels
    int cnt = 0;//To tract count of consecutive vowels

    for(int i = 0; i < str.size();i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            //ith character is a vowel
            cnt++;
            maxLength = max(maxLength,cnt);
        }else{
            // ith character is a consonent
            cnt = 0;
        }
    }
    cout << maxLength << endl;
}