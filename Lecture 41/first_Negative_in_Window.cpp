#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
    // Time : O(n)  , Space = O(k)
    // Apprach : 02
    vector<int> v = {-2, 0, -1, 2, 3, 1, 3};
    int k = 4;

    int i = 0; // To store the start index of window
    int j = 0; // To store the end index of window
    int n = v.size();
    queue<int> q; // To store all negative numbers of a window

    vector<int> ans; // To store first Negative number

    // find first negative in 1st window
    while (j < k)
    {
        if (v[j] < 0)
        {
            q.push(v[j]);
        }
        j++;
    }

    q.empty() ? ans.push_back(0) : ans.push_back(q.front());

    // Find 1st negative in remaining window
    while (j < n)
    {
        // Slide the window
        if (q.front() == v[i])
        {
            q.pop();
        }
        i++;
        if (v[j] < 0)
        {
            q.push(v[j]);
        }
        q.empty() ? ans.push_back(0) : ans.push_back(q.front());
        j++;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

// #####################################################################################################################################################################
// // Brute Force :
// // Time Complexity = O(n*k)

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v = {-2, 0, -1, 2, 3, 1, 3};
//     int k = 4;
//     int n = v.size();
//     vector<int> ans;

//     for (int i = 0; i <= n - k; i++)
//     {
//         bool flag = false;
//         for (int j = i; j < i + k; j++)
//         {
//             if (v[j] < 0)
//             {
//                 flag = true;
//                 ans.push_back(v[j]);
//                 break;
//             }
//         }
//         if (flag == false)
//         {
//             ans.push_back(0);
//         }
//     }
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
// }