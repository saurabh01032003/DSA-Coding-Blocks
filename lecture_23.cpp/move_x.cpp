
// #include<iostream>

// using namespace std;

// string f(string str) {

// 	// base case
// 	if(str == "") { // str.empty() or str.size() == 0
// 		return "";
// 	}

// 	// recursive case

// 	// 1. extract the substring of the given string starting at the 1st index
// 	string subString = str.substr(1);
// 	// 2. ask your friend to move all 'x' characters to the end in subString
// 	string stringFromMyFriend = f(subString);

// 	string ch = str.substr(0, 1);
// 	if(ch == "x") {
// 		return stringFromMyFriend + ch;
// 	} else {
// 		return ch + stringFromMyFriend;
// 	}

// }

// int main() {

// 	string str = "xaxbxc";
//     string subString = str.substr(1);
//     // cout << subString << endl;
//     // string ch = string(1, str[0]);
//     // cout << ch << endl;

//     cout << f(str) << endl;
// 	// cout << f(str) << endl;

// 	return 0;
// }

#include <iostream>
#include <string>
using namespace std;
string f(string str)
{
    // Base Case
    if(str == "")
    {
        return str;
    }

    // Recursive Case
    string substring = str.substr(1);
    string A = f(substring);
    string ch = str.substr(0, 1);
    if (ch == "x")
    {
        return A + ch;
    }
    else
    {
        return ch + A;
    }
}
int main()
{
    string str = "axxbxxcczx";
    // int n = str.size();
    cout << f(str);
    return 0;
}