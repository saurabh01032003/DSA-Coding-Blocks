// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     if (n < 100 and n > 0)
// //     {
// //         int a = 1;
// //         int b = 1;
// //         int i = 1;
// //         while (i <= 2)
// //         {
// //             int k = 1;
// //             while (k <= i)
// //             {

// //                 cout << i-1 <<" ";
// //                 k++;
// //             }

// //             cout << endl;
// //             i++;
// //         }
// //         i = 3;
// //         while (i <= n)
// //         {
// //             int j = 1;

// //             while (j <= i)
// //             {
// //                 int c = a + b;
// //                 cout << c <<" ";
// //                 a = b;
// //                 b = c;
// //                 j++;
// //             }
// //             cout << endl;
// //             i++;
// //         }
// //     }
// // }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin >> num;
//     int i = 1;
//     while (i <= num)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << j << " ";
//             j++;
//         }
//         int k = 1;
//         while (k <= num - i)
//         {
//             cout << "_ ";
//             k++;
//         }

//         int l = 1;

//         while (l <= num - i - 1)
//         {
//             cout << "_ ";

//             l++;
//         }
//         int m = 1;
//         int counter = i;
//         while (m <= i)
//         {

//             if (counter == num)
//             {
//                 int x = num - 1;
//                 while (x > 0)
//                 {
//                     cout << x <<" ";
//                     x--;
//                 }
//                 break;
//             }
//             cout << counter<<" ";
//             counter--;
//             m++;
//         }
//         cout << endl;
//         i++;
//     }

//     return 0;

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin >> num;
//     int i = 1;
//     while (i <= num)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << i << " ";
//             j++;
//         }
//         int k = 1;
//         int val = i + 1;
//         while (k <= num - i)
//         {
//             cout << val << " ";
//             k++;
//             val++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin >> num;
//     int i = 1;
//     while (i <= num)
//     {
//         int j = 1;
//         while (j <= 1)
//         {
//             cout << i << " ";
//             j++;
//         }
//         int k = 1;
//         while (k <= i - 2)
//         {

//             cout <<"0 ";
//             k++;
//         }
//         int m = 2;
//         while (m <= i)
//         {
//             if(m == i)
//             {
//             cout << i <<" ";
//             }
//             m++;

//         }
//         cout << endl;
//         i++;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= 1)
//         {
//             cout << "1";
//             j++;
//         }
//         while (j <= i)
//         {
//             if (i % 2 == 0)
//             {
//                 j = 2;
//                 while (j < i)
//                 {
//                     cout << "0";
//                     j++;
//                 }
//             }
//             cout << 1;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main() {

// 	int lCount = 0; // to track the no. of lowercase letters
// 	int uCount = 0; // to track the no. of uppercase letters
// 	int dCount = 0; // to track the no. of digits
// 	int sCount = 0; // to track the no. of speical symbols
// 	int wCount = 0; // to track the no. of whitespaces

// 	char ch;

// 	while(true) {

// 		ch = cin.get();

// 		if(ch == '$') {
// 			break;
// 		}

// 		if(ch >= 'A' and ch <= 'Z') {
// 			uCount++;
// 		} else if(ch >= 'a' and ch <= 'z') {
// 			lCount++;
// 		} else if(ch >= '0' and ch <= '9') {
// 			dCount++;
// 		} else if(ch == ' ' || ch == '\n' || ch == '\t') {
// 			wCount++;
// 		} else {
// 			sCount++;
// 		}

// 	}

// 	cout << "uppercase-count = " << uCount << endl
// 	     << "lowercase-count = " << lCount << endl
// 	     << "digit-count = " << dCount << endl
// 	     << "whitespaces-count = " << wCount << endl
// 	     << "special characters-count = " << sCount << endl;

// 	return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

// 	int n;
// 	cin >> n;
// 	int i = 1;
// 	while (i <= n)
// 	{
// 		int j = 1;
// 		char ch = 'A';
// 		while (j <= n - i + 1)
// 		{
// 			cout << ch << " ";
// 			ch++;
// 			j++;
// 		}
// 		ch = ch - 1;
// 		int k = 1;
// 		while (k <= n - i + 1)
// 		{
// 			cout << ch << " ";
// 			ch--;
// 		}
// 		cout << endl;
// 		i++;
// 	}

// 	return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin >> n;
// 	int m = n - n/2;
// 	for (int i = 1; i <= m; i++)
// 	{
// 		for (int j = 1; j <= m-i; j++)
// 		{
// 			cout <<"_ " << " ";
// 		}
// 		for(int j = 1; j)
// 		cout << endl;
// 	}

// return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
// 	int arr[100];
// // flag variable
// 	int n;
// 	cin >> n;
// 	int target;
// 	cin >> target;
// 	for (int i = 0; i <= n - 1; i++)
// 	{
// 		cin >> arr[i];
// 	}
// 	int i;
// 	for ( i = 0; i < n; i++)
// 	{
// 		if (arr[i] == target)
// 		{
// 			cout << i;
// 			break;
// 		}
		
// 	}
// 	if (i == n)
// 	{
// 		cout <<-1;
// 	}

// 	return 0;
// }

#include <iostream>
using namespace std;
int main()
{
	int arr[100];
// flag variable
	int n;
	cin >> n;
	int target;
	cin >> target;
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> arr[i];
	}
	int i;
	for ( i = n-1; i >= 0; i--)
	{
		if (arr[i] == target)
		{
			cout << i;
			break;
		}
		
	}
	if (i <= 0)
	{
		cout <<-1;
	}

	return 0;
}

