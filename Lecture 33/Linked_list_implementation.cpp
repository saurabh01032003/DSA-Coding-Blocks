#include <iostream>
#include <list>
using namespace std;
template <typename T>
class queue
{
    list<T> dll;

public:
    void push(T data)
    {
        // No need to check for overflow condition as dll is dynamic (it can grow during runtime)
        dll.push_back(data);
    }

    void pop()
    {
        if (empty()) // empty member function of same class has been called
        {
            // Underflow Condition
            cout << "UnderFlow Condition" << endl;
            return;
        }
        dll.pop_front();
    }

    T front()
    {
        return dll.front();
    }

    int size()
    {
        return dll.size();
    }

    bool empty()
    {
        return dll.empty();
    }
};
int main()
{
    queue<int> q;
    cout << "Size : " << q.size() << endl;
    cout << "empty : " << q.empty() << endl;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Size : " << q.size() << endl;
    cout << "Front : " << q.front() << endl;

    q.pop();
    cout << "Size : " << q.size() << endl;
    cout << "Front : " << q.front() << endl;

    q.pop();
    cout << "Size : " << q.size() << endl;
    cout << "Front : " << q.front() << endl;

    q.pop();
    cout << "Size : " << q.size() << endl;
    cout << "Front : " << q.front() << endl;

    q.pop();
    q.empty() ? cout << "Queue is Empty!" << endl : 
                cout << "Queue is Non-empty!" << endl;
}