// #include <iostream>
// #include <utility>
// #include <vector>
// using namespace std;
// int main()
// {
//     //  declaring pairs
//     pair<int ,int> name; // name is name of pair

//     // initialising pairs
//     pair<int, int> p(1, 2);
//     pair<int, string> p1(2, "saurabh");
//     pair<string, string> p2("saurabh", "mishra");

//     // initialising pair using make_pair function
//     pair<char, double> p3 = make_pair('A', 3.14);

//     cout << "(" << p.first << "," << p.second << ")" << endl
//          << "(" << p1.first << "," << p1.second << ")" << endl
//          << "(" << p2.first << "," << p2.second << ")" << endl
//          << "(" << p3.first << " ," << p3.second << ")" << endl;
// }

#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

// bool myComperator(pair<int, char> a, pair<int, char> b)
// {
//     return a.second < b.second;
// }
int main()
{
    // //Declaring a vector of pairs
    // vector<pair<int, int>> v;

    // // Initialising a vector of pairs

    // 1. Using {}
    // vector<pair<int, int>> v1 = {{1, 2}, {3, 4}, {5, 6}};
    // for (int i = 0; i < v1.size(); i++)
    // {
    //     cout << "(" << v1[i].first << "," << v1[i].second << ")" << endl;
    // }

    // // 2. Using make_pair() function
    // vector<pair<int, char>> v = {make_pair(1, 'A'), make_pair(2, 'B'), make_pair(5, 'C')};
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << "(" << v[i].first << "," << v[i].second << ")" << endl;
    // }

    // // 3. Sorting a vector of pairs
    // vector<pair<int, char>> v = {make_pair(3, 'A'), make_pair(2, 'B'), make_pair(1, 'C')};
    // sort(v.begin(), v.end());
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << "(" << v[i].first << "," << v[i].second << ")" << endl;
    // }

    // // sorting using self made comperator , in increasing order based on second element of pair
    // vector<pair<int, char>> v = {make_pair(3, 'A'), make_pair(2, 'B'), make_pair(1, 'C')};

    // sort(v.begin(), v.end(), myComperator);
    // for (pair<int, char> p : v)
    // {
    //     cout << p.first << "," << p.second << endl;
    // }

    // 4. Reading data into a vector of pairs

    // // Using push_back function
    // int n;
    // cin >> n;
    // vector<pair<int, int>> v8;
    // for (int i = 0; i < n; i++)
    // {
    //     int x, y;
    //     cin >> x >> y;

    //     v8.push_back({x, y});
    // }
    // cout << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << v8[i].first << "," << v8[i].second << endl;
    // }

    // Using fixed sized vector
    int m;
    cin >> m;

    vector<pair<int, int>> v9(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v9[i].first >> v9[i].second;
    }

    cout << endl;
    for (pair<int, int> p : v9)
    {
        cout << p.first << "," << p.second << endl;
    }
}

// Pairs and Vector of pairs THE END