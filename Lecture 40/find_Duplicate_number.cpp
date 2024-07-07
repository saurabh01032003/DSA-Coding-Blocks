#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 0, 1, 0, 2};
    int n = v.size();
    for(int i = 0; i < n;i++)
    { 
        // initially '0'th index pe 1 mila to 1st index pe jake 0+N = 5 hogaya
        // but i = 1 pe ab 5 pada hai toh v[1] out of bound chala jayega
        // so' v[i]%n karlo taki previously stored value mil jaye
        v[v[i]%n] += n;
    }
    // Check by printing modified array
    // for(int i = 0; i < n;i++)
    // {
    //     cout << v[i] << " ";
    // }
    cout << endl;
 
    for(int i = 0; i < n;i++)
    {
        if(v[i]/n >= 2) // v[i]/N will give frequency of element 'i'
        {
            // 'i' is repeating value
            cout << i << " ";
        }
    }
}