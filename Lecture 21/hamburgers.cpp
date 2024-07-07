/*
    Hamburgers : https://codeforces.com/contest/371/problem/C
    
    constraints : 
    
    1 ≤ s.length ≤ 100
    n_b, n_s, n_c (1 ≤ n_b,n_s,n_c ≤ 100)
    p_b, p_s, p_c (1 ≤ p_b,p_s,p_c ≤ 100)
    1 ≤ r ≤ 10^12

    What is the minimum no. of hamburgers Polycarpus can make ? 

    assume,

        * s.length = 1 (say s = "B") 
        * n_b, n_s, n_c = 1 
        * p_b, p_s, p_c > 1 
        * r = 1

        under these contraints, Polycarpus can only make a single hamburger.

    What is the maximum no. of hamburgers Polycarpus can make ? 

    assume,

        * s.length = 1 (say s = "B") 
        * n_b, n_s, n_c = 100 
        * p_b, p_s, p_c = 1 
        * r = 10^12

        under these contraints, Polycarpus can only make a 10^12 + 100 hamburgers.


*/

#include <iostream>
#define ll long long

using namespace std;

string s;          // to store the hamburger's recipe
int n_b, n_s, n_c; // to store the available ingredients in kitchen(i.e 'B','S','C')
int p_b, p_s, p_c; // to store price of 'B','S','C'

int r_b, r_c, r_s; // to store frequency of 'B','S' and 'C' (i.e hamburger's recipe)
ll r;              // To store money(rubels) that polycarpus has

bool canMakeMhamburgers(ll m)
{
    // check if Polycarpus can cook 'm' hamburgers ?

    // to cook 'm' hamburgers, Polycarpus needs m.r_b bread, m.r_s sausage & m.r_c cheese pieces
    // in the inventory, Polycarpus already has n_b bread, n_s sausage & n_c cheese pieces

    // To avoid '-ve' value of (m*r_b-n_b), we have taken maximum with 0
    ll e_b = max((ll)0, m * r_b - n_b); // to store extra bread pieces required to cook 'm' hamburgers
    ll e_s = max((ll)0, m * r_s - n_s);// to store extra sausage pieces required to cook 'm' hamburgers
    ll e_c = max((ll)0, m * r_c - n_c);// to store extra sausage pieces required to cook 'm' hamburgers

    ll reqRubel = e_b * p_b + e_s * p_s + e_c * p_c;// to store the money Polycarpus needs to purchase extra ingredients
    if (reqRubel <= r)
    {
        return true;
    }
    return false;
}

int main()
{
    cin >> s;
    cin >> n_b >> n_s >> n_c;
    cin >> p_b >> p_s >> p_c;
    cin >> r;

    for (char ch : s)
    {
        if (ch == 'B')
            r_b++;
        else if (ch == 'S')
            r_s++;
        else if (ch == 'C')
            r_c++;
    }
    ll lo = 0;// min. no. of hamburgers Polycarpus can make
    ll e = 1000000000100;// max. no. of hamburgers Polycarpus can make
    ll ans = 0;//To track maximum number of hamburger's that polycarpus can make
    while (lo <= e)
    {
        ll m = lo + (e - lo) / 2;

        if (canMakeMhamburgers(m))
        {
            // Polycarpus can cook 'm' hamburgers therefore move right
            // so the search space reduces from [lo, e] to [m+1, e].
            ans = m;
            lo = m + 1;
        }
        else
        {
            // Polycarpus cannot cook 'm' hamburgers hence move left
            // so the search space reduces from [lo, e] to [lo, m-1].
            e = m - 1;
        }
    }
    cout << ans << endl;
    return 0;
}