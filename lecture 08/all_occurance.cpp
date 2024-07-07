#include <iostream>
using namespace std;
int main()
{
    int arr[5]= {10,20,10,40,10};
    int n = sizeof(arr)/ sizeof(int);
    int target;
    cin >> target;
    for(int i = 0 ;i < n; i++)
    {
        if(target == arr[i])
        {
            cout << "Element found at : " << i << endl;
        }
    }

return 0;
}