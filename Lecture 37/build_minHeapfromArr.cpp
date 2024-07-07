#include <iostream>
#include <vector>
using namespace std;
void heapify(int i,vector<int>& v)
{
    int min_idx = i;

    int leftIdx = 2*i+1;
    if(leftIdx < v.size() and v[leftIdx] < v[min_idx])
    {
        min_idx = leftIdx;
    }

    int rightIdx = 2*i+2;
    if(rightIdx < v.size() and v[rightIdx] < v[min_idx])
    {
        min_idx = rightIdx;
    }

    if(min_idx != i)
    {
        swap(v[i],v[min_idx]);
        heapify(min_idx,v);
    }
}
int main()
{
    vector<int> v = {3, 1, 4, 8, 5, 2, 6, 9, 7};
    for (int i = v.size() - 1; i >= 0; i--)
    {
        heapify(i,v); //Here, we need to pass vector also as this vector is not inside our class
    }

    for(int i = 0; i < v.size();i++)
    {
        cout << v[i] << " ";
    }
}