#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    // Reverse a string
    
    // 1.Using two pointer approach
    char str[] = "hello";
    // int n = strlen(str);
    // int i = 0;
    // int j = n - 1;
    // while (i < j)
    // {
    //     swap(str[i], str[j]);
    //     i++;
    //     j--;
    // }
    // cout << str << endl;

    // 2. Using strrev() -> in cstring header file
    strrev(str);
    cout << str << endl;

    // 3. Using reverse() function -> in algorithm header file
    reverse(str, str + strlen(str));
    cout << str << endl;
}
