// #include <iostream>
// #include <queue>
// using namespace std;
// int main()
// {
//     char ch;
//     queue<char> q;
//     int freq[26] = {};
//     while(true)
//     {
//         cin >> ch;
//         if(ch  == '.')
//         {
//             break;
//         }

//         freq[ch-'a']++;
//         if(freq[ch-'a'] == 1)
//         {
//             q.push(ch);
//         }

//         while(!q.empty() and freq[q.front()-'a'] > 1)
//         {
//             q.pop();
//         }

//         q.empty() ? cout  << "-1 " : cout << q.front() << " ";
//     }
// }

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string s = "itwqbtcdprfsuprkrjkausiterybzncbmdvkgljxuekizvaivszowqtmrttiihervpncztuoljftlxybpgwnjb";
    vector<char> v = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int freq[26] = {};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        freq[ch - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        cout << v[i] << " " << freq[i] << endl;
    }
}