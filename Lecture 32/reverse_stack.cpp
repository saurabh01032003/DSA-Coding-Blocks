// // // #include <iostream>
// // // #include <stack>
// // // using namespace std;
// // // void reverse(stack<int> &s)
// // // {

// // //     // Base Case
// // //     if (s.empty())
// // //     {
// // //       // s.push(x);
// // //         return;
// // //     }
// // //     // Recursive Case
// // //     int x = s.top();
// // //     s.pop();
// // //     reverse(s);
// // //      cout << x << endl;
// // // }

// // // int main()
// // // {
// // //     stack<int> s;
// // //     s.push(10);
// // //     s.push(20);
// // //     s.push(30);
// // //     s.push(40);
// // //     s.push(50);

// // //     // cout << endl << endl;

// // //     reverse(s);

// // //     while(!s.empty())
// // //     {
// // //         cout << s.top() << endl;
// // //         s.pop();
// // //     }
// // // }

// // #include <iostream>
// // #include <stack>
// // using namespace std;

// // void insertAtBottom(stack<int> &s,int x)
// // {
// //     // Base Case
// //     if(s.empty())
// //     {
// //         s.push(x);
// //         return;
// //     }

// //     // Recursive Case
// //     int y = s.top();
// //     s.pop();
// //     insertAtBottom(s,x);
// //     s.push(y);
// // }

// // void reverse(stack<int> &s)
// // {
// //     // Base Case
// //     if (s.empty())
// //     {
// //         return;
// //     }

// //     // Recursive Case
// //     int x = s.top();
// //     s.pop();
// //     reverse(s);
// //     insertAtBottom(s,x);
// // }
// // void print(stack<int> s)
// // {
// //     while(!s.empty())
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

// //     reverse(s);
// //     print(s);
// // }

// // #################################################################################################################################################
// #include <iostream>
// #include <stack>
// using namespace std;
// void printStack(stack<int> s)
// {
//     while (!s.empty())
//     {
//         cout << s.top() << endl;
//         s.pop();
//     }
//     cout << endl;
// }
// void insertAtBottom(stack<int> &s, int data)
// {
//     // Base Case
//     if (s.empty())
//     {
//         s.push(data);
//         return;
//     }

//     // Recursive Case
//     int x = s.top();
//     s.pop();
//     insertAtBottom(s, data);
//     s.push(x);
// }

// void reverseRecursive(stack<int> &s)
// {
//     // Base Case
//     if (s.empty())
//     {
//         return;
//     }

//     // Recursive Case
//     int x = s.top();
//     s.pop();
//     reverseRecursive(s);
//     insertAtBottom(s, x);
// }
// void reverseIterative(stack<int> &s)
// {
//     stack<int> x;
//     while (!s.empty())
//     {
//         x.push(s.top());
//         s.pop();
//     }
//     s = x;
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

//     reverseIterative(s);
//     printStack(s);
//     reverseRecursive(s);
//     printStack(s);
// }

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
#include <iostream>
#include <stack>
using namespace std;
void reverseIterative(stack<int> &s)
{
    stack<int> p;
    while(!s.empty())
    {
        p.push(s.top());
        s.pop();
    }
    s = p;
}
void insertAtBottom(stack<int> &s, int data)
{
    // Base Case
    if(s.empty())
    {
        s.push(data);
        return;
    }

    // Recursive Case
    int n = s.top();
    s.pop();
    insertAtBottom(s,data);
    s.push(n);
}

void reverseRecursive(stack<int> &s)
{
    // Base Case
    if(s.empty())
    {
        return;
    }

    // Recursive Case
    int p = s.top();
    s.pop();
    reverseRecursive(s);
    insertAtBottom(s,p);
    
}
void printStack(stack<int> s)
{
    while(!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << endl;
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    printStack(s);
    reverseIterative(s);
    printStack(s);
    reverseRecursive(s);
    printStack(s);

}