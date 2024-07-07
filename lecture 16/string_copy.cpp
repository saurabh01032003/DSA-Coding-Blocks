#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[] = "hello";
    char str2[] = "hi";
    // for (int i = 0; i <= strlen(str2); i++)
    // {
    //     str1[i] = str2[i];
    // }
    // cout << str1;
    // cout << endl;

    // Using built in function i.e strcpy()
    strcpy(str1,str2);
    cout << str1;
}