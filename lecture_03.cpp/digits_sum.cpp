// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter your Number : " << endl;
//     cin >> num;
//     int digit_sum = 0;
//     // int i = 0;
//     while (num != 0)
//     {
//         int digit = num % 10;
//         digit_sum = digit + digit_sum;
//         num = num / 10;
//     }
//     cout <<"Sum of digits is : " << digit_sum;
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter your number :" << endl;
    cin >> num;
    int digit_sum = 0;
    int i = 0;
    while (num != 0)
    {
        int digit = num % 10;
        digit_sum = digit + digit_sum;
        num = num / 10;
    }
    cout << "Sum of the digits of the numbe is : " << digit_sum;

    return 0;
}