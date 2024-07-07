#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;

    s.push("Saurabh");
    s.push("Yashika");
    s.push("NoOne");
    s.push("Sushant");
    s.push("Papa");
    s.push("Mummy");
    cout << "Size of Stack is : " << s.size() << endl;
    cout << "Top of stack is : " << s.top()<< endl; 
    s.empty() ? cout << "Stack is empty." : cout << "Stack is non-empty." << endl << endl;

    s.pop();
    cout << "Size of Stack is : " << s.size() << endl;
    cout << "Top of stack is : " << s.top()<< endl; 
    s.empty() ? cout << "Stack is empty." : cout << "Stack is non-empty." << endl << endl;

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout << "Size of Stack is : " << s.size() << endl;
    cout << "Top of stack is : " << s.top()<< endl; 
    s.empty() ? cout << "Stack is empty." : cout << "Stack is non-empty." << endl << endl;

    s.pop();
    cout << "Size of Stack is : " << s.size() << endl;
    s.empty() ? cout << "Stack is empty." : cout << "Stack is non-empty." << endl << endl;
}

