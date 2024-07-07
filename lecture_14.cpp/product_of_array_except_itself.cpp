// Product of array except itself

//      #######******** Approach 01
// Here Time is O(n) but we are using an array brr , So linear space
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(int);
//     int product = 1;
//     for(int i = 0; i < n; i++)
//     {
//         product *= arr[i];
//     }
//     int brr[100];
//     for(int i = 0; i < n; i++)
//     {
//         brr[i] = product/ arr[i];
//     }
//     for(int i = 0; i < n; i++)
//     {
//         cout << brr[i] << " ";
//     }
// }

//      #########*********Approach - 02
// Time = O(n^2) and Space = Linear (array answer is used to store the output)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(int);

//     int answer[100];
//     for (int i = 0; i < n; i++)
//     {
//         int l_i = 1; // Product of element in array till (i-1) index
//         for (int j = 0; j <= i - 1; j++)
//         {
//             l_i = l_i * arr[j];
//         }

//         int r_i = 1; // Product of elements from (i+1) to (n-1)
//         for (int j = i + 1; j < n; j++)
//         {
//             r_i = r_i * arr[j];
//         }

//         answer[i] = l_i * r_i;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << answer[i] << " ";
//     }
// }

//    #######********* Approach - 03
// Time O(n) and we are creating three array i.e l[] , r[] and answer to store final result
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(int);

//     int l[100];
//     l[0] = 1;
//     for (int i = 1; i < n; i++)
//     {
//         l[i] = l[i-1] * arr[i-1]; // l[i] stores product of elements in array till (i-1)index
//     }

//     int r[100];
//     r[n-1] = 1;
//     for (int i = n-2; i >= 0; i--)
//     {
//         r[i] = r[i+1] * arr[i+1]; // r[i] stores product of terms from (i+1) to (n-1)
//     }

//     int answer[100];
//     for (int i = 0; i < n; i++)
//     {
//         answer[i] = l[i]*r[i];
//         cout << answer[i] << " ";
//     }
//     cout << endl;

// }

// #########  Practice
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(int);

//     // int li = arr[0];
//     // int ri = arr[n-1];
//     int answer[5];
//     for (int i = 0; i < n; i++)
//     {
//         int li = 1;
//         for (int j = i-1; j >= 0; j--)
//         {
//             li *= arr[j];
//         }
//         int ri = 1;
//         for (int j = i + 1; j < n; j++)
//         {
//             ri *= arr[j];
//         }
//         answer[i] = li * ri;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << answer[i] <<" ";
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(int);

//     int l[n];
//     l[0] = 1;
//     for (int i = 1; i < n; i++)
//     {
//         l[i] = l[i - 1] * arr[i - 1];
//     }

//     // int r[n];
//     // r[n - 1] = 1;
//     // for (int i = n - 2; i >= 0; i--)
//     // {
//     //     r[i] = r[i + 1] * arr[i + 1];
//     // }
//     int r[n];
//     r[n - 1] = 1;
//     for (int i = n - 2; i >= 0; i--)
//     {
//         r[i] = r[i + 1] * arr[i + 1];
//     }

//     int answer[n];
//     for (int i = 0; i < n; i++)
//     {
//         answer[i] = l[i] * r[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << answer[i] << " ";
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(int);

//     int product = 1;
//     for (int i = 0; i < n; i++)
//     {
//         product *= arr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = product/arr[i];
//         cout << arr[i] <<" ";
//     }
//     cout << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(int);

//     // int l_i[n];
//     int answer[n];
//     for(int i = 0; i < n; i++)
//     {
//         int l_i = 1;
//         for(int j = 0; j <= i-1; j++)
//         {
//             l_i *= arr[j]; 
//         }

//         int r_i = 1;
//         for (int j = i+1; j < n; j++)
//         {
//             r_i *= arr[j];
//         }

//         answer[i] = l_i * r_i;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << answer[i] << " ";
//     }

// }

