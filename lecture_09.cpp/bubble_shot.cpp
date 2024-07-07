// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // // 	int arr[5] = {19, 12, 14, 80, 67};
// // // 	int n = sizeof(arr) / sizeof(int);
// // // 	// int n;
// // // 	// cin >> n;
// // // 	// for (int i = 0; i < n; i++)
// // // 	// {
// // // 	// 	cin >> arr[i];
// // // 	// }
// // // 	for (int i = 1; i <= n - 1; i++) // for (n-1) passes
// // // 	{
// // // 		// In each passes we have (n-i) comparisons
// // // 		for (int j = 0; j < n - i; j++)
// // // 		{
// // // 			if (arr[j] > arr[j+1])
// // // 			{
// // // 				swap(arr[j + 1], arr[j]);
// // // 			}
// // // 		}
// // // 	}
// // // 	for (int i = 0; i < n; i++)
// // // 	{
// // // 		cout << arr[i] << " ";
// // // 	}
// // // }

// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// // 	int arr[] = {19, 12, 14, 80, 67};
// // 	int n = sizeof(arr) / sizeof(int);
// // 	int count = 0;
// // 	// iterate over the (n-1) passes
// // 	for (int i = 1; i < n; i++)
// // 	{
// // 		//    In Each pass we have to do (n-i) comparisons
// // 		for (int j = 0; j < n - i; j++)
// // 		{
// // 			count++;
// // 			if (arr[j] > arr[j + 1])
// // 			{
// // 				swap(arr[j], arr[j + 1]);
// // 			}
// // 		}
// // 	}
// // 	cout << count << endl; // This count variable is counting the total number of comparisons
// // 	for (int i = 0; i < n; i++)
// // 	{
// // 		cout << arr[i] << " ";
// // 	}
// // }

// #include <iostream>
// using namespace std;
// int main()
// {
// 	// int arr[] = {50, 40, 30, 20, 10};
// 	int arr[] = {10, 20, 30, 40, 50};
// 	int n = sizeof(arr) / sizeof(int);
// 	for (int i = 1; i <= n - 1; i++)
// 	{
// 		for (int j = 0; j < n - i; j++)
// 		{
// 			if (arr[j] > arr[j + 1])
// 			{
// 				swap(arr[j], arr[j + 1]);
// 			}
// 		}
// 	}
// 	for (int i = 0; i < n; i++)
// 	{
// 		cout << arr[i] << " ";
// 	}
// }

// If the array is already sorted
// #include <iostream>
// using namespace std;
// int main()
// {
// 	int arr[] = {10, 20, 30, 40, 50};
// 	int n = sizeof(arr) / sizeof(int);
// 	int count = 0;
// 	for (int i = 1; i <= n - 1; i++)
// 	{
// 		bool flag = true;
// 		for (int j = 0; j < n - i; j++)
// 		{
// 			count++;
// 			if (arr[j] > arr[j + 1])
// 			{
// 				swap(arr[j], arr[j + 1]);
// 				flag = false;
// 			}
// 		}
// 		if (flag == true)
// 		{
// 			break;
// 		}
// 	}
// 	cout << count << endl;
// 	for (int i = 0; i < n; i++)
// 	{
// 		cout << arr[i] << " ";
// 	}
// }