// Restricted coin toss

// #include <iostream>
// using namespace std;
// void cointoss(int n,char *out,int i,int j)
// {
//     // Base Case
//     if(i == n)
//     {
//         out[j] = '\0';
//         cout << out << endl;
//         return;
//     }


//     // Recursive Case
//     if(j == 0 || out[j-1] != 'H')
//     {
//         out[j] = 'H';
//         cointoss(n,out,i+1,j+1);
//     }
    
//     out[j] = 'T';
//     cointoss(n,out,i+1,j+1);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     char out[n];
//     int i = 0;
//     int j = 0;
//     cointoss(n,out,i,j);
// }

#include <iostream>
using namespace std;
void rescointoss(char *out,int i,int j, int n)
{
    // Base Case
    if(i == n)
    {
        out[j] = '\0';
        cout << out << endl;
        return;
    }

    // Recursive Case
    if(j == 0 or out[j-1] != 'H')
    {
        out[j] = 'H';
        rescointoss(out,i+1,j+1,n);
    }
    out[j] = 'T';
    rescointoss(out,i+1,j+1,n);
}
int main()
{
    int n;
    cin >> n;
    char out[n];
    int i = 0;
    int j = 0;
    rescointoss(out,i,j,n);
}