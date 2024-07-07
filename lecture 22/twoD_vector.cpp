#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<vector<int>> v(3, vector<int>(4,5));
    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = 0; j < v[0].size(); j++)
    //     {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector<vector<int>> v = {{1,2,3} , {4,5,6} , {8,9,10}};
    for (int i = 0; i < v.size() ; i++)
    {
        for (int j=0; j < v[0].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}