#include <iostream>
#include <queue> // Priority_queue is under queue class
using namespace std;
class myGreaterComparator
{
public:
    // Return true when 'Swap' is needed otherwise return false

    // Assume 'b' is the data of the newly inserted node,and 'a' is its parent node
    bool operator()(int a, int b)
    {
        if (b < a)
        {
            // You need swap
            return true;
        }
        else
        {
            return false;
        }
        // return b < a;
    }
};
int main()
{
    priority_queue<int, vector<int>, myGreaterComparator> m; // It is Min-Heap

    m.push(9);
    m.push(7);
    m.push(8);
    m.push(5);
    m.push(4);
    m.push(6);
    m.push(3);
    m.push(2);
    m.push(1);
    cout << m.size() << endl;

    while (!m.empty())
    {
        cout << m.top() << " ";
        m.pop();
    }
    cout << endl;
    cout << m.size() << endl;
}