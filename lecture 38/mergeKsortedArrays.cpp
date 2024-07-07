#include <iostream>
#include <queue>
using namespace std;
class triple
{
public:
    int val;
    int arr_idx;
    int val_idx;

    triple(int val, int arr_idx, int val_idx)
    {
        this->val = val;
        this->arr_idx = arr_idx;
        this->val_idx = val_idx;
    }
};
class customComperator
{
public:
    // b is newly inserted node,a is parent of b
    bool operator()(triple a, triple b)
    {
        return b.val < a.val; // Return true if swap is needed
    }
};
int main()
{
    vector<vector<int>> v = {{1, 3, 7, 10},
                             {2, 4, 5, 11},
                             {0, 6, 8, 9}};

    priority_queue<triple, vector<triple>, customComperator> minHeap;
    for(int i = 0;i < v.size();i++)
    {
        minHeap.push({v[i][0],i,0});
    }
    vector<int> output;
    while(!minHeap.empty())
    {
        triple t = minHeap.top();
        minHeap.pop();
        output.push_back(t.val);
        if(t.val_idx + 1 < v[t.arr_idx].size())
        {
            minHeap.push({v[t.arr_idx][t.val_idx+1],t.arr_idx,t.val_idx+1});
        }
    }
    for(int i = 0;i < output.size();i++)
    {
        cout << output[i] << " ";
    }
    cout << endl;
}