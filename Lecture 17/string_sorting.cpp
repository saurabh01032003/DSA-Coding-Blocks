#include<iostream>
#include<algorithm>

using namespace std;

// Comperator based on side
bool myStringLengthComparator(string a, string b) {

    // return true when swap is not required
    // return false when swap is required
    // assume a comes before b in the current array

	// if(a.size() < b.size()) {
	// 	// we don't need a swap
	// 	return true;
	// } else {
	// 	// we need a swap
	// 	return false;
	// }

	return a.size() < b.size();
}

int main() {

	string arr[] = {"ab", "g", "jkl", "cdefi", "xyzw"};

	int n = 5;
	
	// sort(arr, arr+n); // by-default string array is sorted lexicographically

	sort(arr, arr+n, myStringLengthComparator);//To sort on basis of length (using custom comperator)

	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}