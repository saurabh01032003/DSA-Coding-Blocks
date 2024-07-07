#include <iostream>
#include <cstring>
using namespace std;
void generateUniquePermutations(char *inp, int j, int n)
{
    // Base Case
    if (inp[j] == '\0')
    // if (j == n)
    {
        cout << inp << endl;
        return;
    }

    // Recursive Case
    // int n = strlen(inp);
    for (int k = j; k < n; k++)
    {
        bool flag = true;
        for (int m= k + 1; m < n; m++)
        {
            if (inp[k] == inp[m])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            swap(inp[j], inp[k]);
            generateUniquePermutations(inp, j + 1, n);
            swap(inp[j], inp[k]); // Backtracking
        }
    }
}
int main()
{
    char inp[] = "aabc";
    int j = 0;
    int n = strlen(inp);
    generateUniquePermutations(inp, j, n);
}

// #include <iostream>
// #include <cstring>

// using namespace std;

// void generatePermutations(char *inp, int n, int i)
// {

//     // base case

//     if (i == n)
//     { // inp[i] == '\0'
//         cout << inp << endl;
//         return;
//     }

//     // recursive case

//     // generate unique permutations for inp[i...n-1]

//     // make a decision for the ith position

//     for (int j = i; j < n; j++)
//     {
//         bool flag = true; // assume inp[j] is unique in inp[j+1...n-1]
//         for (int k = j + 1; k < n; k++)
//         {
//             if (inp[k] == inp[j])
//             {
//                 flag = false;
//                 break;
//             }
//         }

//         if (flag)
//         {
//             swap(inp[i], inp[j]);
//             generatePermutations(inp, n, i + 1);
//             swap(inp[i], inp[j]);
//         }
//     }
// }
// int main()
// {

//     char inp[] = "aabc";
//     int n = strlen(inp);

//     generatePermutations(inp, n, 0);

//     return 0;
// }