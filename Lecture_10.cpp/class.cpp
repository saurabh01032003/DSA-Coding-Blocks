// // #include <iostream>
// // #include <climits>
// // using namespace std;
// // int main()
// // {
// //     int arr[] = {10, 20, 30, 40, 50};
// //     int n = sizeof(arr) / sizeof(int);
// //     int lsf = INT_MIN;
// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int j = i; j < n; j++)
// //         {
// //             int sum = 0;
// //             for (int k = i; k <= j; k++)
// //             {
// //                 sum = sum + arr[k];
// //             }
// //             if (sum > lsf)
// //             {
// //                 lsf = sum;
// //             }
// //         }
// //     }
// //     cout << lsf << endl;
// // }

// #include<iostream>
// using namespace std;
// int main() {
// 	int arr[1000];
// 	int n;
// 	cin >> n;
//     int target;
//     cin >> target;
// 	for(int i = 0; i <= n-3 ; i++)
// 	{
// 		for (int j = i+1; j <= n-2; j++)
// 		{
// 			for (int k = j+1; k <= n-1; k++)
// 			{
// 				if(arr[i]+arr[j] +arr[k] == target)
// 				{
//                     int num;
//                     if(num > min(arr[i], min(arr[j],arr[k])) and num < max(arr[i],max(arr[j],arr[k])))
// 					cout << min(arr[i], min(arr[j],arr[k])) << num << " , "<<  " and " << max(arr[i],max(arr[j],arr[k]));
// 				}
// 			}
// 		}
// 	}

// 	return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
// 	int arr[1000];
// 	int n;
// 	cin >> n;
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> arr[i];
// 	}
// 	for (int i = 0; i < n - 1; i++)
// 	{
// 		for (int j = i + 1; j < n; j++)
// 		{
// 			cout <<"("<< arr[i] << "," << arr[j]<<")" <<" ";
// 		}
// 		cout << endl;
// 	}
// }

// #include <iostream>
// using namespace std;
// int main()
// {
// 	int arr[1000];
// 	int n;
// 	cin >> n;
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> arr[i];
// 	}
// 	int target;
// 	cin >> target;
// 	int count = 0;
// 	for (int i = 0; i < n - 1; i++)
// 	{
// 		for (int j = i+1; j < n; j++)
// 		{
// 			int sum = arr[i]+arr[j];
// 			if (sum == target)
// 			{
// 				count++;
// 			}
// 		}
// 	}
// 	cout << count ;
// }

// #include <iostream>
// using namespace std;
// int main() {
// 	int n;
// 	cin >> n;
// 	int arr[1000];
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> arr[i];
// 	}
// 	int brr[1000];
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> brr[i];
// 	}
// 	int i = 0;
// 	while (i < n){
// 		for (int j = 0; j < n; j++)
// 		{
// 			if(arr[i] == brr[j])
// 			{
// 				cout << arr[i] <<" ";
// 				i++;
// 			}
// 		}
// 	}
// 	return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//  int arr[1000];
//  int n;
//  cin >> n;
//  for (int i = 0; i < n; i++)
//  {
//      cin >> arr[i];
//  }
//  for (int i = 0; i < n; i++)
//  {
//     arr[i] = arr[i]*arr[i];
//  }
//  for (int i = 1; i <= n-1; i++)
//  {
//      for (int j = 0; j < n-i; j++ )
//      {
//          if (arr[j] > arr[j+1])
//          {
//              swap(arr[j],arr[j+1]);
//          }
//      }
//  }
//  for (int i = 0; i < n; i++)
//  {
//  cout << arr[i] <<" ";
// }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[1000];
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int brr[1000];
//     int m;
//     cin >> m;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> brr[i];
//     }
//     int p1 = n;
//     int p2 = m;
//     int sum = 0;
//     int carry = 0;
//     for (int i = max(p1, p2); i >= 0; i--)
//     {
//         sum = sum + ((arr[p1] + brr[p2]) % 10 + carry);
//         cout << "Sum Value " << sum << endl;
//         if (min(p1, p2) >= 0)
//         {
//             carry = (arr[p1] + brr[p2]) / 10;
//             cout << "Carry Value " << carry << endl;
//         }
//         p1--;
//         p2--;
//         sum = sum * 10;
//     }
//     cout << "Sum = " << sum/10;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[1000];
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int brr[1000];
//     int m;
//     cin >> m;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> brr[i];
//     }
//     int p1 = n;
//     int p2 = m;
//     int sum = 0;
//     int carry = 0;
//     for (int i = max(p1, p2); i >= 0; i--)
//     {
//         sum = sum + ((arr[p1] + brr[p2]) % 10 + carry);
//         // cout << "Sum Value " << sum << endl;
//         if (min(p1, p2) >= 0)
//         {
//             carry = (arr[p1] + brr[p2]) / 10;
//             // cout << "Carry Value " << carry << endl;
//         }
//         p1--;
//         p2--;
//         sum = sum * 10;
//     }
//     // cout << "Sum = " << sum/10;
// 	sum = sum /10;
// 	while (sum > 0)
// 	{
// 	int digit = sum % 10;
// 	int rev = digit + 10 *rev;
// 	cout << rev <<", ";
// 	sum = sum /10;
// 	}
// }

