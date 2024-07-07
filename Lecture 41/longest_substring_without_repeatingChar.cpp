// #include <iostream>
// #include <unordered_map>
// using namespace std;
// int main()
// {
//     string str = "abcabcbb";

//     int i = 0;
//     int j = 0;
//     int maxLength = 0;
//     unordered_map<char, int> freqMap;
//     while (j < str.size())
//     {
//         // Expend the window
//         freqMap[str[j]]++;

//         // Check for violation of property
//         while (freqMap[str[j]] > 1)
//         {
//             // Shrink the window
//             freqMap[str[i]]--;
//             i++;
//         }

//         // Now property must satisfied after above loop(update answer)
//         maxLength = max(maxLength, j - i + 1);

//         // Continue expension
//         j++;
//     }
//     cout << maxLength << endl;
// }

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
void findRepeatedDnaSequences(string s)
{
    unordered_map<string, int> freqMap;
    int i = 0;
    int j = 0;
    string w_str = "";
    while (j < 10)
    {
        w_str = w_str +s[j];
        j++;
    }
    
    freqMap[w_str]++;
    while (j < s.size())
    {
        w_str = w_str + s[j];
        i++;
        w_str = s.substr(i,10);

        freqMap[w_str]++;
        j++;
    }
    vector<string> ans;
    for (pair<string, int> st : freqMap)
    {
        if (st.second > 1)
        {
            cout << st.first << " ";
        }
    }
    // return ans;
}
int main()
{
    string s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
    findRepeatedDnaSequences(s);
}

