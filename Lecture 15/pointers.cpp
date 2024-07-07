#include <iostream>
using namespace std;
int main()
{
    // int x = 10;
    // int *xptr = &x;
    // cout << &x << endl;
    // cout << xptr << endl;

    // Type Casting (Storing address of one type of variable into another type of Pointer)
    // int x = 10;
    // char *chptr = (char *)&x;
    // cout << "&x is " << &x << endl;
    // cout << "chptr is " << chptr;

    //    Generic Pointer/Void Pointer(Used to store address of any type of variable in a single type of pointer {i.e (void*)})
    // int x = 10;
    // void * ptr = &x;//(void*)
    // cout << ptr << endl;
    // cout << &x << endl;

    // Dereferencing a Pointer
    // int x = 516;
    // int *xptr = &x;
    // cout << *xptr; // value at xptr
    // cout << endl;
    // cout << endl;
    // char *chptr = (char *)&x;
    // cout <<"*chptr " << (int) *chptr;

    // // Pointer Arithmatics
    // int x = 10;
    // int *xptr = &x;
    // cout << xptr << endl;
    // xptr = xptr + 1;
    // cout << xptr << endl; //  address of (x) + 1* sizeof(int) int hexadecimal

    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int);

    int *ptr1 = arr;
    int *ptr2 = arr + 3;
    cout << ptr2 - ptr1;

    // // Pointers and Arrays
    // int arr[] = {10, 20, 30, 40, 50, 60, 70};
    // int n = sizeof(arr) / sizeof(int);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << &arr[i] << " " << arr + i << "  " << *(arr + i) << " " << arr[i] << endl;
    // }

    // int arr[] = {10, 20, 30, 40, 50, 60, 70};
    // int n = sizeof(arr) / sizeof(int);
    // int *ptr = arr; 
    // for(int i = 0; i < n;i++)
    // {
    //     cout << ptr[i] << " " << *(ptr+i) <<" "<<*(arr+i) << endl;
    // }

    // // Pointers to Pointers
    // int x = 10;
    // int *xptr = &x;
    // int ** xxptr = &xptr;
    // cout << *xptr << endl;
    // cout << *xxptr <<" " << xptr << endl;
    // cout << **xxptr << endl;
}