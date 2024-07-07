#include <iostream>
using namespace std;
int main()
{
    string str = "abcde";
    // Iterate of starting indices
    for(int i = 0; i < str.size(); i++)
    {
        // Iterate over ending indices
        for(int j = i; j < str.size(); j++)
        {
            // Generate Substing that starts at ith index and ends at jth index
            // cout << str.substr(i,j-i+1) << " ";

            for(int k = i;k <= j;k++)
            {
                cout << str[k];
            }
            cout << " ";
        }
        cout << endl;
    }
}