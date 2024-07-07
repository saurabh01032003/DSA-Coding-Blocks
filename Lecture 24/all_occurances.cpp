#include <iostream>
using namespace std;
bool flag = true;
void f(int *arr,int target,int i,int n)
{
    // Base Case
    if(i == n)
    {
        if(flag == true)
        {
            cout << -1;
        }
        return;
    }

    // Recursive Case
    if(arr[i] == target)
    {
        flag = false;
        cout << i << " ";
    }

    f(arr,target,i+1,n);
}
int main()
{
    int arr[] = {10,20,30,20,50};
    int n = sizeof(arr)/sizeof(int);
    int target = 20;
    f(arr,target,0,n);
}