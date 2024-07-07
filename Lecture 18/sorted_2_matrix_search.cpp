#include <iostream>
using namespace std;
bool search(int mat[][4], int m, int n, int target)
{
    int i = 0;
    int j = n - 1;
    while (i <= m - 1 and j >= 0) // because i is increasing and j is decreasing
    {
        if (mat[i][j] == target)
        {
            return true;
        }
        else if (mat[i][j] > target)
        {
            j--;
        }
        else
        {
            // mat[i][j] < target
            i++;
        }
    }
    return false;
}
int main()
{
    int mat[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int m = 4;
    int n = 4;
    int target;
    cin >> target;

    search(mat, m, n, target) ? cout << target << " is found " << endl : cout << target << " is not found" << endl;
}