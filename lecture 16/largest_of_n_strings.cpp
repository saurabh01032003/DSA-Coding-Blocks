#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    
    cin.ignore();
    char inp[101];
    cin.getline(inp, 101);

    char lsf[101];
    strcpy(lsf,inp);

    for (int i = 1; i < n; i++)
    {
        cin.getline(inp, 101);
        if (strcmp(inp, lsf) > 0)
        {
            strcpy(lsf, inp);
        }
    }
    cout <<"largest string is " << lsf << endl;
}