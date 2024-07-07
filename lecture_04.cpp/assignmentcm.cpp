// #include <iostream>
// using namespace std;
// float func(float x)
// {
//     return (1 / (1 + x));
// }
// float calculate(float lower_limit, float upper_limit,
//                 int interval_limit)
// {
//     float value;
//     float interval_size = (upper_limit - lower_limit) / interval_limit;
//     float sum = func(lower_limit) + func(upper_limit);
//     for (int i = 1; i < interval_limit; i++)
//     {
//         if (i % 3 == 0)
//             sum = sum + 2 * func(lower_limit + i * interval_size);
//         else
//             sum = sum + 3 * func(lower_limit + i * interval_size);
//     }
//     return (3 * interval_size / 8) * sum;
// }
// int main()
// {
//     int interval_limit = 10;
//     float lower_limit = 0;
//     float upper_limit = 1;
//     cout << "Name : Saurabh" << endl;
//     cout << "Roll : 151" << endl;
//     cout<< "Value of integral using Simpsons 3/8 rule is:";
//     float integral_res = calculate(lower_limit, upper_limit,
//                                    interval_limit);

//     cout << integral_res;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     int b = 11;
//     cout <<(a > b);
//         cout <<(a < b);

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cout <<"Enter the value of a ,b and c respectevely"<< endl;
//     cin >> a >> b >> c;
//     if (a > b and a > c)
//     {
//         cout << a << " is Largest" << endl;
//     }
//     else
//     {
//         if (b > c)
//         {
//             cout << b << " is Largest" << endl;
//         }
//         else
//         {
//             cout << c << " is Largest" << endl;
//         }
//     }

//         return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin >> num;
//     int digit_sum = 0;
//     while (num > 0)
//     {
//         int digit = num % 10;
//         digit_sum = digit_sum + digit;
//         num = num / 10;
//     }
//     cout << digit_sum;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main (){
//     int num;
//     cin >> num;
//     int rev = 0;
//     while (num > 0)
//     {
//         int digit = num % 10;
//         rev = rev *10 + digit;
//         num = num / 10;
//     }
//     cout << rev;
// }
// #include<iostream>

// using namespace std;

// int main() {

// 	int n;
// 	cout << "Enter a positive interger : ";
// 	cin >> n;

// 	int ans = 0; // to store the reverse of 'n'

// 	while(n > 0) {
// 		int digit = n%10;
// 		ans = ans*10 + digit;
// 		n = n/10;
// 	}

// 	cout << "reversed number = " << ans << endl;

// 	return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin >> num;
//     if (num == 0 or num == 1)
//     {
//         cout << num << " Fibonacci number" << endl;
//     }
//     else
//     {
//         int a = 0;
//         int b = 1;
//         int i = 2;
//         while (true)
//         {
//             int c = a + b;
//             a = b;
//             b = c;
//         }
//     }
// }

// #include <iostream>
// using namespace std;
// int multiply(int m, int n)
// {
//     // int val = m * n;
//     // return val;
//     return m*n;
// }
// int main()
// {
//     cout << "Result is " << multiply(3, 5) <<" "<< multiply(6, 7);

//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main()
// {
//      int n;
//      cin>>n;

//      int i,j;

//      for(i=0;i<n;i++)
//      {
//           if(i==0)
//           {
//                cout<<"*";
//                for(j=0;j<(n-3)/2;j++)
//                     cout<<" ";
//                for(j=0;j<=n/2;j++)
//                     cout<<"*";
//           }
//           else if(i==n/2)
//           {
//                for(j=0;j<n;j++)
//                     cout<<"*";
//           }
//           else if(i==n-1)
//           {
//                for(j=0;j<=n/2;j++)
//                     cout<<"*";
//                for(j=0;j<(n-3)/2;j++){
//                     cout<<" ";
//                }
//                cout<<"*";
//           }
//           else if(i<n/2)
//           {
//                cout<<"*";
//                for(j=0;j<(n-3)/2;j++){
//                     cout<<" ";
//                }
//                cout<<"*";
//           }
//           else if(i>n/2)
//           {
//                for(j=0;j<n/2;j++)
//                     cout<<" ";
//                cout<<"*";
//                for(j=0;j<(n-3)/2;j++)
//                     cout<<" ";
//                cout<<"*";
//           }
//           cout<<"\n";
//      }
// }
/*

*  ****
*  *
*  *
*******
   *  *
   *  *
****  *
*/

// #include <iostream>
// using namespace std;
// int main()
// {
//      int n;
//      cin >> n;
//      for (int i = 1; i <= n; i++)
//      {
//           if (i == 1)
//           {
//                cout << "*";
//                for (int j = 1; j <= (n - 3) / 2; j++)
//                {
//                     cout << " ";
//                }
//                for (int j = 1; j <= (n + 1) / 2; j++)
//                {
//                     cout << "*";
//                }
//           }
//           else if (i == (n + 1) / 2)
//           {
//                for (int j = 1; j <= n; j++)
//                {
//                     cout << "*";
//                }
//           }
//           else if (i == n)
//           {
//                for (int j = 1; j <= (n + 1) / 2; j++)
//                {
//                     cout << "*";
//                }
//                for (int j = 1; j <= (n - 3) / 2; j++)
//                {
//                     cout << " ";
//                }
//                cout << "*";
//           }
//           else if (i < (n + 1) / 2)
//           {
//                cout << "*";
//                for (int j = 1; j <= (n - 3) / 2; j++)
//                {
//                     cout << " ";
//                }
//                cout <<"*";
//           }
//           else if (i > (n+1)/2)
//           {
//                for (int j = 1; j < (n+1)/2; j++)
//                {
//                     cout << " ";
//                }
//                cout << "*";
//                for (int j = 1; j <=(n-3)/2; j++)
//                {
//                     cout <<" ";
//                }
//                cout <<"*";
//           }
//           cout << endl;
//      }

//      return 0;
// }

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
     int num;
     cin >> num;
     int origional_n = num;
     int sum = 0;
     while (num > 0)
     {
     int digit = num % 10;
     sum = sum + pow(digit,3);
     num = num / 10;
     }
     if (sum == origional_n)
     {
          cout <<origional_n << " is Armstrong Number " << endl;
     }
     else{
          cout << origional_n << " is not Armstrong " << endl;
     }
     cout << "Saurabh";
return 0;
}