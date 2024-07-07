#include <iostream>
using namespace std;
int main()
{
    // int *arr = new int[5];

    // You can take size from user too
    // Which is known at run time
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << *(arr + i) << endl;
    }

    // Deallocate memory on heap due to array
    delete[] arr;

    //    Never do this  //  cout << arr[3];// Very very wrong practice as you are trying to access the element whose memory is deallocated
}