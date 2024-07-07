// // #include <iostream>
// // #include <stack>
// // #include <vector>
// // #include <algorithm>
// // #include <climits>
// // using namespace std;
// // int main()
// // {
// //     vector<int> heights = {2, 1, 5, 6, 2, 3};
// //     stack<pair<int, int>> s;
// //     // For next smaller to left
// //     vector<int> v1;
// //     for (int i = 0; i < heights.size(); i++)
// //     {
// //         while (!s.empty() and s.top().first >= heights[i])
// //         {
// //             s.pop();
// //         }

// //         if (s.empty())
// //         {
// //             v1.push_back(-1);
// //         }
// //         else
// //         {
// //             v1.push_back(s.top().second);
// //         }

// //         s.push({heights[i], i});
// //     }
// //     for(int i = 0; i < heights.size(); i++)
// //     {
// //         cout << v1[i] <<  " ";
// //     }

// //     // For next smaller to the right
// //     vector<int> v2;
// //     stack<pair<int,int>> s1;
// //     for (int i = heights.size() - 1; i >= 0; i--)
// //     {
// //         while (!s1.empty() and s1.top().first >= heights[i])
// //         {
// //             s1.pop();
// //         }

// //         if (s1.empty())
// //         {
// //             v2.push_back(heights.size());
// //         }
// //         else
// //         {
// //             v2.push_back(s1.top().second);
// //         }

// //         s1.push({heights[i], i});
// //     }
// //     reverse(v2.begin(), v2.end());
// //     cout << endl;
// //      for(int i = 0; i < heights.size(); i++)
// //     {
// //         cout << v2[i] <<  " ";
// //     }

// //     int ans = INT_MIN;
// //     for(int i = 0; i < heights.size(); i++)
// //     {
// //        int length = heights[i];
// //        int breadth = (v2[i]-v1[i])-1;
// //        int area = length*breadth;
// //        if(area > ans){
// //         ans = area;
// //        }
// //     }
// //     cout << endl;
// //     cout << ans;
// // }

// #include <iostream>
// #include <stack>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int height[] = {2, 1, 5, 6, 2, 3};
//     int n = sizeof(height) / sizeof(int);

//     stack<pair<int, int>> s1;
//     vector<int> nsl;
//     for (int i = 0; i < n; i++)
//     {
//         while (!s1.empty() and s1.top().first >= height[i])
//         {
//             s1.pop();
//         }

//         if (s1.empty())
//         {
//             nsl.push_back(-1);
//         }
//         else
//         {
//             nsl.push_back(s1.top().second);
//         }

//         s1.push({height[i], i});
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << nsl[i] << " ";
//     }
//     cout << endl;

//     stack<pair<int, int>> s2;
//     vector<int> nsr;
//     for (int i = n - 1; i >= 0; i--)
//     {
//         while (!s2.empty() and s2.top().first >= height[i])
//         {
//             s2.pop();
//         }

//         if (s2.empty())
//         {
//             nsr.push_back(n);
//         }
//         else
//         {
//             nsr.push_back(s2.top().second);
//         }

//         s2.push({height[i], i});
//     }
//     reverse(nsr.begin(), nsr.end());
//     for (int i = 0; i < n; i++)
//     {
//         cout << nsr[i] << " ";
//     }
//     cout << endl;

//     int max_area = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int height0fBar = height[i];
//         int width = nsr[i] - nsl[i] - 1;
//         int area = height0fBar * width;
//         max_area = max(max_area, area);
//     }
//     cout << max_area << endl;
// }

// ###############################################################################################################################################################################################
#include <iostream>
#include <deque> // Deque support efficient operation from both the ends(i.e front and back)
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int height[] = {2, 1, 5, 6, 2, 3};
    int n = sizeof(height) / sizeof(int);

    deque<pair<int, int>> s1;
    vector<int> nsl;
    for (int i = 0; i < n; i++)
    { 
        while (!s1.empty() and s1.back().first >= height[i]) // Assume top of stack as back of deque
        {
            s1.pop_back(); // there is both pop_back and pop_front (so specify the operation you want to perform)
        }

        if (s1.empty())
        {
            nsl.push_back(-1);
        }
        else
        {
            nsl.push_back(s1.back().second);
        }

        s1.push_back({height[i], i});
    }

    for (int i = 0; i < n; i++)
    {
        cout << nsl[i] << " ";
    }
    cout << endl;

    // stack<pair<int, int>> s2;
    // NO NEED OF EXTRA STACK YOU CAN CLEAR THE PREVIOUS STACK AS DEQUE SUPPORT CLEAR() OPERATION
    s1.clear();
    vector<int> nsr;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s1.empty() and s1.back().first >= height[i])
        {
            s1.pop_back();
        }

        if (s1.empty())
        {
            nsr.push_back(n);
        }
        else
        {
            nsr.push_back(s1.back().second);
        }

        s1.push_back({height[i], i});
    }
    reverse(nsr.begin(), nsr.end());
    for (int i = 0; i < n; i++)
    {
        cout << nsr[i] << " ";
    }
    cout << endl;

    int max_area = 0;
    for (int i = 0; i < n; i++)
    {
        int height0fBar = height[i];
        int width = nsr[i] - nsl[i] - 1;
        int area = height0fBar * width;
        max_area = max(max_area, area);
    }
    cout << max_area << endl;
}