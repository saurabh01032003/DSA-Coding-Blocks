#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    cout << &x << endl;
    cout << sizeof(&x) << endl
         << endl;

    double y = 3.14;
    cout << &y << endl;
    cout << sizeof(&y) << endl;

    char ch = 'A';
    // When you are printing address of character then you will get the value at the address followed by some garbage values 
    // till memory encounters a null character
    cout << "& of ch = " << &ch << endl;
    cout << "sizeof (&ch) = " << sizeof(&ch) << endl;
}