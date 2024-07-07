#include <iostream>
#include <vector>
using namespace std;
void heapify(int i, vector<int> &v, int n)
{
    int maxIdx = i;

    int leftIdx = 2 * i + 1;
    if (leftIdx < n and v[leftIdx] > v[maxIdx])
    {
        maxIdx = leftIdx;
    }

    int rightIdx = 2 * i + 2;
    if (rightIdx < n and v[rightIdx] > v[maxIdx])
    {
        maxIdx = rightIdx;
    }
    if (maxIdx != i)
    {
        swap(v[maxIdx], v[i]);
        heapify(maxIdx, v, n);
    }

}

int main()
{
    vector<int> v = {20, 10, 50, 40, 30};
    int n = v.size();

    // 1.Convert Given array into max Heap
    for (int i = n - 1; i >= 0; i--)
    {
        heapify(i, v, n);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    int heapSize = n;
    while (heapSize > 1)
    {
        swap(v[0], v[heapSize - 1]);
        heapSize--;
        heapify(0, v, heapSize);
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}