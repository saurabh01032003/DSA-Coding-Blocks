// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the nth number till which you want to print sum : " << endl;
//     cin >> n;
//     int sum = 0;
//     int i = 0;
//     while (i <= n)
//     {
//         sum = sum + i;
//         i++;
//     }
//     cout << "Sum of nth number is: " << sum;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, num;
//     cin>> n;
//     int i = 1;
//     int lsf = 0;
//     while (i <= n)
//     {
//         cin >> num;
//         if(lsf < num)
//         {
//             lsf = num;
//         }
//         i++;
//     }
//     cout << lsf;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int count = 0;
//     int data;
//     while(true)
//     {
//         cin >> data;
//         if(data < 0){
//         break;
//         }
//         count ++;
//     }
//     cout << count;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin >> num;
//     int i = 1;
//     while(i*i <= num)
//     {
//         i++;
//     }
//     i = i -1;
//     cout << i;
//     while()

// return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[100];
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int target;
//     cin >> target;
//     int i;
//     for(i = 0; i < n; i++)
//     {
//         if (target == arr[i])
//         {
//             cout << i<< endl;
//             break;
//         }
//     }
//     if (i == n)
//     {
//         cout << "Element not found";
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
// int arr[] = {10,20,30,40,50,60,70};

// int n = sizeof(arr)/sizeof(int);
// int temp = arr[n-1];
// int i = n-2;
// while(i >= 0)
// {
//     arr[i+1] = arr[i];
//     i--;

// }
// arr[0] = temp;
// for(int i = 0; i < n; i++)
// {
//     cout << arr[i] <<" ";
// }

// return 0;
// }

// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int arr[] = {25,5,0,15,20};
//     int n = sizeof(arr) / sizeof(int);
//     int fl = INT_MIN;
//     int sl = INT_MIN;
//     int tl = INT_MIN;
//     int i = 0;
//     if(arr[i] > fl)

// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin >> num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

// return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for(int j= 1; j <= i; j ++){
//             cout << j;
//         }
//         cout << endl;
//     }

// return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int num= 1;
//     for(int i = 1; i <= n; i++)

//     {
//         for (int j = 1; j<= i; j++)
//         {
//             cout << num;
//             num++;
//         }
//         cout << endl;
//     }

// return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
// int num;
//     for (int i = 1; i <= n; i++)
//     {
//         // if (i % 2 == 0)
//         // {
//         //     num = 0;
//         // }else
//         // {
//         //     num =1;
//         // }
//         int num = 0 ? i%2== 0 : 1;
//         for (int j = 1; j <= i; j++)
//         {

//             cout << num;
//             num = 1- num;
//         }

//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j<= n-i; j++)
//         {
//             cout <<"  ";
//         }
//         for (int j = 1; j<= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << "  ";
//         }
//         int num = i;
//         for (int j = 1; j <= i; j++)
//         {
//             cout << num <<" ";
//             num++;
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main ()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i<= n; i++)
//     {
//         for (int j = 1 ; j <= n-i; j++){
//         cout << "  ";
//         }
//         int start = i;
//         for (int j = 1; j <= i; j++)
//         {
//             cout << start <<' ';
//             start ++;
//         }
//         int val= 2*i - 2;
//         for (int j = 1; j <= i-1; j++)
//         {
//             cout << val<<" ";
//             val--;
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     int count = 0;
//     while (true)
//     {
//         // cin >> ch;
//        ch = cin.get();
//         if (ch == '$')
//         {
//             break;
//         }
//         count ++;
//     }
//     cout << count;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     int lCount = 0;
//     int uCount = 0;
//     int dCount = 0;
//     int wCount = 0;
//     int sCount = 0;
//     while (true)
//     {
//         ch = cin.get();
//         if(ch == '$')
//         {
//             break;
//         }
//         else if (ch >= 'A' and ch <= 'Z')
//         {
//             uCount++;
//         }
//         else if (ch >= 'a' and ch <= 'z')
//         {
//             lCount++;
//         }
//         else if (ch >= '0' and ch <= '9')
//         {
//             dCount++;
//         }
//         else if (ch == ' ' || ch == '\t' || ch == '\n')
//         {
//             wCount++;
//         }
//         else
//         {
//             sCount++;
//         }
//     }
//     cout << "Lowercase : " << lCount  << endl;
//     cout << "Uppercase : " << uCount  << endl;
//     cout << "digits : " << dCount  << endl;
//     cout << "White spaces : " << wCount  << endl;
//     cout << "Special Symbols : " << sCount  << endl;

// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     char direction;

//     int x = 0;
//     int y = 0;
//     while (true)
//     {
//         direction = cin.get();
//         if (direction == '\n')
//         {
//             break;
//         }
//         else if (direction == 'E')
//         {
//             x++;
//         }
//         else if (direction == 'W')
//         {
//             x--;
//         }
//         else if (direction == 'N')
//         {
//             y++;
//         }
//         else
//         {
//             y--;
//         }
//     }
//     cout << x << " " << y << endl;

