// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     // Time Complexity == O(n^2)

//     vector<pair<int, int>> v = {{1, 2}, {2, 1}, {2, 2}, {2, 3}, {3, 2}};
//     int totalTriangles = 0;
//     for (pair<int,int> p : v)
//     {
//         // consider p as pivot point and compute axis parallel right Angled triangle around it

//         int a = 0;//Stores count of points that have same x-coordinates as pivot index

//         int b = 0;//Stores count of points that have same y-coordinates as pivot index

//         for (pair<int,int> point : v)
//         {
//             if (p.first == point.first)
//             {
//                 a++;
//             }
//             if(p.second == point.second)
//             {
//                 b++;
//             }
//         }
//         totalTriangles += (a - 1) * (b - 1);
//     }
//     cout << "Total number of right angled triangles are : " << totalTriangles << endl;
// }

// $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    vector<pair<int, int>> v = {{1, 2}, {2, 1}, {2, 2}, {2, 3}, {3, 2}};

    unordered_map<int, int> xFreqMap;
    unordered_map<int, int> yFreqMap;
    for (pair<int, int> pivot : v)
    {
        xFreqMap[pivot.first]++;
        yFreqMap[pivot.second]++;
    }
    int total = 0;
    for (pair<int, int> pivot : v)
    {
        int a = xFreqMap[pivot.first];
        int b = yFreqMap[pivot.second];
        total += (a-1)*(b-1);
    }
    cout << total << endl;
}