#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {2, 3, 2, 4, 0, 2, 0};
    int target = 6;

    int i = 0;
    int j = 0;
    int w_sum = 0;
    int max_length = 0;
    while (j < v.size())
    {
        w_sum += v[j];
        if (w_sum < target)
        {
            // Expend the window
            j++;
        }
        else if (w_sum > target)
        {
            // Shrink the window
            while (w_sum > target)
            {
                w_sum = w_sum - v[i];
                i++;
            }
            if (w_sum == target)
            {
                max_length = max(max_length, j - i + 1);
            }
            j++;
        }
        else
        {
            // w_sum == K
            max_length = max(max_length, j - i + 1);
            j++;
        }
    }
    cout << max_length << endl;
}

//     int i = 0;
//     int j = 0;
//     int w_sum = 0;
//     int max_length = 0;
//     while (j < v.size())
//     {
//         // Expend the window(jth element ko enter karao)
//         w_sum += v[j];

//         // Check for the violation of the window property
//         while (w_sum > Target)
//         {
//             // Shrink the window(ith element ko remove karo)
//             w_sum = w_sum - v[i];
//             i++;
//         }

//         // check for the validity of the window and update the answer
//         if(w_sum == Target)
//         {
//             max_length = max(max_length,j-i+1);
//         }
//         // Continue with the expension
//         j++;
//     }
//     cout << max_length << endl;
// }