//     if (x >= 0 and y >= 0)
//     {
//         //   Print E , x times
//         for (int i = 1; i <= x; i++)
//         {
//             cout << "E";
//         }
//         for (int i = 1; i <= y; i++)
//         {
//             cout << "N";
//         }
//     }

// else if (x <= 0 and y > 0)
//     {
//         //   Print E , x times
//         for (int i = 1; i <= -x; i++)
//         {
//             cout << "W";
//         }
//         for (int i = 1; i <= y; i++)
//         {
//             cout << "N";
//         }
//     }

//    else if (x < 0 and y < 0)
//     {
//         //   Print E , x times
//         for (int i = 1; i <= -x; i++)
//         {
//             cout << "W";
//         }
//         for (int i = 1; i <= -y; i++)
//         {
//             cout << "S";
//         }
//     }

//    else if (x >= 0 and y < 0)
//     {
//         //   Print E , x times
//         for (int i = 1; i <= x; i++)
//         {
//             cout << "E";
//         }
//         for (int i = 1; i <= -y; i++)
//         {
//             cout << "S";
//         }
//     }
//     return 0;
// }

// #include<iostream>

// #define PI 3.14
// #define SEMICOLON ;
// #define PRINT cout
// // #define F for(int i=0; i<5; i++) {cout << i << " ";}
// #define F(n)            for(int i=0; i<n; i++)      {cout << i << " ";}

// using namespace std;

// int main() {

// 	// PRINT << PI << endl SEMICOLON

// 	// F

// 	int n;
// 	cin >> n;

// 	F(n)

// 	return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         char ch = 'A';
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         char cha = n - i + 'A';
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << cha << " ";
//             cha--;
//         }
//         cout << endl;
//     }

//     return 0;
// }/

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int m = n-n/2;
//     for (int i = 1; i <= m; i++)
//     {
//         for (int j =  1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     for (int i = 1; i <= m-1; i++)
//     {
//         for (int j = 1; j <= m-i; j++)
//         {
//             cout <<"* ";
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>> n;
//     int m = n - n/2;
//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <= m-i; j++)//for spaces
//         {
//             cout << "  ";
//         }
//         for (int k = 1; k <= 2*i -1; k++)
//         {
//             cout << "* ";
//         }
//         cout << endl;

//     }

//     for (int i = 1; i <= m-1; i++)
//     {
//         for(int j = 1; j <= i; j++)
//         {
//             cout <<"  ";
//         }
//         for (int j = 1; j <= 2*(m-i)-1;j++)
//         {
//             cout << "* ";
//         }

//         cout << endl;
//     }

// return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int m = n / 2;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << "* ";
//     }
//     cout << endl;
//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <=m - i + 1; j++ )
//         {
//             cout <<"* ";
//         }
//         for (int j = 1; j <= 2*i-1; j++)
//         {
//             cout << "  ";
//         }
//         for (int j = 1; j <=m - i + 1; j++ )
//         {
//             cout <<"* ";
//         }
//         cout << endl;

//     }
//     for (int i = 1;i <= m-1; i++)
//     {
//         for (int j = 1; j <= i+1; j++)

