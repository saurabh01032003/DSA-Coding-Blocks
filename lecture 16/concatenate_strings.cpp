#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[100] = "hello";
    char str2[] = "saurabh";
    // int i = strlen(str1);
    // for (int j = 0; j <= strlen(str2); j++)
    // {
    //     str1[i] = str2[j];
    //     i++;
    // }
    // cout << endl;
    // cout << str1 << endl;
    cout << strcat(str1,str2) << endl;
}