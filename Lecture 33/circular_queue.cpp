#include <iostream>
using namespace std;
template <typename T>
class queue
{
    T *arr; // To store address of queue made on heap

    int n; // To store maximum capacity of queue

    int f; // To store the index where we have performed last pop() operation

    int r; // To store index where we have performed last push() operation

    int count; // To store queue size()

public:
    queue(int n)
    { // Constructor
        arr = new T[n + 1];
        f = r = 0;
        count = 0;
        this->n = n + 1; // Dhayan se dekho yaha initialize hua hai
    }

    void push(T data)
    {
        if ((r + 1) % n == f)
        {
            cout << "Overflow Condition" << endl;
            return;
        }
        r = (r + 1) % n;
        arr[r] = data;
        count++;
    }

    void pop()
    {
        if (f == r)
        {
            cout << "Underflow Condition" << endl;
            return;
        }
        f = (f + 1) % n;
        count--;
    }

    T front()
    {
        return arr[(f + 1) % n];
    }

    int size()
    {
        return count;
    }

    bool empty()
    {
        return f == r;
    }

    void print()
    {
        for (int i = (f + 1) % n; i != (r + 1) % n; i = (i + 1) % n)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    queue<int> q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.print();

    q.pop();

    q.print();

    q.push(60);

    q.print();

    cout << q.front() << endl;
    cout << q.size() << endl;
    q.empty() ? cout << "Queue is empty!" << endl : cout << "Queue is non-empty!" << endl;

    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();

    cout << q.size() << endl;
    q.empty() ? cout << "Queue is empty!" << endl : cout << "Queue is non-empty!" << endl;
}