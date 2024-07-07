// Implement a phonebook storing mapping between person's name and their
// phone numbers(multiple numbers of a person) using unordered_map

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, vector<string>> phoneMap;
    phoneMap["Sahil"].push_back("77777777");
    phoneMap["Saurabh"] = {"444444"};
    phoneMap["Yashika"] = {"111111", "222222", "33333333"};
    phoneMap["Ram"] = {"555555"};
    phoneMap["Saurabh"].push_back("66666666");

    for (pair<string,vector<string>> p : phoneMap)
    {
        cout << p.first << " : ";
        vector<string> v = p.second;
        // for(string str : p.second)
        for (string str : v)
        {
            cout << str << " ";
        }
        cout << endl;
    }
}