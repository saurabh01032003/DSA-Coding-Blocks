#include <iostream>
using namespace std;
int *resize(int *A,int capacity)
{
    cout << "resizing from " << capacity <<" to " << 2*capacity << endl;
    int *B = new int[2*capacity];
    for(int i = 0; i < capacity; i++)
    {
        B[i] = A[i];
    }
    delete []A;//deallocate memory of A in heap
    return B;
}
int main()
{
    int* A = new int[1];
    int capacity = 1;//To store the capacity of dynamic array
    int size = 0;//To store the size of dynamic array

    int x; // to store integer value read from user;

    while(true)
    {
        cin >> x;

        if(x == -1)
        {
            break;
        }

        if (capacity == size)
        {
            // Resize the capacaity 
            A = resize(A,capacity);
            capacity = 2*capacity;//As you have increased the capacity in heap in resize function so increase it here alse as you have passed capacity by value not by reference
        }

        A[size] = x;
        size++;
    }

    // Print the dynamic array
    for(int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

}