#include <iostream>
#include <cstring>
using namespace std;
string keypad[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void generateWords(char *inp, char *out, int i, int j)
{
    // Base Case
    if (inp[i] == '\0')
    {
        out[j] = '\0';
        cout << out << endl;
        return;
    }

    // Recursive Case
    int digit = inp[i] - '0';
    string str = keypad[digit];
    for (int k = 0; k < str.size(); k++)
    {
        out[j] = str[k];
        generateWords(inp, out, i + 1, j + 1);
    }
}
int main()
{
    char inp[] = "23";
    int i = 0;
    int j = 0;
    int n = strlen(inp);
    char out[n];
    generateWords(inp, out, i, j);
}