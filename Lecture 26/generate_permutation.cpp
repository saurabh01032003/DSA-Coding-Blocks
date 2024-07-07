#include <iostream>
#include <cstring>
using namespace std;
void generatePermutations(char *str, int i)
{
    // Base Case
    if(str[i] == '\0')
    {
        cout << str << endl;
        return;
    }

    // Recursive Case
    int n = strlen(str);
    for (int j = i; j < n; j++)
    {
        swap(str[i], str[j]);
        generatePermutations(str, i + 1);
        swap(str[i], str[j]);
    }
}
int main()
{
    char str[] = "abc";
    int i = 0;
    generatePermutations(str, i);
}