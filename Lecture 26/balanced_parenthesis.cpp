// For all parenthesis

// #include <iostream>
// using namespace std;
// void paranthesis(int n, char *out, int i, int open_cnt, int close_cnt)
// {
//     // Base Case
//     if (i == 2 * n)
//     {
//         out[i] = '\0';
//         cout << out << endl;
//         return;
//     }

//     // Recursive Case
//     if (open_cnt < n)
//     {
//         out[i] = '(';
//         // open_cnt++;
//         paranthesis(n, out, i + 1, open_cnt + 1, close_cnt);
//     }

//     if (close_cnt < n)
//     {
//         out[i] = ')';
//         paranthesis(n, out, i + 1, open_cnt, close_cnt + 1);
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     char out[20];
//     int i = 0;
//     int open_cnt = 0;
//     int close_cnt = 0;
//     paranthesis(n, out, i, open_cnt, close_cnt);
// }

// ***********************################################**************************************
// For Balanced Parenthesis
#include <iostream>
using namespace std;
void paranthesis(int n, char *out, int i, int open_cnt, int close_cnt)
{
    // Base Case
    if (i == 2 * n)
    {
        out[i] = '\0';
        cout << out << endl;
        return;
    }

    // Recursive Case
    if (open_cnt < n)
    {
        out[i] = '(';
        paranthesis(n, out, i + 1, open_cnt + 1, close_cnt);
    }

    if (close_cnt < n)
    {
        if (open_cnt > close_cnt)
        {
            out[i] = ')';
            paranthesis(n, out, i + 1, open_cnt, close_cnt + 1);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    char out[20];
    int i = 0;
    int open_cnt = 0;
    int close_cnt = 0;
    paranthesis(n, out, i, open_cnt, close_cnt);
}