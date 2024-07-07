// #include <iostream>
// // #include <cstring>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 0, 3, 2, 3, 1, 2, 0, 2};
//     int n = sizeof(arr) / sizeof(int);

//     int k = 3;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cin >> arr[i];
//     // }

//     int count[4] = {0};
//     // memset(count, 1, sizeof(count));

//     // Create an frequency array of size (k+1)
//     for (int i = 0; i < n; i++)
//     {
//         count[arr[i]]++;
//     }
//     for (int i = 0; i <= k; i++)
//     {
//         cout << count[i] << " ";
//     }

//     cout << endl;

//     // For starting indeces of numbers in our array i.e [0,k]
//     for (int i = 1; i <= k; i++)
//     {
//         count[i] = count[i - 1] + count[i];
//     }

//     for (int i = 0; i <= k; i++)
//     {
//         cout << count[i] << " ";
//     }
//     cout << endl;

//     // Shift the indices by one index in order to have starting indices corrosponding to given number in our range
//     for (int i = k; i >= 0; i--)
//     {
//         count[i] = count[i - 1];
//     }
//     count[0] = 0;

//     for (int i = 0; i <= k; i++)
//     {
//         cout << count[i] << " ";
//     }
//     cout << endl;

//     // Now create a new array and put the numbers at their exact position in this array after iterating in origional array
//     int brr[100];
//     for (int i = 0; i < n; i++ )
//     {
//         brr[count[arr[i]]] = arr[i];
//         count[arr[i]]++;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << brr[i] << " ";
//     }
// }

// // #include<iostream>
// // #include <cstring>
// // using namespace std;

// // int main() {

// // 	// total ops ~ 2n+2k ~ O(n+k) time
// // 	// total space ~ k+1 for cnt[] and n for brr[] i.e. O(n+k) space

// // 	int arr[] = {1, 0, 3, 2, 3, 1, 2, 0, 2};
// // 	int n = sizeof(arr) / sizeof(int);

// // 	int k = 3; // denotes the maximum element in the array

// // 	int cnt[10];
// // 	memset(cnt, 0, sizeof(cnt));

// // 	for(int i=0; i<n; i++) {
// // 		cnt[arr[i]]++;
// // 	}

// // 	for(int i=1; i<=k; i++) {
// // 		cnt[i] += cnt[i-1];
// // 	}

// // 	for(int i=k; i>=1; i--) {
// // 		cnt[i] = cnt[i-1];
// // 	}

// // 	cnt[0] = 0;

// // 	int brr[100];

// // 	for(int i=0; i<n; i++) {
// // 		// int x = arr[i];
// // 		// int pos = cnt[x];
// // 		// brr[pos] = x;
// // 		// cnt[x]++;

// // 		brr[cnt[arr[i]]++] = arr[i];

// // 	}

// // 	for(int i=0; i<n; i++) {
// // 		cout << brr[i] << " ";
// // 	}

// // 	cout << endl;

// // 	return 0;
// // }

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 0, 3, 2, 3, 1, 2, 0, 2};
    int n = sizeof(arr) / sizeof(int);

    int count[4] = {};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    for (int i = 0; i < 4; i++)
    {
        cout << count[i] << " ";
    }

    for (int i = 1; i < 4; i++)
    {
        count[i] += count[i - 1];
    }

    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << count[i] << " ";
    }

    cout << endl;
    for (int i = 3; i >= 0; i--)
    {
        count[i] = count[i - 1];
    }
    count[0] = 0;

    for (int i = 0; i < 4; i++)
    {
        cout << count[i] << " ";
    }

    cout << endl;
    int brr[n];
    for (int i = 0; i < n; i++)
    {
        brr[count[arr[i]]] = arr[i];
        count[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << brr[i] <<" ";
    }
}