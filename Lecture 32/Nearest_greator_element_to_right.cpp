// #include <iostream>
// #include <vector>
// #include <stack>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int arr[] = {5, 3, 6, 7, 2, 1, 4};
//     int n = sizeof(arr) / sizeof(int);

//     // Approch-01 O(n^2)
//     vector<int> v2;
//     for (int i = n - 1; i >= 0; i--)
//     {
//         bool flag = true;
//         for (int j = i + 1; j <= n - 1; j++)
//         {
//             if (arr[j] > arr[i])
//             {
//                 flag = false;
//                 // cout << arr[j] << " ";
//                 v2.push_back(arr[j]);
//                 break;
//             }
//         }
//         if (flag == true)
//         {
//             // cout << -1 << " ";
//             v2.push_back(-1);
//         }
//     }
//     // Reverse the output vector since we are iterating from right to left
//     reverse(v2.begin(), v2.end());
//     for(int i = 0; i < v2.size(); i++)
//     {
//         cout << v2[i] << " ";
//     }
//     cout << endl;

// // ******** Approach-02 O(n^2)
//     // stack<int> s;
//     // vector<int> v;
//     // for (int i = n - 1; i >= 0; i--)
//     // {
//     //     // if stack top has smaller values then the value at ith index then pop
//     //     while (!s.empty() and s.top() < arr[i])
//     //     {
//     //         s.pop();
//     //     }

//     //     // Now, if the stack is empty then cout -1
//     //     if (s.empty())
//     //     {
//     //         // cout << -1 << " ";
//     //         v.push_back(-1);
//     //     }
//     //     else
//     //     {
//     //         // cout << s.top() << " ";
//     //         v.push_back(s.top());
//     //     }

//     //     // Now, push the element at ith index ,kya pta ye kisi ka next greator element ho
//     //     s.push(arr[i]);
//     // }
//     // // Since, output will come in reverse order as we are iterating from right to left in our array
//     // // So, reverse the vector
//     // reverse(v.begin(), v.end());
//     // for (int i = 0; i < v.size(); i++)
//     // {
//     //     cout << v[i] << " ";
//     // }
// }

// // ##############################################################################################################################################################################################

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr = {5, 3, 6, 7, 2, 1, 4};;
    int n = arr.size();



    // Approach - 01
    // vector<int> v;
    // for(int i = n-1; i >= 0; i--)
    // {
    //     bool flag = true;
    //     for(int j = i+1; j <= n-1; j++)
    //     {
    //         if(arr[j] > arr[i])
    //         {
    //             flag = false;
    //             // cout << arr[j] << " ";
    //             v.push_back(arr[j]);
    //             break;
    //         }
    //     }
    //     if(flag == true)
    //     {
    //         // cout << "-1" << " ";
    //         v.push_back(-1);
    //     }
    // }
    // reverse(v.begin(),v.end());
    // for(int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }

    // Approach - 02
    stack<int> s;
    vector<int> v;
    for(int i = n-1; i >= 0; i--)
    {
        // cout << -1 << " ";
        // s.push(arr[i]);

        if(!s.empty() and  arr[i] > s.top())
        {
            s.pop();
        }

        if(s.empty())
        {
            v.push_back(-1);
        }else{
            v.push_back(s.top());
        }

        s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    for(int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}