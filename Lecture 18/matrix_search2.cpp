// Search the element in the matrix if matrix is sorted row wise


#include <iostream>
#include <algorithm>
using namespace std;
bool matrixSearch(int arr[][4],int m,int n,int target)
{
    for(int i = 0; i < m; i++)
    {
            if(binary_search(arr[i],arr[i+1],target))
            {
                return true;
            }
    }
    return false;

}
int main()
{
    int arr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int m = 4;
    int n = 4;
    int target;
    cin >> target;
    matrixSearch(arr,m,n,target) ? cout << target <<  " is found" << endl : cout << target << " is not found " << endl;

}

