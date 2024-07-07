#include <iostream>
using namespace std;
    // You will encounter error int below program
    int* f(){
    int *ptr = new int;
    *ptr = 10;
    return ptr;
}
int main()
{
    int *ptrx = f();
}