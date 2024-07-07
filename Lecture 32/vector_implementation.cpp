// // #include <iostream>
// // #include <vector>
// // using namespace std;

// // template <typename T>
// // class stack
// // {
// //     vector<T> v;

// // public:
// //     void push(T data)
// //     {
// //         v.push_back(data);
// //     }

// //     void pop()
// //     {
// //         if (v.size() == 0)
// //         {
// //             // Stack is empty
// //             return;
// //         }
// //         v.pop_back();
// //     }

// //     int size()
// //     {
// //         return v.size();
// //     }

// //     T top()
// //     {
// //         return v.back(); // or v.[v.size-1]
// //     }

// //     bool empty()
// //     {
// //         return v.empty();
// //     }
// // };
// // int main()
// // {
// //     stack<int> s; // Default Constructor (inbuilt) is invoked
// //     cout << "size is " << s.size() << endl;
// //     cout << "is Empty " << s.empty() << endl;

// //     s.push(10);
// //     s.push(20);
// //     s.push(30);
// //     s.push(40);
// //     s.push(50);

// //     cout << "Top is " << s.top() << endl;
// //     cout << "size is " << s.size() << endl;
// //     s.empty() ? cout << "Stack is Empty " << endl : cout << "stack is non-empty " << endl;
// //     cout << endl;

// //     s.pop();
// //     cout << "Top is " << s.top() << endl;
// //     cout << "size is " << s.size() << endl;
// //     s.empty() ? cout << "Stack is Empty " << endl : cout << "stack is non-empty " << endl;
// //     cout << endl;

// //     s.pop();
// //     cout << "Top is " << s.top() << endl;
// //     cout << "size is " << s.size() << endl;
// //     s.empty() ? cout << "Stack is Empty " << endl : cout << "stack is non-empty " << endl;
// //     cout << endl;

// //     s.pop();
// //     cout << "Top is " << s.top() << endl;
// //     cout << "size is " << s.size() << endl;
// //     s.empty() ? cout << "Stack is Empty " << endl : cout << "stack is non-empty " << endl;
// //     cout << endl;

// //     s.pop();
// //     cout << "Top is " << s.top() << endl;
// //     cout << "size is " << s.size() << endl;
// //     s.empty() ? cout << "Stack is Empty " << endl : cout << "stack is non-empty " << endl;
// //     cout << endl;

// //     s.pop();

// //     s.empty() ? cout << "Stack is Empty " << endl : cout << "stack is non-empty " << endl;
// // }

// // ###################################################################################################################################################
// #include <iostream>
// #include <vector>
// using namespace std;

// template <typename T>
// class stack
// {
//     vector<T> v;

// public:
//     void push(T data)
//     {
//         v.push_back(data);
//     }

//     void pop()
//     {
//         if(empty())// Stack is empty
//         {
//             return;
//         }
//         v.pop_back();
//     }

//     T top()
//     {
//         return v.back(); // or v[v.size()-1]
//     }

//     bool empty()
//     {
//         return v.size() == 0; // or v.empty()
//     }

//     int size()
//     {
//         return v.size();
//     }
// };
// int main()
// {
//     stack<string> s;
//     cout << "size is " << s.size() << endl;
//     cout << "is empty ? " << s.empty() << endl;

//     s.push("Saurabh");
//     s.push("Siya");
//     s.push("Ram");
//     s.push("Papa");

//     cout << "size is " << s.size() << endl;
//     cout << "top is " << s.top() << endl;
//     cout << "is empty ? " << s.empty() << endl;

//     s.pop();

//     cout << "size is " << s.size() << endl;
//     cout << "top is " << s.top() << endl;

//     s.pop();
//     s.pop();
//     s.pop();

//     cout << "size is " << s.size() << endl;
//     cout << "is empty ? " << s.empty() << endl;
// }

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class stack
{
    vector<T> v;

public:
    void push(T data)
    {
        v.push_back(data);
    }

    void pop()
    {
        if (v.empty())
        {
            cout << "Stack is empty " << endl;
            return;
        }
        v.pop_back();
    }

    T top()
    {
        return v[v.size() - 1];
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        return v.size() == 0;
    }
};
int main()
{
    stack<string> s;
    s.push("Ram ji");
    s.push("Sita ji");
    s.push("Ganesha");
    s.push("Kanha");
    s.push("Himanshu");

    cout << "Size of Stack is : " << s.size() << endl;
    cout << "Top of stack is : " << s.top() << endl;
    s.empty() ? cout << "Stack is empty." : cout << "Stack is non-empty." << endl << endl;

    s.pop();
    s.pop();
    s.pop();
    cout << "Size of Stack is : " << s.size() << endl;
    cout << "Top of stack is : " << s.top() << endl;
    s.empty() ? cout << "Stack is empty." : cout << "Stack is non-empty." << endl << endl;

    s.pop();
    s.pop();
    cout << "Size of Stack is : " << s.size() << endl;
    s.empty() ? cout << "Stack is empty." : cout << "Stack is non-empty." << endl << endl;                                             
}