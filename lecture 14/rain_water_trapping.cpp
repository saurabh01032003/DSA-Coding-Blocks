// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     int height[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
// //     int n = sizeof(height) / sizeof(int);

// //     int water[100];
// //     for (int i = 0; i < n; i++)
// //     {
// //         int l_i = height[i];
// //         for (int j = i - 1; j >= 0; j--)
// //         {
// //             l_i = max(l_i, height[j]);
// //         }

// //         int r_i = height[i];
// //         for (int j = i + 1; j < n; j++)
// //         {
// //             r_i = max(r_i, height[j]);
// //         }

// //         water[i] = min(r_i, l_i) - height[i];
// //     }

// //     int total = 0;
// //     for (int i = 0; i < n; i++)
// //     {
// //         total += water[i];
// //     }

// //     cout << "Total Water tapped in between buildings is : " << total;
// //     cout << endl;
// // }

// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     int height[] = {0,1,0,2,1,0,1,3,2,1,2,1};
// //     int n = sizeof(height)/sizeof(int);

// //     int water[100];
// //     for (int i = 0; i < n; i++)
// //     {
// //         int l_i = height[i];
// //         for (int j = i-1; j >= 0; j--)
// //         {
// //             l_i = max(l_i,height[j]);
// //         }

// //         int r_i = height[i];
// //         for (int j = i+1; j < n; j++)
// //         {
// //             r_i = max(r_i,height[j]);
// //         }

// //         water[i] = min(r_i,l_i) - height[i];
// //     }

// //     int total_water = 0;
// //     for (int i = 0; i < n; i++)
// //     {
// //         total_water += water[i];
// //     }

// //     cout << total_water;
// //     cout << endl;
// // }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int height[] = {0,1,0,2,1,0,1,3,2,1,2,1};
//     int n = sizeof(height)/sizeof(int);

//     int water[100];
//     for (int i = 0; i < n; i++)
//     {
//         int l_i = height[i];
//         for (int j = i-1; j >= 0; j--)
//         {
//             l_i = max(l_i, height[j]);
//         }

//         int r_i = height[i];
//         for (int j = i+1; j < n; j++)
//         {
//             r_i = max(r_i,height[j]);
//         }

//         water[i] = min(l_i,r_i) - height[i];
//     }

//     // Total water between the buildings is equal to sum of water above all buidings that are trapped
//     int total_water = 0;
//     for (int i = 0; i < n; i++)
//     {
//         total_water += water[i];
//     }

//     cout <<"Total Water is " << total_water;
//     cout << endl;
// }

// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int height[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
//     int n = sizeof(height) / sizeof(int);

//     int answer[n];
//     for (int i = 0; i < n; i++)
//     {
//         int l_i = height[i];
//         for (int j = 0; j <= i - 1; j++)
//         {
//             l_i = max(height[j], l_i);
//         }

//         int r_i = height[i];
//         for (int j = i + 1; j < n; j++)
//         {
//             r_i = max(height[j], r_i);
//         }
//         answer[i] = min(r_i, l_i) - height[i];
//     }
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + answer[i];
//     }
//     cout << sum << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     // int height[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
//     int height[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
//     int n = sizeof(height) / sizeof(int);

//     int total_water = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int l_i = height[i];
//         for (int j = i-1; j >= 0 ; j--)
//         {
//             l_i = max(l_i, height[j]);
//         }

//         int r_i = height[i];
//         for (int j = i + 1; j < n; j++)
//         {
//             r_i = max(height[j], r_i);
//         }

//         int water_i = min(r_i, l_i) - height[i];
//         cout << water_i <<" ";
//         total_water += water_i;
//     }
//      cout << endl;
//     cout << total_water;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int height[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
//     int n = sizeof(height) / sizeof(int);

//     int l_i[n];
//     l_i[0] = height[0];
//     for (int i = 1; i < n; i++)
//     {

//         l_i[i] = max(l_i[i-1], height[i]);
//         cout << l_i[i] << " ";
//     }
    
//     cout << endl;
//     int r_i[n];
//     r_i[n - 1] = height[n - 1];
//     for (int i = n - 2; i >= 0; i--)
//     {
//         r_i[i] = max(height[i], r_i[i + 1]);
//         cout << r_i[i] << " ";
//     }

//     cout << endl;
//     int water[n];
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         water[i] = min(l_i[i], r_i[i]) - height[i];
//         sum += water[i];
//         cout<< water[i] << " ";
//     }
//     cout << endl;
//     cout << sum;
//     cout << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int height[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
//     int n = sizeof(height)/ sizeof(int);

//     int l_i[n];
//     l_i[0] = height[0];
//     for(int i = 1; i < n; i++)
//     {
//         l_i[i] = max(l_i[i-1], height[i]);
//     }

//     int r_i[n];
//     r_i[n-1] = height[n-1];
//     for (int i = n-2; i >= 0; i--)
//     {
//         r_i[i] = max(r_i[i+1],height[i]);
//     }

//     int total = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int water_i = min(l_i[i],r_i[i]) - height[i];
//         total += water_i;
//     }

//     cout << total << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int height[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
//     int n = sizeof(height)/sizeof(int);

//     int l = 0;
//     int r = 0; 

//     int i = 0;
//     int j = n-1;

//     int total = 0;
//     while (i <= j)
//     {
//         l = max(l,height[i]);
//         r = max(r,height[j]);

//         if(l < r)
//         {
//             int w_i = l - height[i];
//             total = total + w_i;
//             i++;
//         }else{
//             //(l > r)
//             int w_i = r - height[i];
//             total += w_i;
//             i--;
//         }
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    int height[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(height)/ sizeof(int);

    int l[n];
    l[0] = height[0];
    for (int i = 1; i < n; i++)
    {
        l[i] = max(l[i-1],height[i]);
    }

    int r[n];
    r[n-1] = height[n-1];

    for (int i = n-2; i >= 0; i--)
    {
        r[i] = max(r[i+1], height[i]);
    }

    int total = 0;
    for (int i= 0; i < n; i++)
    {
        int water_i = min(l[i],r[i]) - height[i];
        total += water_i;
    }

    cout << total << endl;
}