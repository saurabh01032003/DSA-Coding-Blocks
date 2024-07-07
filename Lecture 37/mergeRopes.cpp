
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// #include <iostream>
// #include <queue>
// using namespace std;
// int main()
// {
//     vector<int> v = {4,3,2,6};

//     priority_queue<int,vector<int>,greater<int>> minHeap(v.begin(),v.end());

//     int minCost = 0;
//     while(minHeap.size() > 1)
//     {
//         int firstMin = minHeap.top();
//         minHeap.pop();
//         int secondMin = minHeap.top();
//         minHeap.pop();

//         minCost = minCost + (firstMin+secondMin);
//         minHeap.push(firstMin+secondMin);
//     }
//     cout <<"Minimum Cost is : " <<  minCost << endl;

// }

#include <iostream>
#include <queue>
#include <vector>
using namespace std;
void heapify(int i, vector<int> &v)
{
}
int main()
{
    vector<int> v = {4, 3, 2, 6};
    // priority_queue<int,vector<int>,greater<int>> minHeap(v.begin(),v.end());

    // Create a min-Heap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int i = 0; i < v.size(); i++)
    {
        minHeap.push(v[i]);
    }

    int minCost = 0;
    while (minHeap.size() > 1)
    {
        int firstMin = minHeap.top();
        minHeap.pop();
        int secondMin = minHeap.top();
        minHeap.pop();

        minCost += firstMin + secondMin;
        minHeap.push(firstMin + secondMin);
    }
    cout << "Minimum cost is : " << minCost << endl;
}