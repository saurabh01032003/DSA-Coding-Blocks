#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void printKLargest(priority_queue<int,vector<int>,greater<int>>minHeap)
{
    while (!minHeap.empty())
    {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;
}
int main()
{
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int k = 3;
    int data;
    for (int i = 0; i < k; i++)
    {
        cin >> data;
        minHeap.push(data);
    }
    while (true)
    {
        cin >> data;

        if (data == 0)
        {
            // stream has ended
            break;
        }

        if (data == -1)
        {
            // Print the top k values present in Heap
            // You can't print Minheap here as you will loss all elements in min-heap as you go on poping in order to print elements
            printKLargest(minHeap);//Changes in heap can't be reflected here
        }
        else
        {
            if (data > minHeap.top())
            {
                minHeap.pop();
                minHeap.push(data);
            }
        }
    }
}