// #include <iostream>
// using namespace std;
// int main()
// {
// 	int arr[1000];
// 	int n;
// 	cin >> n;
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> arr[i];
// 	}
// 	int i = 0;
// 	int j = n - 1;
// 	while (i < j)
// 	{
// 		if (arr[i] == 0)
// 		{
// 			i++;
// 		}
// 		else if (arr[j] == 1)
// 		{
// 			j--;
// 		}
// 		else if (arr[i] == 1 and arr[j] == 0)
// 		{
// 			swap(arr[i], arr[j]);
// 			i++;
// 			j--;
// 		}
// 	}
// 	for (int i = 0; i < n; i++)
// 	{
// 		cout << arr[i] << " ";
// 	}
// 	return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
// 	int arr[1000];
// 	int n ;
// 	cin >> n;
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> arr[i];
// 	}
// 	int brr[1000];
// 	int m;
// 	cin >> m;
// 	for (int i = 0; i < m; i++)
// 	{
// 	    cin >> brr[i];
// 	}
// 	int crr[1000];
// 	int i = n-1;
// 	int j = m-1;
// 	int carry = 0;
// 	int sum;
// 	for (int k = max(n,m)-1; k >= 0; k--)
// 	{
// 		sum = carry;
// 		if (i >= 0)
// 		{
// 			sum = sum + arr[i];
// 		}
// 		if(j >= 0)
// 		{
// 			sum = sum + brr[j];
// 		}
// 		// int reminder = sum % 10;
// 		// int quotient = sum / 10;
// 		carry = sum /10;// quotient;
// 		crr[k] =  sum % 10;//reminder;
// 		i--;
// 		j--;
// 	}
// 	if (carry != 0)
// 	{
// 		cout << carry <<" ";
// 	}
// 	for (int i = 0; i < max(n,m); i++)
// 	{
// 		cout << crr[i] <<" ";
// 	}
// 	return 0;
// }

// #include<iostream>
// #include <algorithm>
// using namespace std;
// int main() {
// 	int arr[100000];
// 	int brr[100000];
// 	int n;
// 	cin >> n;
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> arr[i];
// 	}
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> brr[i];
// 	}
// 	sort(arr,arr + n);
// 	sort(brr,brr + n);
// 	int i = 0;
// 	int j = 0;
// 	int k = 0;
// 	cout << "[";
// 	int ans[100000];
// 	while (i < n and j < n)
// 	{
// 		if(arr[i] == brr[j])
// 		{
// 			ans[k] = arr[i];
// 			k++;
//  			i++;
// 			j++;
// 		}
// 		else if(arr[i] > brr[j])
// 		{
// 			j++;
// 		}
// 		else if(arr[i] < brr[j])
// 		{
// 			i++;
// 		}
// 	}
// 	// cout << "Value of i" <<i << endl;
// 	// for (int i = 0; i < )
// 	// int m = sizeof(ans)/sizeof(int);
// 	for (int l = 0; l < k; l++)
// 	{
// 		if (l == k-1)
// 		{
// 			cout << ans[l] <<"]";
// 		}else{
// 		cout << ans[l] <<", ";
// 		}
// 	}
// 	// cout << "]";
// 	return 0;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main() {
// 	// int t;
// 	// cin >> t;
// 	// while (t--)
// 	// {
// 		int roses;
// 		cin >>roses;
// 		int price[1000001];
// 		for (int i = 0; i < roses; i++)
// 		{
// 			cin >> price[i];
// 		}
// 		sort(price , price + roses);
// 		int m;
// 		cin >> m;
// 		int rose1;
// 		int rose2;
// 		for (int i = 0; i < roses; i++)
// 		{
// 			for(int j = i; j < roses; j++)
// 			{
// 				if ((price[i] + price[j]) == m)
// 				{
// 					rose1 = price[i];
// 					rose2 = price[j];
// 				}
// 			}
// 		}
// 		cout << "Rose 1" << rose1 << endl;
// 		cout << "Rose 2" << rose2 << endl;
// 	// }
// 	return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
// 	// int t;
// 	// cin >> t;
// 	// while (t--)
// 	// {
// 	int roses;
// 	cin >> roses;
// 	int price[1000001];
// 	for (int i = 0; i < roses; i++)
// 	{
// 		cin >> price[i];
// 	}
// 	sort(price, price + roses);
// 	int m;
// 	cin >> m;
// 	int rose1;
// 	int rose2;
// 	for (int i = 0; i < roses; i++)
// 	{
// 		for (int j = i; j < roses; j++)
// 		{
// 			if ((price[i] + price[j]) == m)
// 			{
// 				// rose1 = price[i];
// 				// rose2 = price[j];
// 				cout << price[i] <<" " << price[j]<< endl;
// 			}
// 		}
// 	}
// 	cout << "Rose 1" << rose1 << endl;
// 	cout << "Rose 2" << rose2 << endl;
// 	// }
// 	return 0;
// }

#include<iostream>
using namespace std;
int main () {
	// int n;
	// cin >> n;
	int arr[] = {1,1,2};
	int n = sizeof(arr)/sizeof(int);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
	    for (int j = i+1; j < n; j++)
		{
			if (arr[j] == arr[i])
			{
				i++;
			}else
			{
				cout << arr[i] <<" ";
			}
		}
	}
	return 0;
}