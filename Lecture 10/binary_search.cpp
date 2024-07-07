// #include<iostream>

// using namespace std;

// int main() {

// 	// time : O(logn) -> worst-case : target is not present in the array so eventually search space becomes empty i.e. s exceed e

// 	int arr[] = {10, 20, 30, 40, 50, 60, 70};
// 	int n = sizeof(arr) / sizeof(int);

//  // int t = 30;
// 	// int t = 5;
//     int t = 100;

// 	int s = 0; // lower-bound of the search space
// 	int e = n-1; // upper-bound of the search space
// 	int m;

// 	while(s <= e) {

// 		m = s+((e-s)>>1); // s+(e-s)/2 // (s+e)/2 can lead to integer overflow
// 		if(arr[m] == t) {
// 			// t found at index 'm'
// 			break;
// 		} else if(t < arr[m]) {
// 			// reduce the search space from [s, e] to [s, m-1]
// 			e = m-1;
// 		} else { // t > arr[m]
// 			// reduce the search space from [s, e] to [m+1, e]
// 			s = m+1;
// 		}

// 	}

//     cout << s << endl;
//     cout << e << endl;

// 	if(s <= e) {
// 		cout << t << " found at index " << m << endl;
// 	} else {
// 		// s > e i.e. search space has become empty
// 		cout << t << " not found!" << endl;
// 	}

// 	return 0;
// }

#include <iostream >
using namespace std;
int main()
{
    int arr[] = {11, 12, 13, 14, 15, 16, 17};
    int n = sizeof(arr) / sizeof(int);
    int target;
    cin >> target;
    int s = 0;
    int e = n - 1;
    int m;
    while (s <= e)
    {
        m = s + (e - s) / 2;
        if (arr[m] == target)
        {
            break;
        }
        else if (arr[m] > target)
        {
            // target found before (m-1) index;
            e = m - 1;
        }
        else if (arr[m] < target)
        {
            // target found between (m+1) to e
            s = m + 1;
        }
    }
    if (s <= e)
    {
        cout << "Target found at index " << m << endl;
    }
    else
    {
        cout << "Target not found" << endl;
    }
}