// // Singly Linked-List implementation in stl --> forward_list

// #include <iostream>
// #include <forward_list>
// #include <iterator>
// using namespace std;
// int main()
// {
//     // Creating an empty List
//     forward_list<int> l1;

//     // To Calculate size(no. of nodes in linked-list)
//     cout << "size = " << distance(l1.begin(), l1.end()) << endl; // distance() -> is in iterator header file

//     // Insertion of data at head
//     l1.push_front(50);
//     l1.push_front(40);
//     l1.push_front(30);
//     l1.push_front(20);
//     l1.push_front(10);

//     cout << "size = " << distance(l1.begin(), l1.end()) << endl;

//     // Access the element at the head of Linked-List
//     cout << "head is = " << l1.front() << endl;

//     // Iterating over the LinkedList
//     // 1. Using Iterator
//     for (auto it = l1.begin(), end = l1.end(); it != end; it++)
//     {
//         cout << *it << " ";
//     }
//     cout << endl;

//     // 2. Using For-each loop
//     for (int x : l1)
//     {
//         cout << x << " ";
//     }
//     cout << endl;

//     // Remove Data from the head
//     l1.pop_front();
//     l1.pop_front();

//     for (int x : l1)
//     {
//         cout << x << " ";
//     }
//     cout << endl;

//     // Remove All nodes from Linked-List
//     l1.clear();
//     cout << "size = " << distance(l1.begin(), l1.end()) << endl;

//     // To check if the Linked-List is empty or not
//     cout << "is Linked-List Empty ? " << l1.empty() << endl;

//     // Create a forward_list of size 3 with all nodes initialised with value 100
//     forward_list<int> l2(3, 100);

//     for (int x : l2)
//     {
//         cout << x << " ";
//     }
//     cout << endl;

//     // Create a forward-List of size 4 with all nodes initiaised with default value 0
//     forward_list<int> l3(4);

//     for (int x : l3)
//     {
//         cout << x << " ";
//     }
//     cout << endl;

//     // Initialised a linked-List
//     forward_list<int> l4 = {1, 2, 3, 4, 5};

//     for (int x : l4)
//     {
//         cout << x << " ";
//     }
//     cout << endl;
// }

// ##########################################################################################################################################################################
// Doubly Linked-List STL representation - list
#include <iostream>
#include <list>
using namespace std;
int main()
{
    // Create an empty list
    list<int> l1;

    // To Find size of List we have size() function
    cout << "size of Linked List is : " << l1.size() << endl;

    // Insertion at Head : Time - O(1)
    l1.push_front(30);
    l1.push_front(20);
    l1.push_front(10);

    // Insertion at tail : Time-O(1)
    l1.push_back(40);
    l1.push_back(50);

    cout << "size of Linked List is : " << l1.size() << endl;

    // TO Access the element At the Head
    cout << "Head of List is " << l1.front() << endl;

    // Access Element At the Tail
    cout << "Tail is : " << l1.back() << endl;

    // Iterate over the Linked-List
    // 1. Using iterator
    for (auto it = l1.begin(), end = l1.end(); it != end; it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // 2.Using For-each loop
    for (auto x : l1)
    {
        cout << x << " ";
    }
    cout << endl;

    // Remove head Node of list
    l1.pop_front();

    // Remove tail Node of List
    l1.pop_back();

    for (auto x : l1)
    {
        cout << x << " ";
    }
    cout << endl;

    // Clear List
    l1.clear();

    // To Check if List is empty or not
    cout << "Is List Empty ? " << l1.empty() << endl;

    // Create a List of Size 3 with all elements having value 100
    list<int> l2(3, 100);

    for (auto x : l2)
    {
        cout << x << " ";
    }
    cout << endl;

    // Create A List of size 5 with all nodes having default value of 0
    list<int> l3(5);

    for (auto x : l3)
    {
        cout << x << " ";
    }
    cout << endl;

    // Initialized a List
    list<int> l4 = {1, 2, 3, 4, 5};

    for (auto x : l4)
    {
        cout << x << " ";
    }
    cout << endl;
}