// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     char str[100] = "codingblocks";
//     int n = strlen(str);
//     int k = 3;
//     for (int i = n; i >= 0; i--)
//     {
//         str[i + k] = str[i];
//     }
//     int i = 0;
//     int j = n;
//     while (i < k)
//     {
//         swap(str[i], str[j]);
//         i++;
//         j++;
//     }
//     str[n] = '\0';
//     cout << str;
// }

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
   char str[100] = "codingblocks";
   int n = strlen(str);
   int k = 5;
   for(int i = n; i >= 0; i--)
   {
       str[i+k] = str[i];
   }
   cout << str << endl;

   int i = 0;
   int j = n;
   while (i < k)
   {
      swap(str[i],str[j]);
      i++;
      j++;
   }
   str[n] = '\0';
   cout << str << endl;
}