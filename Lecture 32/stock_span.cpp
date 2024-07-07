// // #include <iostream>
// // #include <stack>
// // using namespace std;
// // int main()
// // {
// //     int arr[] = {100, 80, 60, 70, 60, 75, 85};
// //     int n = sizeof(arr) / sizeof(int);
// //     stack<pair<int, int>> s; // s.first = value, s.second = indices
// //     for (int i = 0; i <= n - 1; i++)
// //     {
// //         while (!s.empty() and s.top().first <= arr[i])
// //         {
// //             s.pop();
// //         }

// //         int j;
// //         if (s.empty())
// //         {
// //             j = -1; // because you are getting all values less than your ith value in array so i-(-1) = i+1 (i.e 0 se ith tk i+1 elements honge)
// //         }
// //         else
// //         {
// //             j = s.top().second;
// //         }

// //         cout << i - j << " ";
// //         s.push({arr[i], i});
// //     }
// // }

// // ##########################################################################################
// #include <iostream>
// #include <stack>
// using namespace std;
// int main()
// {
//     int arr[] = {100, 80, 60, 70, 60, 75, 85};
//     int n = sizeof(arr) / sizeof(int);
//     stack<pair<int, int>> s; // s.first = value, s.second = indices

//     for (int i = 0; i < n; i++)
//     {
//         while (!s.empty() and s.top().first <= arr[i])
//         {
//             s.pop();
//         }

//         int j;
//         if (s.empty())
//         {
//             j = -1;
//         }
//         else
//         {
//             j = s.top().second;
//         }

//         cout << i - j << " ";
//         s.push({arr[i], i});
//     }
// }

// #################################################################################################################################################################################################

#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {100, 80, 60, 70, 60, 75, 85};
    int n = v.size();
    stack<pair<int,int>> s; // s.first = values  , s.second = index

    for(int i = 0; i < n; i++)
    {
        while(!s.empty() and v[i] > s.top().first)
        {
            s.pop();
        }

        int j;
        if(s.empty())
        {
            j = -1;
        }else{ 
            j = s.top().second;
        }

        cout << i-j << " ";

        s.push({v[i],i});
    }

}