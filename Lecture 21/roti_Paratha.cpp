#include <iostream>
#include <climits>
using namespace std;
int numberOfParathasInMtime(int l, int *rank, int timeLimit)
{
    int totalParathas = 0;
    for (int i = 0; i < l; i++)
    {
        // compute no. of pratas that can be cooked by the ith cook in the given timeLimit

        int n = 1;   // The paratha number to be cooked by rank[i] cook
        int cnt = 0; // to store the count of pratas that can be cooked in the
                     // given timeLimit by a cook with rank 'r'

        int time = 0; // to store the time consumed by the given cook of rank 'r'
        while (true)
        {
            // cook the nth prata
            time += n * rank[i];
            if (time > timeLimit)
            {
                break;
            }
            n++;
            cnt++;
        }
        totalParathas += cnt;
    }
    return totalParathas;
}
int getMinTime(int p, int l, int *rank)
{
    int s = 0;       // loose lower-bound
    int e = INT_MAX; // Loose Upper-bound
    int ans; 
    while (s <= e)
    {
        int m = s + (e - s) / 2;
        int x = numberOfParathasInMtime(l, rank, m);

        if (x >= p)
        {
            // 'l' cooks can also cook 'p' prathas in 'm' units of time.
            ans = m;
            // since we want to minimize the time, continue
            // your search towards the left of 'm' i.e. the
            // search space reduces from [s, e] to [s, m-1].
            e = m - 1;
        }
        else
        {
            // 'l' cooks cannot cook 'p' pratas in 'm' units of time
            // therefore continue your search towards the right of 'm'
            // i.e. the search space reduces from [s, e] to [m+1, e].
            s = m + 1;
        }
    }
    return ans;
}
int main()
{
    int p = 10;
    int l = 4;
    int rank[4] = {1, 2, 3, 4};
    cout << getMinTime(p, l, rank) << endl;
}