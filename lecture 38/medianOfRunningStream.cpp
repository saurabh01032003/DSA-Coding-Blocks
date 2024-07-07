#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int data;
    cin >> data;

    double median = data;
    cout << median << " ";

    priority_queue<int> leftMaxHeap;
    priority_queue<int, vector<int>, greater<int>> rightMinHeap;
    leftMaxHeap.push(data);
    while (true)
    {
        cin >> data;

        if (data == 0)
        {
            break;
        }

        if (data > median)//We have to push data in rightMinHeap
        {
            if (leftMaxHeap.size() < rightMinHeap.size())
            {
                // leftMaxHeap has N elements, rightMinHeap has N+1 elements,move top element of rightMinHeap to leftMaxHeap
                leftMaxHeap.push(rightMinHeap.top());
                rightMinHeap.pop();

                // Now,leftMaxHeap has ->N+1 and rightMinHeap has-> N elements
                rightMinHeap.push(data);
                // Now,leftMaxHeap has->N+1 and rightMaxHeap has -> N+1 elements
                median = (leftMaxHeap.top() + rightMinHeap.top()) / 2.0;
            }
            else if (leftMaxHeap.size() > rightMinHeap.size())
            {
                // leftMaxHeap has ->N+1 and righMinHeap has N elements
                rightMinHeap.push(data);

                // Now,leftMaxHeap has->N+1 and rightMaxHeap has -> N+1 elements
                median = (leftMaxHeap.top() + rightMinHeap.top()) / 2.0;
            }
            else
            {
                // Now,leftMaxHeap has->N and rightMaxHeap has -> N elements
                rightMinHeap.push(data);
                median = rightMinHeap.top();
            }
        }
        else
        { // data < median(We have to push data in leftMaxHeap)
            if (leftMaxHeap.size() < rightMinHeap.size())
            {
                // leftMaxHeap has ->N and righMinHeap has ->N+1 elements
                leftMaxHeap.push(data);
                // Now, leftMaxHeap has ->N+1 and righMinHeap has ->N+1 elements
                median = (leftMaxHeap.top() + rightMinHeap.top()) / 2.0;
            }
            else if (leftMaxHeap.size() > rightMinHeap.size())
            {
                // leftMaxHeap has ->N+1 and righMinHeap has ->N elements
                rightMinHeap.push(leftMaxHeap.top());
                leftMaxHeap.pop();

                // leftMaxHeap has ->N and righMinHeap has ->N+1 elements
                leftMaxHeap.push(data);
                // leftMaxHeap has ->N+1 and righMinHeap has ->N+1 elements
                median = (leftMaxHeap.top() + rightMinHeap.top()) / 2.0;
            }
            else
            {
                // leftMaxHeap has ->N and righMinHeap has ->N elements
                leftMaxHeap.push(data);
                median = leftMaxHeap.top();
            }
        }

        cout << median << " ";
    }
}