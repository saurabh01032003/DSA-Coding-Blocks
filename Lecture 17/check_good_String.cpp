#include <iostream>
using namespace std;
int main()
{
    string s = "uoiea";
    int i = 0;
    while(i < s.size())
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
           i++;
        }else{
            // String is not a good string as ith character is not a vowel
            cout << "False" << endl;
            return 0;
        }
    }
    cout << "True" << endl;
}