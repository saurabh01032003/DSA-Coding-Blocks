#include <iostream>
using namespace std;
void f(int n, char source, char helper, char destination)
{
    // Base Case
    if(n == 0)
    {
        return;
    }

    // Recursive Case
    // 1.Move (n-1) disks from A to B with the help of C
    f(n - 1, source, destination, helper);

    // 2. Move the largest disk from A(source) to destination(C)
    cout << "Move the disks from " << source << " to " << destination << endl;

    // 3. Move the (n-1) disks from B(helper) to C(destination) with help of A(source)
    f(n - 1, helper, source, destination);
}
int main()
{
    int n = 3;
    f(n, 'A', 'B', 'C');
}