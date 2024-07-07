#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    string str = "abccccdd";
    int n = str.size();
    unordered_set<char> s;
    int cnt = 0;
    for(int i = 0; i < str.size();i++)
    {
        if(s.find(str[i]) != s.end())
        {
            cnt += 2;
            s.erase(str[i]);
        }else{
            s.insert(str[i]);
        }
    }
    if(s.size() >= 1)
    {
        cout << cnt+1 << endl;
    }else{
        cout << cnt << endl;
    }
}