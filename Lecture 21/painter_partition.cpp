#include <iostream>
#include <climits>
using namespace std;

int numberOfPainters(int n, int k, int *board, int timeLimit) //returns the num of painters required to paint 'n' board of the given length in the timeLimit
{
    int numPainters = 1; // assume a single painter can paint n boards in the given timeLimit

	int time = 0; // to track the time taken by painter(s) to paint the 'n' boards (stop-watch)
    int i = 0;
    while (i < n)
    {
        // paint the ith board
        time += board[i];
        if (time > timeLimit)
        {
            // Add a new painter to paint the boards
            numPainters++;
            time = 0;
            continue;//i++ nahi hoga aur next painter same board se shuru karega
        }
        i++;
    }
    return numPainters;
}
int minTimeToPaint(int n, int k, int *board)
{
    // Find the bounds of Search Space
    int s = INT_MIN;// for the tightest lower-bound, assign a painter to each board
    int e = 0;// for the tightest upper-bound, assign a single painter to paint all the board
    for (int i = 0; i < n; i++)
    {
        s = max(s, board[i]);
        e += board[i];
    }

    int ans;
    while (s <= e)
    {
        int m = s + (e - s) / 2;

        int x = numberOfPainters(n, k, board, m);
        if (x <= k) 
        {
            // 'K' Painters can paint 'n' boards in m time
            // Save the time as ans
            ans = m;

            // Now' Check if they complete word in less then 'm' time or not?
            // Reduce search space from [s,e] ->[s,m-1]

            e = m - 1;
        }
        else
        {
            // 'K' Painters cann't paint 'n' boards in m time
            // So' check if they could paint in  >= m+1 time or not
            // Reduce search space from [s,e] ->[m+1,e]
            s = m + 1;
        }
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    int board[n];
    for (int i = 0; i < n; i++)
    {
        cin >> board[i];
    }
    cout << minTimeToPaint(n, k, board) << endl;
}