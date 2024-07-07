// // // Stack implementation using fixed size array for integer type values in stack

// // #include <iostream>
// // using namespace std;

// // class stack
// // {
// // public:
// //     int *arr; // To store address of array(internally stack) created in heap
// //     int t;    // To track array index of top of stack
// //     int n;    // To track the size of stack

// //     stack(int n)
// //     {
// //         arr = new int[n];
// //         t = -1;
// //         this->n = n;
// //     }

// //     void push(int data)
// //     {
// //         if (t == n - 1) // Stack is full (stack overflow)
// //         {
// //             return;
// //         }
// //         t = t + 1;
// //         arr[t] = data;
// //     }

// //     void pop()
// //     {
// //         if (t == -1)
// //         {
// //             // Stack is empty
// //             return;
// //         }
// //         t = t - 1;
// //     }

// //     int top()
// //     {
// //         return arr[t];
// //     }

// //     bool isempty()
// //     {
// //         if (t == -1)
// //         {
// //             return true;
// //         }
// //         else
// //         {
// //             return false;
// //         }
// //     }

// //     int size()
// //     {
// //         return t + 1;
// //     }
// // };
// // int main()
// // {
// //     stack s(5);
// //     s.push(10);
// //     s.push(20);
// //     s.push(30);
// //     s.push(40);
// //     s.push(50);

// //     cout << s.top() << " is top" << endl;
// //     cout << "size is " << s.size() << endl
// //          << endl;

// //     s.pop();
// //     cout << s.top() << " is top" << endl;
// //     cout << "size is " << s.size() << endl
// //          << endl;

// //     s.pop();
// //     cout << s.top() << " is top" << endl;
// //     cout << "size is " << s.size() << endl
// //          << endl;

// //     s.pop();
// //     cout << s.top() << " is top" << endl;
// //     cout << "size is " << s.size() << endl
// //          << endl;

// //     s.isempty() ? cout << "Stack is empty" : cout << "stack is non-empty" << endl;

// //     s.pop();
// //     cout << s.top() << " is top" << endl;
// //     cout << "size is " << s.size() << endl
// //          << endl;

// //     s.pop();
// //     // cout << s.top() << " is top" << endl;
// //     // cout << "size is " << s.size() << endl;

// //     s.isempty() ? cout << "Stack is empty" : cout << "stack is non-empty" << endl;
// // }

// // ##################################################################################################################################################################
// #include <iostream>
// using namespace std;
// class stack
// {
// public:
//     int *arr; // To store address of fixed sized stack on heap
//     int t;    // to store the index where last push operation is done
//     int n;    // size of stack(fixed)

//     stack(int n) // constructor
//     {
//         arr = new int[n];
//         t = -1;
//         this->n = n;
//     }

//     // Push operation (insertion at top of stack)
//     void push(int data)
//     {
//         if (t == n - 1) // stack is full (Overflow Condition)
//         {
//             return;
//         }
//         t = t + 1;
//         arr[t] = data;
//     }

//     // Pop Operation (Deletion from top of the stack)
//     void pop()
//     {
//         if (t == -1) // Underflow Condition
//         {
//             // stack is empty
//             return;
//         }
//         t = t - 1;
//     }

//     // to Access the top element
//     int top()
//     {
//         return arr[t];
//     }

//     // To check if stack is empty
//     bool empty()
//     {
//         return t == -1;
//     }

//     // to find size of stack
//     int size()
//     {
//         return t + 1;
//     }
// };
// int main()
// {
//     stack s(5); // Creating stack of size 5
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

//     cout << s.top() << " is at top of stack" << endl;
//     cout << "size is " << s.size() << endl;

//     s.pop();
//     cout << s.top() << " is at top of stack" << endl;
//     cout << "size is " << s.size() << endl;

//     s.pop();
//     cout << s.top() << " is at top of stack" << endl;
//     cout << "size is " << s.size() << endl;
//     s.empty() ? cout << "Stack is Empty" << endl : cout << "Stack is non-empty!" << endl;

//     s.pop();
//     s.pop();
//     s.pop();
//     s.empty() ? cout << "Stack is Empty" << endl : cout << "Stack is non-empty!" << endl;
// }

// ###########################################################################################################################
#include <iostream>
using namespace std;
class stack
{
public:
    int *arr;
    int n;
    int t;

    stack(int n)
    {
        arr = new int[n];
        this->n = n;
        t = -1;
    }

    void push(int data)
    {
        if (t == n - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        t = t + 1;
        arr[t] = data;
    }

    void pop()
    {
        if(t == -1)
        {
            cout << "Underflow Condition" << endl;
            return;
        }
        t = t-1;
    }

    int top()
    {
        return arr[t];
    }

    int size()
    {
        return t+1;
    }

    bool empty()
    {
        return t == -1;
    }
};
int main()
{
    stack s(5);
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    cout << "Size of object is " << s.size() << endl;
    cout << "Top of stack is " << s.top() << endl;
    s.empty() ? cout << "Stack is empty" << endl : cout << "Stack is non-Empty" << endl; 
    cout << "Is stack empty ? " << s.empty() << endl;

    s.pop();
    s.pop();
    s.pop();
    
    cout << "Size of object is " << s.size() << endl;
    cout << "Top of stack is " << s.top() << endl;
    cout << "Is stack empty ? " << s.empty() << endl;

    s.pop();
    s.pop();
    
    cout << "Size of object is " << s.size() << endl;
    cout << "Is stack empty ? " << s.empty() << endl;
}