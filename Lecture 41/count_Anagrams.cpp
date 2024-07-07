// Using sliding Window
// Time = O(n)

#include <iostream>
using namespace std;

bool checkAnagram(int *freqT, int *window)
{
    for (int i = 0; i < 26; i++)
    {
        if (freqT[i] != window[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "cbaebabacd";
    string t = "abc";
    int n = s.size();
    int k = t.size();

    int freq_t[26] = {0};//To store frequency of char in string t
    for (int i = 0; i < t.size(); i++)
    {
        freq_t[t[i] - 'a']++;
    }

    int i = 0;//To store start of window
    int j = 0;//To store end of window
    int window[26] = {0};//To store frequency of characters of window

    // Build the frequency map for the first window
    while (j < k)
    {
        window[s[j] - 'a']++;
        j++;
    }
    int cnt = 0;//To store the count of anagrams of 't' in 's'

    // Check if the window is an anagram of 't'
    if (checkAnagram(freq_t, window))
    {
        cnt++;
    }

    // Build the frequency map for remaining windows
    while (j < n)
    {
        // Slide the window
        window[s[i] - 'a']--;
        i++;
        window[s[j] - 'a']++;

        if (checkAnagram(freq_t, window))
        {
            cnt++;
        }
        j++;
    }
    cout << cnt << endl;
}

// #########################################################################################################################
// Time = O(n*k)

// #include <iostream>
// using namespace std;
// bool checkAnagram(int *freqT,int *window)
// {
//     for(int i = 0; i < 26;i++)
//     {
//         if(freqT[i] != window[i])
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     string s = "cbaebabacd";
//     string t = "abc";
//     int n = s.size();
//     int k = t.size();
//     int freqT[26] = {0};
//     for(int i = 0; i < t.size();i++)
//     {
//         freqT[t[i]-'a']++;
//     }

//     int cnt = 0;
//     for(int i = 0; i <= n-k;i++)
//     {
//         int window[26] = {0};
//         for(int j = i; j < i+k;j++)
//         {
//             window[s[j]-'a']++;
//         }
//         if(checkAnagram(window,freqT))
//         {
//             cnt++;
//         }
//     }
//     cout << cnt << endl;
// }