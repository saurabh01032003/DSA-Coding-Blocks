#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(8);
    s.insert(1);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(4);

    cout << "Size is  " << s.size() << endl;
    s.erase(4);
    cout << "Size is " << s.size() << endl;

    // Iterating over the elements of set

    // Using for each loop
    for (auto x : s) // auto keyword is used if you don't know the type of element in set s (here you can write int also as we know set is integer type)
    {
        cout << x << " ";
    }
    cout << endl;

    // Using iterator
    for (auto it = s.begin(), end = s.end(); it != end; it++)
    {
        cout << *it << " "; // it will print elements in sorted order
    }
    cout << endl;

    // To check if element is present in set or not

    // 1.Using find function
    if (s.find(4) == s.end())
    {
        cout << "Element is not present" << endl;
    }
    else
    {
        cout << "Element is present" << endl;
    }

    // 2.Using count() function
    if (s.count(5) == 1)
    { // Elements in set are unique ,So if element is present then its count is 1 else it if 0
        cout << "Element is present" << endl;
    }
    else
    {
        cout << "Element is not Present" << endl;
    }


    // To remove all elements 
    s.clear();
    cout << "Size is " << s.size() << endl; 
}