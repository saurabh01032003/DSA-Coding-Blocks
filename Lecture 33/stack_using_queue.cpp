#include <iostream>
#include <queue>
using namespace std;
template <typename T>
class stack
{
    queue<T> q1;
    queue<T> q2;

public:
    void push(T data)
    {
        if (q1.empty() and q2.empty())
        {
            q1.push(data); // q2.push(data)
        }
        else if (q1.empty() and !q2.empty())
        {
            q2.push(data);
        }
        else
        {
            q1.push(data);
        }
    }

    void pop()
    {
        if (q1.empty() and q2.empty())
        {
            cout << "Stack is empty! Can't pop()!" << endl;
        }
        else if (q1.empty() and !q2.empty())
        {
            // transfer n-1 elements in q1 from q2
            while (q2.size() > 1)
            {
                q1.push(q2.front());
                q2.pop();
            }
            q2.pop();
        }
        else if (!q1.empty() and q2.empty())
        {
            // transfer n-1 elements from q1 to q2
            while (q1.size() > 1)
            {
                q2.push(q1.front());
                q1.pop();
            }
            q1.pop();
        }
    }

    T top()
    {

        if (q1.empty() and !q2.empty())
        {
            while (q2.size() > 1)
            {
                q1.push(q2.front());
                q2.pop();
            }
            T ans = q2.front();
            q2.pop();
            q1.push(ans);
            return ans;
        }
        else if (!q1.empty() and q2.empty())
        {
            while (q1.size() > 1)
            {
                q2.push(q1.front());
                q1.pop();
            }
            T ans = q1.front();
            q1.pop();
            q2.push(ans);
            return ans;
        }
    }

    int size()
    {
        return max(q1.size(), q2.size());
    }

    bool empty()
    {
        return q1.empty() and q2.empty();
    }
};
int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "Size of Stack is : " << s.size() << endl;
    cout << "Top of Stack is : " << s.top() << endl;
    while(!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    s.pop();

}