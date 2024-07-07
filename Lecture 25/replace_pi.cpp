// // #include <iostream>
// // #include <cstring>
// // using namespace std;
// // void replacepi(char *arr, int n, int i)
// // {
// //     // Base Case
// //     if (arr[i] == '\0')
// //     {
// //         return;
// //     }

// //     // Recursive Case
// //     if (arr[i] == 'p' and arr[i + 1] == 'i')
// //     {
// //         for (int j = n; j >= i + 2; j--)
// //         {
// //             arr[j + 2] = arr[j];
// //         }
// //         arr[i] = '3';
// //         arr[i + 1] = '.';
// //         arr[i + 2] = '1';
// //         arr[i + 3] = '4';
// //         replacepi(arr, n+2, i + 2);
// //     }
// //     else
// //     {
// //         replacepi(arr, n, i + 1);
// //     }
// // }
// // int main()
// // {
// //     char arr[] = "pippi";
// //     int n = strlen(arr);
// //     int i = 0;
// //     replacepi(arr, n, i);
// //     cout << arr << endl;
// // }

// // #include<iostream>
// // using namespace std;
// // int replace(int n)
// // {
// // 	// Base Case
// //     if(n == 0)
// // 	{
// // 		return 0;
// // 	}
// // 	// Recursive Case
// // 	if(n%10 == 0)
// // 	{
// // 		int A = replace(n/10);
// // 		return A * 10 + 5;
// // 	}else{
// // 	    return replace(n/10)*10 + (n%10);
// // 	}
// // }
// // int main () {
// // 	int n;
// // 	cin >> n;
// // 	cout << replace(n);
// // 	// cout << n;
// // 	// cout << endl;
// // 	return 0;
// // }

// #include <iostream>
// #include <cstring>
// using namespace std;
// void replace(char *str, int n, int i)
// {
//     // Base Case
//     if (str[i] == '\0')
//     {
//         return;
//     }

//     // Recursive Case
//     if (str[i] == 'p' and str[i + 1] == 'i')
//     {
//         for (int j = n; j >= i + 2; j--)
//         {
//             str[j + 2] = str[j];
//         }
//         str[i] = '3';
//         str[i + 1] = '.';
//         str[i + 2] = '1';
//         str[i + 3] = '4';
//         replace(str, n, i + 2);
//     }
//     else
//     {
//         replace(str, n, i + 1);
//     }
// }
// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         char str[1001];
//         cin >> str;
//         int n = strlen(str);
//         int i = 0;
//         replace(str, n, i);
//         cout << str << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <cstring>
using namespace std;
void replace(char *arr,int i)
{
    // Base Case
    if(arr[i] == '\0')
    {
        return;
    }
     
    // Recursive case 
    if(arr[i] == 'p' and arr[i+1] == 'i')
    {
        int j = i+2;
        while(arr[j] != '\0')
        {
            j++;
        }
        for(int k = j; k >= i+2; k--)
        {
            arr[k+2] = arr[k];
        }
        arr[i] = '3';
        arr[i+1] = '.';
        arr[i+2] = '1';
        arr[i+3] = '4';
        replace(arr,i+4);
    }else{
        replace (arr,i+1);
    }
}
int main()
{
    char arr[] = "pippi";
    int n = strlen(arr);
    int i = 0;
    replace(arr,i);
    cout << arr << endl;
}