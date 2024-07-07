// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int arr[5] = {12, 45, 23, 27, 36};
// // //     int n = sizeof(arr) / sizeof(int);
// // //     for (int i = 0; i <= n - 2; i++)
// // //     {
// // //         int min_index = i;
// // //         for (int j = i+1; j < n; j++)
// // //         {
// // //             if (arr[j] < arr[min_index])
// // //             {
// // //                 min_index = j;
// // //             }
// // //         }
// // //         swap(arr[i], arr[min_index]);
// // //     }
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         cout << arr[i] << " ";
// // //     }
// // // }

// // #include<iostream>
// // using namespace std;
// // int main() {
// // 	int arr[1000];
// // 	int n;
// // 	cin >> n;
// // 	for (int i = 0; i < n; i++)
// // 	{
// // 		cin >> arr[i];
// // 	}
// // 	for (int i = 0; i <= n-2; i++)
// // 	{
// // 		int min_index = i;
// // 		for (int j = i+1; j < n; j++)
// // 		{
// // 			if(arr[min_index] > arr[j])
// // 			{
// // 				min_index = j;
// // 			}
// // 		}
// // 		swap(arr[i],arr[min_index]);
// // 	}
// // 	for(int i = 0; i < n; i++)
// // 	{
// // 		cout << arr[i] << endl;
// // 	}
// // 	return 0;
// // }

// #include <iostream>
// using namespace std;
// int main()
// {
// 	int arr[] = {10, 9, 8, 7, 6, 5, 4};
// 	int n = sizeof(arr) / sizeof(int);
// 	// Iterate over the passes from 0 th pass to (n-2)th pass
// 	for (int i = 0; i <= n - 2; i++)
// 	{
// 		// In each pass you have to do comparison of 0th index to index from 1 to (n-1)
// 		int min_index = i;
// 		for (int j = i + 1; j <= n - 1; j++)
// 		{
// 			if (arr[j] < arr[min_index])
// 			{
// 				min_index = j;
// 			}
// 		}
// 		swap(arr[min_index], arr[i]);
// 	}

// 	// Now print the array
// 	for (int i = 0; i < n; i++)
// 	{
// 		cout << arr[i] << " ";
// 	}
// }

#include <iostream>
using namespace std;
int main()
{
	int arr[] = {50, 40, 10, 30, 20};
	int n = sizeof(arr) / sizeof(int);
	for (int i = 0; i <= (n - 2); i++)
	{
		int min_index = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min_index])
			{
				min_index = j;
			}
		}
		swap(arr[i], arr[min_index]);
	}
	// Now print the sorted array
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}