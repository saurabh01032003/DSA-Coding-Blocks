// Search the element in the matrix if matrix is sorted row wise as well as column wise

#include <iostream>
using namespace std;
bool matrixSearch(int arr[][4], int m, int n, int target)
{
    int i = 0;
    int j = n - 1;
    while (i < m and j >= 0)
    {
        if (arr[i][j] == target)
        {
            return true;
        }
        else if (arr[i][j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return false;
}
int main()
{
    int arr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {14, 15, 16, 17}};
    int m = 4;
    int n = 4;
    int target;
    cin >> target;
    matrixSearch(arr, m, n, target) ? cout << target << " is found " : cout << target << " is not found " << endl;
}