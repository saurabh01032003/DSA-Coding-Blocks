// // STL implementation of Max-Heap

// #include <iostream>
// #include <queue> // Priority_queue is under queue class
// using namespace std;
// int main(){
//     priority_queue<int> m;//It is max Heap by Default

//     m.push(1);
//     m.push(3);
//     m.push(2);
//     m.push(7);
//     m.push(5);
//     m.push(4);
//     m.push(6);
//     m.push(9);
//     m.push(8);

//     cout << m.size() << endl;

//     while(!m.empty())
//     {
//         cout << m.top() << " ";
//         m.pop();
//     }
//     cout << m.size() << endl;
// }
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

// STL implementation of Min-Heap

#include <iostream>
#include <queue> // Priority_queue is under queue class
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> m; // It is Min-Heap

    m.push(9);
    m.push(7);
    m.push(8);
    m.push(5);
    m.push(4);
    m.push(6);
    m.push(3);
    m.push(2);
    m.push(1);
    cout << m.size() << endl;

    while (!m.empty())
    {
        cout << m.top() << " ";
        m.pop();
    }
    cout << endl;
    cout << m.size() << endl;

    priority_queue<int, vector<int>, less<int>> n; // It is max-Heap now
    n.push(1);
    n.push(3);
    n.push(2);
    n.push(7);
    n.push(5);
    n.push(4);
    n.push(6);
    n.push(9);
    n.push(8);

    cout << n.size() << endl;

    while (!n.empty())
    {
        cout << n.top() << " ";
        n.pop();
    }
    cout << endl;
    cout << n.size() << endl;
}