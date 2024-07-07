#include <iostream>
#include <deque>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 4, 0, 1, 2, 3, 5};
    int k = 4;
    int i = 0;
    int j = 0;
    int n = v.size();
    deque<int> dq;//TO store numbers in window which is maximum and elements in right side of maximum in window which are smaller than maximum
    vector<int> ans;//To store maximum element for each window

    // Find maximum element for each window
    while (j < k)
    {
        if (!dq.empty() and dq.back() < v[j])
        {
            dq.pop_back();
        }
        dq.push_back(v[j]);
        j++;
    }

    ans.push_back(dq.front());

    // Find maximum element in remaining windows
    while (j < n)
    {
        if (v[i] == dq.front())
        {
            dq.pop_front();
        }
        i++;
        if (!dq.empty() and dq.back() < v[j])
        {
            dq.pop_back();
        }
        dq.push_back(v[j]);
        ans.push_back(dq.front());
        j++;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}