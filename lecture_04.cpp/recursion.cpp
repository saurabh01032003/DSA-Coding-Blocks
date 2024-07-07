#include <iostream>
using namespace std;
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    int a=n;
    a=a*factorial(n-1);
    return a;
}
int main()
{
   int n=5;
   int res=factorial(n);
   cout << res << endl;

return 0;
}