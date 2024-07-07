// // // Stack to store any type of value (using Template) using array
// // #include <iostream>
// // using namespace std;

// // template <typename T>
// // class stack
// // {
// // public:
// //     T *arr; // To store address of array(internally stack) created in heap
// //     int t;  // To track array index of top of stack
// //     int n;  // To track the size of stack

// //     stack(int n)
// //     {
// //         arr = new T[n];
// //         t = -1;
// //         this->n = n;
// //     }

// //     void push(T data)
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

// //     T top()
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
// //     stack<string> s(5);
// //     s.push("abc");
// //     s.push("def");
// //     s.push("ghi");
// //     s.push("jkl");
// //     s.push("mno");

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

// // ################################################################################################################################################
// #include <iostream>
// using namespace std;

// template <typename T>
// class stack
// {
//     T *arr;
//     int t;
//     int n;

//     public:
//     stack(int n)
//     {
//         arr = new T[n];
//         t = -1;
//         this->n = n;
//     }

//     void push(T data)
//     {
//         if (t == n - 1) // Overflow Condition
//         {
//             return;
//         }
//         t = t + 1;
//         arr[t] = data;
//     }

//     void pop()
//     {
//         if (t == -1) // Underflow Condition
//         {
//             // Stack is Empty
//             return;
//         }
//         t = t - 1;
//     }

//     T top()
//     {
//         return arr[t];
//     }

//     bool empty()
//     {
//         return t == -1;
//     }

//     int size()
//     {
//         return t + 1;
//     }
// };
// int main()
// {
//     stack<string> s(5);
//     cout << "Size is " << s.size() << endl;
//     cout << "is Empty ? " << s.empty() << endl;

//     s.push("Mummy");
//     s.push("Sister");
//     s.push("Papa");
//     s.push("Dadaji");
//     s.push("Dadi");

//     cout << "Top of Stack is : " << s.top() << endl;
//     cout << "Size is " << s.size() << endl;
//     cout << "is Empty ? " << s.empty() << endl;

//     s.pop();
//     cout << "Top of Stack is : " << s.top() << endl;
//     cout << "Size is " << s.size() << endl;
//     cout << "is Empty ? " << s.empty() << endl;

//     s.pop();
//     cout << "Top of Stack is : " << s.top() << endl;
//     cout << "Size is " << s.size() << endl;
//     cout << "is Empty ? " << s.empty() << endl;

//     s.pop();
//     s.pop();
//     s.pop();

//     cout << "Size is " << s.size() << endl;
//     cout << "is Empty ? " << s.empty() << endl;
// }

// $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

#include <iostream>
using namespace std;
template <typename T>
class stack
{
public:
    T *arr;
    int n;
    int t;

    stack(int n)
    {
        arr = new T[n];
        this->n = n;
        t = -1;
    }

    void push(T data)
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

    T top()
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
    stack<string> s(5);
    s.push("Saurabh");
    s.push("Sushant");
    s.push("Salman");
    s.push("Ishan");
    s.push("Rohit");

    cout << "Size of object is : " << s.size() << endl;
    cout << "Top of stack is : " << s.top() << endl;
    s.empty() ? cout << "Stack is empty" << endl : cout << "Stack is non-Empty" << endl << endl; 

    s.pop();
    s.pop();
    s.pop();
    
    cout << "Size of object is : " << s.size() << endl;
    cout << "Top of stack is : " << s.top() << endl;
    s.empty() ? cout << "Stack is empty" << endl : cout << "Stack is non-Empty" << endl << endl; 

    s.pop();
    s.pop();
    
    cout << "Size of object is : " << s.size() << endl;
    s.empty() ? cout << "Stack is empty" << endl : cout << "Stack is non-Empty" << endl; 
}