// // #include<iostream>
// // #include<algorithm>
// // using namespace std;
// // int main() {
// // 		int roses;
// // 		cin >>roses;
// // 		int price[1000001];
// // 		for (int i = 0; i < roses; i++)
// // 		{
// // 			cin >> price[i];
// // 		}
// // 		sort(price , price + roses);
// // 		int m;
// // 		cin >> m;
// // 		sort(price,price + roses);
// // 		int rose1;
// // 		int rose2;
// // 		int i = 0;
// // 		int j = roses - 1;
// // 		while(i < j){
// // 		if(price[i] + price[j] == m)
// // 		{
// // 			rose1 = price[i];
// // 			rose2 = price[j];
// // 			i++;
// // 			j--;
// // 		}
// // 		else if(price[i] + price[j] > 10)
// // 		{
// // 			j--;
// // 		}
// // 		else if(price[i] + price[j] < 10)
// // 		{
// // 			i++;
// // 		}
// // 	}
// // 	cout << rose1 <<" " << rose2;
// // 	return 0;
// // }

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
// int ans[100];
// 	for (int i = 0; i < n; i++)
// 	{
// 		int l_i = 1;
// 		int r_i = 1;
// 		for (int j = 0; j < i; j++)
// 		{
// 			l_i = l_i * arr[j];
// 		}
// 		for (int k = i + 1; k < n; k++)
// 		{
// 			r_i = r_i * arr[k];
// 		}
// 		ans[i] = r_i * l_i;
// 	}
// 	for (int i = 0; i < n; i++)
// 	{
// 		cout << ans[i] << " ";
// 	}
// 	// cout << sum*prod;
// }

#include <iostream>
#include <climits>
using namespace std;
int main()
{
	int arr[1000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int w[1000];
	for (int i = 0; i < n; i++)
	{
		int l_max = INT_MIN;
		for (int j = 0; j < i; j++)
		{
			l_max = max(l_max, arr[j]);
		}
		int r_max = INT_MIN;
		for (int k = i + 1; k >= n - 1; k++)
		{
			r_max = max(r_max, arr[k]);
		}
		w[i] = min(l_max, r_max) - arr[i];
	}
	int sum = 0;
	for(int i = 0 ; i < n; i++)
	{
		sum = sum + w[i];
	}
	cout <<sum;
}