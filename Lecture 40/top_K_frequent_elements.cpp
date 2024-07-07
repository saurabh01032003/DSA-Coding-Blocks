#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40, 10, 20, 30, 40, 10, 40};
    int k = 3;

    unordered_map<int, int> freqMap;
    // Build frequency map between element and their frequency
    for (int i = 0; i < v.size(); i++)
    {
        freqMap[v[i]]++;
    }
    for (pair<int, int> p : freqMap)
    {
        cout << p.first << " " << p.second << endl;
    }

    // Build reverse frequency map frequency and stored element corrosponding to frequency
    int n = v.size();
    vector<vector<int>> vec(n + 1);
    for (pair<int, int> p : freqMap)
    {
        vec[p.second].push_back(p.first);
    }

    bool flag = false;//We haven't found k-most Frequent elements
    for (int i = n; i >= 1; i--)
    {
        vector<int> ans = vec[i];
        for(int j = 0; j < ans.size();j++)
        {
            cout << ans[j] << " ";
            k--;
            if(k == 0)
            {
                flag = true;//We have found k-most Frequent elements
                break;
            }
        }
        if(flag)
        {
            //We have found k-most Frequent elements
            break;
        }
    }
}