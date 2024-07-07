// #include <iostream>
// #include<cmath>
// using namespace std;
//  int digicount(int num){
//     int digicount = 0;
//      while(num > 0)
//      {
//         int lastdigit = num % 10;
//         digicount++;
//         num = num/10;
//      }
//      return digicount;
//      }
// int main()
// {
//      int num;
//      cin >> num;
//      int origional_n = num;
//      double sum = 0;
//      int val = digicount(num);

//      while (num > 0)
//      {
//      int digit = num % 10;
//      sum = sum + pow(digit,val); //digit*digit*digit;
//      num = num / 10;
//      }
//      if (sum == origional_n)
//      {
//          cout << "true";// cout <<origional_n << " is Armstrong Number " << endl;
//      }
//      else{
//          cout << "false";//   cout << origional_n << " is not Armstrong " << endl;
//      }
// return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int oddSum = 0;
//     int evenSum = 0;
//     while (n > 0)
//     {
//         oddSum = oddSum + (n % 10);
//         n = n / 10;
//         evenSum = evenSum + (n % 10);
//         n = n / 10;
//     }

//     cout << oddSum << endl;
//     cout << evenSum << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cin >> a;
//     int b;
//     cin >> b;
//     while (a % b != 0)
//     {
//         int remainder = a % b;
//         a = b;
//         b = remainder;
//     }
//     cout << b;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
// 	int n1;
// 	cin >> n1;
// 	int n2;
// 	cin >> n2;
// 	for (int i = n1; i >= 1; i--)
// 	{
// 		if(n2%i == 0 and n1 % i == )
// 		{
// 			cout << i;
//             break;
// 		}
// 	}
// }

// #include <iostream>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin >> n;
// 	for (int i = 1; i <= n; i++)
// 	{
// 		// for spaces
// 		for (int j = 1; j <= n - i; j++)
// 		{
// 			cout << " ";
// 		}
// 		int num = 1;
// 		for (int j = 1; j <= i; j++)
// 		{

// 			cout << num << " ";
// 			num = num * (i - j) / j;
// 		}
// 		cout << endl;
// 	}
// }

// #include <iostream>
// using namespace std;
// void my_swap(int &a, int &b)
// {
// 	int temp = a;
// 	a = b;
// 	b = temp;
// 	}
// int main()
// {
// 	int a = 4;
// 	int b = 5;
// 	my_swap(a, b);
// 	cout <<a <<" " << b;

// }

// #include <iostream>
// using namespace std;
// bool isPrime(int n)
// {
// 	for (int i = 2; i <= n - 1; i++)
// 	{
// 		if (n % i == 0)
// 		{
// 			return false;
// 		}
// 	}
// 	return true;
// }
// int main()
// {
// 	int n;
// 	cin >> n;
// 	isPrime(n);
// 	if (isPrime(n))
// 	{
// 		cout << "Prime Number";
// 	}
// 	else
// 	{
// 		cout << "Not Prime";
// 	}
// }

// python tutor
// #include <iostream>
// using namespace std;
// void primes(int n)
// {
// 	for (int i = 2 ; i <= n;i++)
// 	{
// 		for (int j = 2; j < i; j++)
// 		{
// 			if (i % j != 0)
// 			{
// 				cout << i << endl;
// 			}
// 		}
// 	}
// }
// int main()
// {
// 	int n;
// 	cout << "Enter the value of n :";
// 	cin >> n;
// 	primes(n);
// }
/*
	   1
	 1   1
   1   2   1
 1   3   3   1
 */

// #include <iostream>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin >> n;
// 	for (int i = 1; i <= n; i++)
// 	{
// 		for (int j = 1; j <= 2 * (n - i + 1) - 1; j++)
// 		{
// 			cout << " ";
// 		}
// 		int num = 1;
// 		for (int j = 1; j <= i; j++)
// 		{

// 			cout<< num << "   ";
// 			num = num * (i - j) / j;
// 		}
// 		cout << endl;
// 	}
// }


#include<iostream>
using namespace std;
int main() {
	int arr[100];
	int n;
	cin >> n;
	for (int i = 0; i < n;i++)
	{
		cin >> arr[i];
	}
	for (int i = n-1;i >= 0;i--)
	{
		cout << arr[i] << endl;
	}
	return 0;
}