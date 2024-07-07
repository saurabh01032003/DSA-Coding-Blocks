// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;
// int main()
// {
//     vector<int> v = {0, 3, 5, 4, 1, 6, 2};
//     int n = v.size();

//     stack<pair<int,int>> s;
//     for(int i = 0; i < n; i++)
//     {
//         while(!s.empty() and s.top().first >= v[i])
//         {
//             s.pop();
//         }

//         int j;
//         if(s.empty())
//         {
//             j = -1;
//         }else{
//             j = s.top().second;
//         }

//         cout << j << " ";
//         s.push({v[i],i});
//     }

// }

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {0, 3, 5, 4, 1, 6, 2};
    int n = v.size();
    stack<pair<int,int>> s;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() and s.top().first >= v[i])
        {
            s.pop();
        }

        if (s.empty())
        {
            cout << -1 << " ";
        }else{
            cout << s.top().second << " ";
        }

        s.push({v[i],i});
    }

}