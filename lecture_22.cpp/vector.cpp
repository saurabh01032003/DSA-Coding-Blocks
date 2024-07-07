// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     v.push_back(10);
//     cout << v.size() << endl;
//     cout << v.capacity() << endl;
//     cout << endl;
//     v.push_back(20);
//     cout << v.size() << endl;
//     cout << v.capacity() << endl;
//     cout << endl;
//     v.push_back(40);
//     cout << v.size() << endl;
//     cout << v.capacity() << endl;
//     cout << endl;
//     v.push_back(50);
//     cout << v.size() << endl;
//     cout << v.capacity() << endl;
//     cout << endl;
//     v.push_back(70);
//     cout << v.size() << endl;
//     cout << v.capacity() << endl;

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;

//     for (int x : v)
//     {
//         cout << x << " ";
//     }

//     cout << endl;

//     for (auto it = v.begin(), end = v.end(); it != end; it++)
//     {
//         cout << *it << " ";
//     }
//     cout << endl;
//     v.pop_back();

//     cout << v.size() << endl;
//     cout << v.capacity() << endl;
//     cout << endl;

//     v.clear();
//     cout << v.size() << endl;
//     cout << v.capacity() << endl;
//     cout << endl;

//     if (v.size() == 0)
//     {
//         cout << "Vector is empty " << endl;
//     }
//     cout << endl;

//     if (v.empty())
//     {
//         cout << "Vector is empty  ";
//     }
//     else
//     {
//         cout << "Vector is non-empty";
//     }
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool myGreaterComparator(int a, int b)
{
    // if (a > b)
    // {
    //     // We don't need swap
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
    return a > b;
}
int main()
{
    vector<int> vec = {1, 0, 2, 3, 4};
    int n = vec.size();
    for (int x : vec)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << vec.capacity() << endl;

    // Reversing a Vector
    reverse(vec.begin(), vec.end());
    for (int x : vec)
    {
        cout << x << " ";
    }
    cout << endl;

    // Sorting a Vector
    sort(vec.begin() + 1, vec.end() - 1);
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    sort(vec.begin(), vec.end());
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Sorting the vecor in decreasing order

    //     // 1. Using rbegin() and rend()
    //     sort(vec.rbegin(), vec.rend());
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << vec[i] << " ";
    //     }

    //     // 2. Using built in Comparator, greator<int>()
    //     sort(vec.begin(), vec.end(), greater<int>());
    //     for (int x : vec)
    //     {
    //         cout << x << " ";
    //     }
    //     cout << endl;

    // Using our own Comparator
    sort(vec.begin(), vec.end(), myGreaterComparator);
    for (int x : vec)
    {
        cout << x << " ";
    }
    cout << endl;
}