#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool myComperator(int a, int b)
{
    string s_ab = to_string(a) + to_string(b);
    string s_ba = to_string(b) + to_string(a);

    if (s_ab > s_ba)
    {
        return true; // swap is not required
    }
    return false; // Swap is required
}
int main()
{
    vector<int> v = {54, 546, 548, 60};
    sort(v.begin(), v.end(), myComperator);
    string ans = "";
    for (int i = 0; i < v.size(); i++)
    {
        ans = ans + to_string(v[i]);
    }
    cout << ans << endl;
}