// #include <iostream>
// #include <set>
// using namespace std;
// void subsequences(char *arr,char *out, int i,int j)
// {
//     // Base Case
//     if(arr[i] == '\0')
//     {
//         out[j] = '\0';
//         cout << out << " ";
//         return;
//     }

//     // Recursive Case
//     out[j] = arr[i];
//     subsequences(arr,out,i+1,j+1);

//     subsequences(arr,out,i+1,j);

// }
// int main()
// {
//     char arr[] = "abc";
//     int i = 0;
//     int j = 0;
//     char out[100];
//     subsequences(arr,out,i,j);
// }

// // To print Subsequences in sorted order
// #include <iostream>
// #include <set>
// using namespace std;
// set <string> s;
// void subsequences(char *arr,char *out, int i,int j)
// {
//     // Base Case
//     if(arr[i] == '\0')
//     {
//         out[j] = '\0';
//         // cout << out << " ";
//         string str = string(out); // Convert char array into string
//         s.insert(str);
//         return;
//     }

//     // Recursive Case
//     out[j] = arr[i];
//     subsequences(arr,out,i+1,j+1);

//     subsequences(arr,out,i+1,j);

// }
// int main()
// {
//     char arr[] = "abc";
//     int i = 0;
//     int j = 0;
//     char out[100];
//     subsequences(arr,out,i,j);
//     for(auto x : s)
//     {
//         cout << x << " ";
//     }
// }

// printing in sorted order without using global set
// To print Subsequences in sorted order
#include <iostream>
#include <set>
using namespace std;
void subsequences(char *arr, char *out, int i, int j,set<string> &s)// By default sets are pass by value so changes do not seen in main , So pass them by address
{
    // Base Case
    if (arr[i] == '\0')
    {
        out[j] = '\0';
        // cout << out << " ";
        string str = string(out); // Convert char array into string
        s.insert(str);
        return;
    }

    // Recursive Case
    out[j] = arr[i];
    subsequences(arr, out, i + 1, j + 1,s);

    subsequences(arr, out, i + 1, j,s);
}
int main()
{
    char arr[] = "abc";
    int i = 0;
    int j = 0;
    char out[100];
    set<string> s;
    subsequences(arr, out, i, j,s);
    for (auto x : s)
    {
        cout << x << endl;
    }
}