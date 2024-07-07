#include <iostream>
#include <climits>
#include <unordered_map>
using namespace std;
int main()
{
    string s = "cabwefgewcwaefgcf";
    string t = "cae";

    unordered_map<char, int> freqMap;

    for (int i = 0; i < t.size(); i++)
    {
        freqMap[t[i]]++;
    }
    int tCount = freqMap.size();

    int i = 0;
    int j = 0;
    int s_index;
    int minLength = INT_MAX;
    while (j < s.size())
    {
        // Expend the window
        if (freqMap.find(s[j]) != freqMap.end())
        {
            freqMap[s[j]]--;
            if (freqMap[s[j]] == 0)
            {
                // Window has sufficient occurance of s[j]
                tCount--;
            }
        }

        // Check the validity of window
        if (tCount == 0)//We got a valid window
        {
            if (minLength > j - i + 1)
            {
                minLength = j - i + 1;
                s_index = i;
            }

            // Shrink the window to optimise the length
            while (tCount == 0) 
            {
                // window is valid
                if (freqMap.find(s[i]) != freqMap.end())
                {
                    // s[i] is present in 't'
                    freqMap[s[i]]++;
                    if (freqMap[s[i]] == 1)//Validity fails
                    {
                        // window has insufficient occurences of s[i], so it's not a valid window now
                        i++;
                        tCount++;
                    }
                    else//freqMap[s[i]] < 1
                    {
                        // window has sufficient occurences of s[i] to form minimum substring
                        i++;
                        if (minLength > j - i + 1)
                        {
                            minLength = j - i + 1;
                            s_index = i;
                        }
                    }
                }
                else
                {
                    // 's[i]' is not present in t,unnecessary character in window
                    i++;
                    if (minLength > j - i + 1)
                    {
                        minLength = j - i + 1;
                        s_index = i;
                    }
                }
            }
        }

        // Continue expension for next window
        j++;
    }
    if (minLength == INT_MAX)
    {
        cout << " ";
        return 0;
    }
    cout << s.substr(s_index, minLength) << endl;
    cout << minLength << endl;
}