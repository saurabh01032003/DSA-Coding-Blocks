// To check whether given number is even or not

// #include <iostream>
// using namespace std;

// bool isEven(int n)
// {
//     if(n % 2 == 0)
//     {
//         return true;
//     }
//     return false;
// }

// void isEven(int n)
// {
//     if(n % 2 == 0)
//     {
//         cout <<"Number is Even";
//     }else{
//     cout << "Number is Odd";
//     }
// }

// bool isEven(int n)
// {
//     return (n % 2 == 0) ? true : false;
// }

// bool isEven(int n)
// {
//     return n%2==0;
// }
// int main()
// {
//     // isEven(5);
//     // isEven(12);
//     //    cout << isEven(5);
//     if (isEven(13))
//     {
//         cout << "Number is Even";
//     }
//     else
//     {
//         cout << "Number is Odd";
//     }
// }

// ##########***********************************############
//  Multiplication of two numbers

// #include <iostream>
// using namespace std;
// // int multiply(int a, int b)
// // {
// //     int c = a * b;
// //     return c;
// // }

// int multiply(int a, int b)
// {
//     return a * b;
// }
// int main()
// {
//     //   multiply(2,3);
//     int x = 2;
//     int y = 5;
//     cout << multiply(x, y);
// }

// #############**************************#################
// #include <iostream>
// using namespace std;
// void increment(int x)
// {
//     cout << "x in function before increment " << x << endl;
//     x++;
//     cout << "x in function after increament " << x << endl;
// }
// int main()
// {
//     int x = 10;
//     cout << "x in main block before increment " << x << endl;
//     increment(x);
//     cout << "x in main block after increment " << x << endl; // Remains 10
// }

// ##########*******************************##################
// Reference variable
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 10;
//     int &y = x;
//     y++;
//     cout << x << " " << y;
// }

// ##########*******************************##################
// #include <iostream>
// using namespace std;
// void swap(int &x, int &y) // x and y are pointing to same varible a and b respectively of main function
// {
//     int temp = x;
//     x = y;
//     y = temp;
// }

// int main()
// {
//     int a = 10;
//     int b = 11;
//     swap (a, b);
//     cout << a <<" " << b;
// }

// ##########*******************************##################
// Function to check if the number is prime
// #include <iostream>
// #include <cmath>
// using namespace std;
// bool isPrime(int n)
// {
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     if(isPrime(n))
//     {
//         cout << "Number is Prime";
//     }
//     else{
//         cout <<"Not prime";
//     }
// }

// ##########*******************************##################
// Function to print first n prime numbers
// #include <iostream>
// #include <cmath>
// using namespace std;
// bool isPrime(int n)
// {
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int printPrime(int n)
// {
//     for (int i = 2; i < n; i++)
//     {
//        if(isPrime(i))
//        {
//         cout << i << endl;
//        }
//     }
// }
// int main()
// {
//     printPrime(10);
// }

// ##########*******************************##################
// #include <iostream>
// using namespace std;
// int primeSeive(int n)
// {
//     int seive[100];
//     for (int i = 0; i <= n; i++)
//     {
//         seive[i] = 0;
//     }

//     for (int i = 2; i <= n; i++)
//     {
//         if(seive[i] == 0)
//         {
//             for (int j = i*i; j <= n; j= j+i)
//             {
//                 seive[j] = 1;
//             }
//         }
//     }
//     for (int i = 2; i <= n; i++)
//     {
//         if (seive[i] == 0)
//         {
//             cout << i <<" ";
//         }
//     }
// }
// int main()
// {
//     primeSeive(19);
// }

// ##########*******************************##################
#include <iostream>
using namespace std;
float areaofTriangle(int b, int h)
{
    return 0.5*(b)*(h);
}
float semiPerimeter(int a, int b, int c)
{
   return 0.5*(a+b+c);
}
float areaofTriangle (int a, int b, int c)
{
    float s = semiPerimeter(a, b, c);
     return 0.5*(s)*(s-a)*(s-b)*(s-c);
}
int main()
{
    cout << areaofTriangle(2,12)<< endl;
    cout << areaofTriangle(3,5,7);
}