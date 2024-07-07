#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cin >> m >> n;

    // Create a 2D array on heap of size (m*n)

       //1.Create a 1D array of m size 
       int** ptr = new int*[m];

       //2. Points each element to array of size 'n'
       for (int i = 0; i < m; i++)
       {
        ptr[i] = new int[n];
       }
    
    // Read inputs into 2D array
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> ptr[i][j];
        }
    }
    cout << endl;

    // Print the 2D array
    for(int i = 0;i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }


    // Deallocate the memory for 2D array in heap

       //1.Deallocate 'm' rows in heap
       for(int i = 0; i < m;i++)
       {
        delete []ptr[i];
       }

       //2.Deallocate 1d array of size m
       delete []ptr;
}