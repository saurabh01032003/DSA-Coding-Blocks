// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {

// // Time Complexity = O(n^3)
//     vector<pair<int, int>> v = {{1, 1}, {1, 2}, {2, 1}, {2, 2}, {3, 1}, {3, 2}};
//     int cnt = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         pair<int, int> p1 = v[i];
//         for (int j = i+1; j < v.size(); j++)
//         {
//             pair<int, int> p2 = v[j];
//             if (p1.first != p2.first and p1.second != p2.second)
//             {
//                 bool flag1 = false;
//                 for (int k = 0; k < v.size(); k++)
//                 {
//                     pair<int, int> p3 = {p2.first, p1.second};
//                     if (v[k] == p3)
//                     {
//                         flag1 = true;
//                         break;
//                     }
//                 }
//                 bool flag2 = false;
//                 for (int k = 0; k < v.size(); k++)
//                 {
//                     pair<int, int> p4 = {p1.first, p2.second};
//                     if (v[k] == p4)
//                     {
//                         flag2 = true;
//                         break;
//                     }
//                 }
//                 if (flag1 == true and flag2 == true)
//                 {
//                     cnt++;
//                 }
//             }
//         }
//     }
//     cout << cnt/2 << endl;
// }

// #######################################################################################################################################################################
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    vector<pair<int,int>> v = {{1, 1}, {1, 2}, {2, 1}, {2, 2}, {3, 1}, {3, 2}};
    set<pair<int,int>> s(v.begin(),v.end());
    int cnt = 0;
    for(int i = 0; i < v.size();i++)
    {
        pair<int,int> p1 = v[i];
        for(int j = i+1;j < v.size();j++)
        {
            pair<int,int> p2 = v[j];
            if(p1.first != p2.first and p1.second != p2.second)
            {
                pair<int,int> p3 = {p2.first,p1.second};
                bool flag1 = false;//We have not got p3
                if(s.find(p3) != s.end())
                {
                    flag1 = true;//We got p3
                }
                pair<int,int> p4 = {p1.first,p2.second};
                bool flag2 = false;//We haven't got p4
                if(s.find(p4) != s.end())
                {
                    flag2 = true;//We got p4
                }
                if(flag1 == true and flag2 == true)
                {
                    // We got p3 and p4 both
                    cnt++;
                }
            }
        }
    }
    cout << cnt/2 << endl;
}