//         {
//             cout << "* ";
//         }
//         for (int j =1; j <= 2*(m-i)-1 ;j++)
//         {
//             cout << "  ";
//         }
//         for (int j = 1; j <= i+1; j++ )
//         {
//             cout <<"* ";
//         }
//         cout << endl;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         cout << "* ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int m = n - n / 2;
//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     for (int i = 1; i <= m - 1; i++)
//     {
//         for (int j = 1; j <= m - i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int m = n - n / 2;
//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <= m - i; j++)
//         {
//             cout << "  ";
//         }
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     for (int i = 1; i <= m - 1; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "  ";
//         }
//         for (int j = 1; j <= 2 * (m - i) - 1; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,k;
//     cin >> n;
//     cout << "Enter the bit you want to check";
//     cin >> k;
//     if((n>>k) & 1 == 1)
//     {
//         cout <<"kth bit is set ";
//     }
//     else{
//         cout << "Kth bit is not set";
//     }

// return 0;
// }

// #include <iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int num;
//     cin>> num;
//     int count = 0;
//     for (int k = 0; k<= ceil(log2(num+1)); k++)
//     {
//         if((num>>k)&1)
//         {
//             count ++;
//         }
//     }
//     cout << count;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 25;
//     cout <<~a;

// return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int m = n - n / 2;
//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <= 2 * (m - i); j++)
//         {
//             cout << "  ";
//         }
//         int num = i;
//         for (int j = 1; j <= i; j++)
//         {
//             cout << num <<" ";
//             num--;
//         }
//         for (int j = 1; j <= 2 * i - 3; j++)
//         {
//             cout << "  ";
//         }
//         if (i > 1)
//         {
//             for (int j = 1; j <= i; j++)
//             {
//                 cout << j << " ";
//             }
//         }
//         cout << endl;
//     }
//     for (int i = 1; i <= m - 1; i++)
//     {
//         for (int j = 1; j <= 2 * i; j++)
//         {
//             cout << "  ";
//         }
//         int val = m - i;
//         for (int j = 1; j <= m - i; j++)
//         {
//             cout << val <<" ";
//             val--;
//         }
//         for (int j = 1; j <= 2 * (m - i - 1) - 1; j++)
//         {
//             cout << "  ";
//         }
//         if (i < m - 1)
//         {
//             for (int j = 1; j <= m - i; j++)
//             {
//                 cout << j << " ";
//             }
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= 2 * n - 1; i++)
//     {
//         cout << "*";
//     }
//     cout << endl;
//     for (int i = 1; i <= n - 1; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = 1; i <= n - 2; i++)
//     {
//         for (int j = 1; j <= i + 1; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 1; j <= n - 2 * (i - 1); j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= i + 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = 1; i <= 2 * n - 1; i++)
//     {
//         cout << "*";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n + 1; i++)
//     {
//         // For i numbers
//         int num = n;
//         for (int j = 1; j <= i; j++)
//         {
//             cout << num << " ";
//             num--;
//         }
//         for (int j = 1; j <= 2 * (n - i + 1) - 1; j++)
//         {
//             cout << "  ";
//         }

//         if (i == n + 1)
//         {
//             for (int k = 1; k <= n ; k++)
//             {
//                 cout << k << " ";
//             }
//         }
//         else
//         {
//             int temp = n - i + 1;
//             for (int j = 1; j <= i; j++)
//             {
//                 cout << temp << " ";
//                 temp++;
//             }
//         }

//         cout << endl;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         int temp = n;
//         for (int j = 1; j<= n-i+1; j++)
//         {
//             cout << temp <<" ";
//             temp--;
//         }
//         for (int j = 1;j <= 2*i-1;j++)
//         {
//             cout << "  ";
//         }
//         int counter = i;
//         for (int j= 1;j <= n-i+1; j++)
//         {
//             cout << counter <<" ";
//             counter++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n + 1; i++)
//     {
//         for (int j = 1; j <= i - 1; j++)
//         {
//             cout << "  ";
//         }
//         int temp = n - i + 1;
//         for (int j = 1; j <= n - i + 2; j++)
//         {
//             cout << temp << " ";
//             temp--;
//         }
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j<=n-i;j++)
//         {
//             cout <<"  ";
//         }
//         int num = i;
//         for (int j = 1 ; j <= i+1;j++)
//         {
//             cout << num <<" ";
//             num--;
//         }
//         int temp = i-1;
//         for (int j = 1;j <= i;j++)
//         {
//             cout << temp<<" ";
//             temp++;
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1;i <= n;i++)
//     {
//         for (int j = 1;j <= n-i; j++)
//         {
//             cout <<" ";
//         }
//         for (int j = 1;j <= 1;j++)
//         {
//             cout <<"*";
//         }
//         if(i == 1 or i == n)
//         {
//             for (int k = 1; k<= n-2;k++)
//             {
//                 cout << "*";
//             }
//         }
//             else{
//                 for (int j = 1;j <= n-2;j++)
//                 {
//                     cout <<" ";
//                 }
//             }
//             for(int j = 1;j<= 1;j++)
//             {
//                 cout <<"*";
//             }
    
//         cout << endl;
//     }

// return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int k;
//     cout << "Enter the bit you wanted to check" <<endl;
//     cin >> k;
//         if((n>>k)&1==1)
//         {
//             cout << "Set bit";
//         }
//         else{
//             cout <<"Not set bit";

//         }
    

// return 0;
// }

// #include <iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int n; 
//     cin >> n;
//     int count = 0;
//     for (int k = 0; k <= ceil(log2(n+1)); k++)
//     {
//         if((n>>k)&1 == 1)
//         {
//             count++;
//         }
//     }
//     cout << count;
// }

// #include <iostream>
// using namespace std;

// int main() {

//   int n;
//   cin>> n;
//   if(n<=20){
//   for (int i=0; i < n; i++)
//   {
//     for (int j=0; j < n - i - 1; j++)
//       cout << " ";
//     for (int j=0; j < n; j++)
//     {
//       if (i == 0 || i == n-1 || j == 0 || j == n-1)
//         cout << "*" ;
//       else 
//         cout << " " ;
//     }
//     cout << endl ;
//   }
//   }
//   return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int num;
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        ans = ans ^ num;
    }
    cout << ans;

return 0;
}