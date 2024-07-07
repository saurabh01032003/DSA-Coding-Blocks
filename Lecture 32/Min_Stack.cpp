// #include <iostream>
// #include <stack>
// using namespace std;
// class MinStack
// {
//     stack<int> Main_Stack;
//     stack<int> Min_Stack;

// public:
//     void push(int data)
//     {
//         Main_Stack.push(data);
//         if (Min_Stack.empty() or data <= Min_Stack.top())
//         {
//             Min_Stack.push(data);
//         }
//     }
//     void pop()
//     {
//         if (Main_Stack.empty())
//         {
//             return;
//         }
//         if (Min_Stack.top() == Main_Stack.top())
//         {
//             Min_Stack.pop();
//         }
//         Main_Stack.pop();
//     }

//     int size()
//     {
//         return Main_Stack.size();
//     }

//     bool empty()
//     {
//         return Main_Stack.empty();
//     }
//     int top()
//     {
//         return Main_Stack.top();
//     }
//     int getMin()
//     {
//         return Min_Stack.top();
//     }
// };
// int main()
// {
//     MinStack m;
//     m.push(10);
//     m.push(20);
//     m.push(30);
//     cout << "Top is : " << m.top() << endl;
//     cout << "Min Top is : " << m.getMin() << endl;

//     m.push(0);
//     m.push(60);
//     cout << "Top is : " << m.top() << endl;
//     cout << "Min Top is : " << m.getMin() << endl;

//     m.pop();
//     m.push(0);
//     cout << "Top is : " << m.top() << endl;
//     cout << "Min Top is : " << m.getMin() << endl;

//     m.pop();
//     cout << "Top is : " << m.top() << endl;
//     cout << "Min Top is : " << m.getMin() << endl;
// }

// ##############################################################################################################################################################################################################
#include <iostream>
#include <stack>
using namespace std;
class MinStack
{
    stack<int> min_Stack;
    stack<int> main_Stack;

public:
    void push(int data)
    {
        main_Stack.push(data);
        if (min_Stack.empty() or data <= min_Stack.top())
        {
            min_Stack.push(data);
        }
    }

    void pop()
    {
        if (min_Stack.empty())
        {
            return;
        }
        if (min_Stack.top() == main_Stack.top())
        {
            min_Stack.pop();
        }
        main_Stack.pop();
    }

    int size()
    {
        return main_Stack.size();
    }

    int top()
    {
        return main_Stack.top();
    }

    bool empty()
    {
        return main_Stack.empty();
    }

    int getMinimum()
    {
        return min_Stack.top();
    }
};
int main()
{
    MinStack m;
    m.push(10);
    m.push(20);

    cout << "Top is : " << m.top() << endl;
    cout << "Minimum value is : " << m.getMinimum() << endl;
    cout << endl;

    m.push(0);
    m.push(20);

    cout << "Top is : " << m.top() << endl;
    cout << "Minimum value is : " << m.getMinimum() << endl;
    cout << endl;

    m.pop();

    cout << "Top is : " << m.top() << endl;
    cout << "Minimum value is : " << m.getMinimum() << endl;
    cout << endl;

    m.push(60);
    m.push(0);

    cout << "Top is : " << m.top() << endl;
    cout << "Minimum value is : " << m.getMinimum() << endl;
    cout << endl;

    m.pop();
    
    cout << "Top is : " << m.top() << endl;
    cout << "Minimum value is : " << m.getMinimum() << endl;
    cout << endl;
}