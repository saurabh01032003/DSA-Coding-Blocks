// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
// //     int n = sizeof(height) / sizeof(int);
// //     int i = 0;
// //     int j = n - 1;
// //     int lsf = 0;
// //     while (i < j)
// //     {
// //         int l = j - i;
// //         int b = min(height[i], height[j]);
// //         int water = l * b;
// //         if (lsf < water)
// //         {
// //             lsf = water;
// //         }

// //         if (height[i] < height[j])
// //         {
// //             i++;
// //         }
// //         else if (height[i] >= height[j])
// //         {
// //             j--;
// //         }
// //     }
// //     cout << "Maximum water is " << lsf;
// // }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
//     int n = sizeof(height) / sizeof(int);
//     int i = 0;
//     int j = n - 1;
//     int lsf = 0;
//     while (i < j)
//     {
//         int length = min(height[i], height[j]);
//         int breadth = j - i;
//         int water = length*breadth;
//         if(water > lsf)
//         {
//             lsf = water;
//         }
//         if (height[i] < height[j])
//         {
//             i++;
//         }
//         else
//         {
//             j--;
//         }
//     }
//     cout << lsf;
// }

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(arr)/sizeof(int);

    int i = 0;
    int j = n-1;
    int lsf = 0;
    int area;
    while(i < j)
    {
        int length = min(arr[i],arr[j]);
        int breadth = j-i;
        area = length * breadth;

        if(area >lsf)
        {
            lsf = area;
        }

        if(arr[i] < arr[j])
        {
            i++;
        }
        else if(arr[i] > arr[j])
        {
            j--;
        }else{
            i++;
            j--;
        }
    }
    cout << lsf;
}