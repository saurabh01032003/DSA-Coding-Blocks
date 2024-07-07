// // // Insertion of Element at bottom of stack using iterative(taking extra stack)
// // //  Time - O(n) and Space - O(n)

// // // #include <iostream>
// // // #include <stack>
// // // using namespace std;
// // // void insertAtBottom(stack<int> &s, int n)//Pass stack by address to show change in main function
// // // {

// // //     stack<int> temp;
// // //     while (!s.empty())
// // //     {
// // //         temp.push(s.top());
// // //         s.pop();
// // //     }
// // //     temp.push(n);
// // //     while (!temp.empty())
// // //     {
// // //         s.push(temp.top());
// // //         temp.pop();
// // //     }
// // // }

// // // void printStack(stack<int> s)
// // // {
// // //     while (!s.empty())
// // //     {
// // //         cout << s.top() << endl;
// // //         s.pop();
// // //     }
// // //     cout << endl;
// // // }
// // // int main()
// // // {
// // //     stack<int> s;
// // //     s.push(10);
// // //     s.push(20);
// // //     s.push(30);
// // //     s.push(40);
// // //     s.push(50);

// // //     printStack(s);
// // //     int n = 2;
// // //     insertAtBottom(s, n);

// // //     printStack(s);
// // // }

// // // ########################****************************###########################################
// // // Approach-02(Recursive)
// // // Time - O(n) and Space - O(n)

// // #include <iostream>
// // #include <stack>
// // using namespace std;
// // void insertAtBottom(stack<int> &s, int n)
// // {
// //     // Base Case
// //     if (s.empty())
// //     {
// //         s.push(n);
// //         return;
// //     }

// //     // Recursive Case
// //     int x = s.top();
// //     s.pop();
// //     insertAtBottom(s, n);
// //     s.push(x);
// // }

// // void printStack(stack<int> s)
// // {
// //     while (!s.empty())
// //     {
// //         cout << s.top() << endl;
// //         s.pop();
// //     }
// // }
// // int main()
// // {
// //     stack<int> s;
// //     s.push(10);
// //     s.push(20);
// //     s.push(30);
// //     s.push(40);
// //     s.push(50);

// //     int n = 3;

// //     printStack(s);
// //     cout << endl << endl;
// //     insertAtBottom(s, n);
// //     printStack(s);
// // }

// // #################################################################################################################################################
// #include <iostream>
// #include <stack>
// using namespace std;
// // void insertAtBottom(stack<int> &s, int data)
// // {
// //     // Base Case
// //     if(s.empty())
// //     {
// //         s.push(data);
// //         return;
// //     }

// //     // Recursive Case
// //     int x = s.top();
// //     s.pop();
// //     insertAtBottom(s, data);
// //     s.push(x);
// // }
// void printStack(stack<int> s)
// {
//     while(!s.empty())
//     {
//         cout << s.top() << endl;
//         s.pop();
//     }
//     cout << endl;

// }

// void insertAtBottom(stack<int> &s,int data)
// {
//     // Base Case
//     if(s.empty())
//     {
//         s.push(data);
//         return;
//     }

//     // Recursive Case
//     int x = s.top();
//     s.pop();
//     insertAtBottom(s,data);
//     s.push(x);
// }

// void insertIterative(stack<int> &s, int data)
// {
//     stack<int> x;
//     while(!s.empty())
//     {
//         x.push(s.top());
//         s.pop();
//     }
//     s.push(data);
//     while(!x.empty())
//     {
//         s.push(x.top());
//         x.pop();
//     }
// }
// int main()
// {
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

//     printStack(s);
//     // insertAtBottom(s,1000);
//     insertIterative(s,10000);
//     insertAtBottom(s,5000000);
//     printStack(s);
// }

// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
#include <iostream>
#include <stack>
using namespace std;
void insertAtBottomRecursive(int data, stack<int> &s)
{
    // Base Case
    if (s.empty())
    {
        s.push(data);
        return;
    }

    // Recursive case
    int top = s.top();
    s.pop();
    insertAtBottomRecursive(data, s);
    s.push(top);
}

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << endl;
}

void insertAtBottomIterative(int data, stack<int> &s)
{
    stack<int> p;
    while(!s.empty())
    {
        p.push(s.top());
        s.pop();
    }
    s.push(data);

    while(!p.empty())
    {
        s.push(p.top());
        p.pop();
    }
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    printStack(s);
    // insertAtBottomRecursive(0, s);

    insertAtBottomIterative(0,s);

    printStack(s);
}