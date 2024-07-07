
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter number of elements in array : ";
//     cin >> n;
//     int arr[n];

//     cout << "Enter the elements of array : ";
//     for (int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

// 	int i, key, j;
// 	for (i = 1; i < n; i++) {
// 		key = arr[i];
// 		j = i - 1;
// 		while (j >= 0 && arr[j] > key) {
// 			arr[j + 1] = arr[j];
// 			j = j - 1;
// 		}
// 		arr[j + 1] = key;
// 	}

//     cout << "After insertion sort : ";
//     for(int i = 0;i < n;i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl << endl;
//     cout << "Manish Kumar Sharma" << endl;
//     cout << "Class : CSE-C" << endl;
//     cout << "Roll : 141" << endl;
// }

// Bubble Sort 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of elements in array : ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 1; i <= n - 1; i++){
        for (int j = 0; j < n - i; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j + 1], arr[j]);
            }
        }
    }
    cout << "After Bubble Sort : ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    cout << "Manish Kumar Sharma" << endl;
    cout << "Class : CSE-C" << endl;
    cout << "Roll : 141" << endl;
}
