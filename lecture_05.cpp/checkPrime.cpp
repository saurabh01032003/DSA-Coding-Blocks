// Checking Prime without using flag variable
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter Your Number to be checked " << endl;
//     cin >> num;
//     int i = 2;
//     while (i < num)
//     {
//         if (num % i == 0)
//         {
//             cout << "Number is not Prime" << endl;
//             break;
//         }
//         i++;
//     }
//     if (i == num)
//     {
//         cout << "Number is Prime" << endl;
//     }
//     return 0;
// }

// Checking Prime using flag variable
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter your number" << endl;
//     cin >> num;
//     bool flag = true;
//     int i = 2;
//     while (i < num)
//     {
//         if (num % i == 0)
//         {
//             flag = false;
//             cout << "Number is not Prime" << endl;
//             break;
//         }
//         i++;
//     }
//     if (flag == true)
//     {
//         cout << "Number is Prime" << endl;
//     }

//     return 0;
// }

// Reducing number of iteration
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num;
    cout << "Enter Your Number :" << endl;
    cin >> num;
    int i = 2;
    int squrt_n = sqrt(num);
    while (i <= squrt_n)
    {
        if (num % i == 0)
        {
            cout << "Number is Not Prime " << endl;
            break;
        }
        i++;
    }
    if (i > squrt_n)
    {
        cout << "Number is Prime ";
    }
}