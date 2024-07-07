// #include <iostream>
// #include <vector>
// #include <stack>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     vector<int> v = {2, 5, 1, 3, 6, 4, 0};
//     int n = v.size();
//     stack<pair<int,int>> s;
//     vector<int> v1;
//     for(int i = n-1; i >= 0; i--)
//     {
//         while(!s.empty() and s.top().first >= v[i])
//         {
//             s.pop();
//         }

//         if(s.empty())
//         {
//             // cout << n << " ";
//             v1.push_back(n);
//         }else{
//             // cout << s.top().second << " ";
//             v1.push_back(s.top().second);
//         }

//         s.push({v[i],i});
//     }
//     reverse(v1.begin(),v1.end());
//     for(int i = 0; i < n; i++)
//     {
//         cout << v1[i] << " ";
//     }

// }

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {2, 5, 1, 3, 6, 4, 0};
    int n = v.size();
    stack<pair<int,int>> s;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() and s.top().first >= v[i])
        {
            s.pop();
        }

        if (s.empty())
        {
            v.push_back(n);
        }
        else
        {
            v.push_back(s.top().second);
        }

        s.push({v[i],i});
    }
    reverse(v.begin(),v.end());
    for(int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}