// #include <iostream>
// #include <stack>
// using namespace std;
// int main()
// {
//     stack<string> s;

//     s.push("Saurabh");
//     s.push("Sushant");
//     s.push("Sakshi");
//     s.push("Shubham");
//     s.push("Junet");

//     cout << "Size is " << s.size() << endl;
//     cout << "Top is " << s.top() << endl
//          << endl;

//     s.pop();
//     cout << "Size is " << s.size() << endl;
//     cout << "top is " << s.top() << endl
//          << endl;

//     s.empty() ? cout << "Stack is Empty " << endl : cout << "Stack is non-empty" << endl;

//     s.pop();
//     cout << "Size is " << s.size() << endl;
//     cout << "top is " << s.top() << endl
//          << endl;

//     s.pop();
//     cout << "Size is " << s.size() << endl;
//     cout << "top is " << s.top() << endl
//          << endl;

//     s.pop();
//     cout << "Size is " << s.size() << endl;
//     cout << "top is " << s.top() << endl
//          << endl;

//     s.pop();
//     s.empty() ? cout << "Stack is Empty " << endl : cout << "Stack is non-empty" << endl;
// }

// ################################################################################################################################################
#include <iostream>
#include <stack>
using namespace std;
int main()
{
     stack<int> s;
     s.push(50);
     s.push(40);
     s.push(30);
     s.push(20);
     s.push(10);

     cout << "Size is : " << s.size() << endl;
     cout << "top is : " << s.top() << endl;

     s.pop();
     cout << "Size is : " << s.size() << endl;
     cout << "top is : " << s.top() << endl;

     s.pop();
     cout << "Size is : " << s.size() << endl;
     cout << "top is : " << s.top() << endl;

     s.pop();
     s.pop();
     s.pop();
     s.empty() ? cout << "Stack is empty " << endl : cout << "Stack is non Empty!" << endl;
}