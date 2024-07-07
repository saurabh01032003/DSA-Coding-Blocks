// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;
// int main()
// {
//     char str[] = "ababbac";//taste";
//     char str2[] = "aaabbbc";//"satte";
//     sort(str,str + strlen(str));
//     sort(str2,str2 + strlen(str2));
//     if(strcmp(str,str2) == 0)
//     {
//         cout << "Anagrams" << endl;
//     }else{
//         cout << "Not Anagrams" << endl;
//     }
// }

// Approach - 02
#include <iostream>
#include <cstring>
using namespace std;
void checkAnagrams(char *str1, char *str2)
{
    int freq1[26] = {};
    for (int i = 0; str1[i] != '\0'; i++)
    {
        int ch = str1[i] - 'a';
        freq1[ch]++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << freq1[i] << " ";
    }
    cout << endl;

    int freq2[26] = {};
    for (int i = 0; str2[i] != '\0'; i++)
    {
        freq2[str2[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << freq2[i] << " ";
    }
    cout << endl;

    // bool flag = true;
    int i;
    for (i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            // flag = false;
            cout << "false";
            break;
        }
    }
    if (i == 26)
    {
        cout << "true";
    }
}
int main()
{
    char str1[] = "taste";
    char str2[] = "ttase";
    checkAnagrams(str1, str2);
    // if(checkAnagrams(str1,str2))
    // {
    //     cout << "true";
    // }else{
    //     cout << "false";
    // }
}