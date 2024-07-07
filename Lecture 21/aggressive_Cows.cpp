#include <iostream>
#include <climits>
using namespace std;
/*
    return true if you can place 'c' cows in 'n' stalls at a minimum distance of >= m
    return false if you cannot place 'c' cows in 'n' stalls at a minimum distance of >= m
*/
bool canPlaceCows(int c, int n, int *pos, int m) /*
                                                     return true if you can place 'c' cows in 'n' stalls at a minimum distance of >= m
                                                     return false if you cannot place 'c' cows in 'n' stalls at a minimum distance of >= m
                                                 */
{
    //Place first cow at the first stall
    int prevCowPos = pos[0];
    int numOfCowPlaced = 1;

    for(int i = 1;i < n;i++)
    {
        //Can I place the next cow at the ith stall such that the minimum distance b/w two cows should be
        // >= m ?
        if(pos[i]-prevCowPos >= m)
        {
            prevCowPos = pos[i];
            numOfCowPlaced++;
            if(numOfCowPlaced == c)
            {
                //We have placed 'c' cows with minmum distace b/w any two Cow is 'm'
                return true;
            }
        }
    }
    return false;
}

int largestMinDist(int n, int c, int *pos)
{
    int e = pos[n - 1] - pos[0]; // for the tightest upper-bound, place the two cows at the extreme positions
    int s = INT_MAX;             // for the tightest lower-bound, place the two cows in stalls closest to each other

    for (int i = 1; i < n; i++)
    {
        s = min(s, pos[i] - pos[i - 1]);
    }

    int ans; // This will contain our final ans

    while (s <= e)
    {
        int m = s + (e - s) / 2;
        // can you place 'c' cows in 'n' stalls such that
        // the minimum distance b/w them is at-least 'm'?

        if (canPlaceCows(c, n, pos, m))
        {
            // you can place 'c' cows in 'n' stalls
            ans = m;
            // since we want to find the largest minimum distance b/w
            // the cows, continue your search towards the right of 'm'
            // i.e. search space reduces from [s, e] to [m+1, e].
            s = m + 1;
        }
        else
        {
            // you cannot place 'c' cows in 'n' stalls at a minimum distance
            // of 'm' therefore continue your search towards the left of 'm'
            // i.e. search space reduces from [s, e] to [s, m-1].
            e = m - 1;
        }
    }
    return ans;
}

int main()
{
    int n = 5;
    int c = 3;
    int pos[] = {1, 2, 4, 8, 9};
    cout << largestMinDist(n, c, pos) << endl;
}