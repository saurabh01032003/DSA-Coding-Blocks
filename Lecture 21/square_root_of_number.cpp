#include <iostream>
using namespace std;
/*

    To find the square root of a number 'n', we have to find the
    largest integer 'm' which satisfies the condition m^2 <= n.

*/
float squareRoot(int n)
{
    // square root of 'n' always lies between 0 and n
    int s = 0;
    int e = n;

    float ans;
    while (s <= e)
    {
        int m = s + (e - s) / 2;

        if (m * m <= n)
        {
            // 'm' can potentially be integer part the sqrt of 'n'
            ans = m;
            // since we want to find the largest integer 'm'
            // which satisfies the condition  m^2 <= n  will
            // continue the search towards the right of 'm'
            // i.e. the search space reduces to [m+1, e].
            s = m + 1;
        }
        else
        {
            // 'm' cannot be the integer part of sqrt of 'n' therfore
            // continue the search towards the left of 'm' i.e. the
            // search space reduces from [s, e] to [s, m-1]
            e = m - 1;
        }
    }
    
    float incrementFactor = 0.1;
    int p = 3; // precision (i.e 3 digits after decimal place)
    for (int i = 0; i < p; i++)
    {
        while (ans * ans <= n)
        {
            ans += incrementFactor;
        }
        ans = ans - incrementFactor;
        incrementFactor = incrementFactor / 10;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << squareRoot(n) << endl;
}