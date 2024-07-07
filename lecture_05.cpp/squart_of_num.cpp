// #include <iostream>
// using namespace std;
// int main()
// {

//     int num;
//     cout << "Enter your Number" << endl;
//     cin >> num;
//     float squart_of_n = 0;
//     // int i = 0;
//     while (squart_of_n * squart_of_n <= num)
//     {
//         squart_of_n++;
//     }
//     squart_of_n--;

//     while (squart_of_n * squart_of_n <= num)
//     {
//         squart_of_n = squart_of_n + 0.1;
//     }
//     squart_of_n = squart_of_n - 0.1;

//     while (squart_of_n * squart_of_n <= num)
//     {
//         squart_of_n = squart_of_n + 0.01;
//     }
//     squart_of_n = squart_of_n - 0.01;
//     cout << "Square Root of n is :" << squart_of_n;
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    float num;
    cout << "Enter the value of n: " << endl;
    cin >> num;
    int prec;
    cout << "Enter the Precesion: " << endl;
    cin >> prec;
    float squrt_of_num = 0;

    float increment_factor = 1;
    int i = 1;
    while (i <= prec + 1)
    {
        while (squrt_of_num * squrt_of_num <= num)
        {
           squrt_of_num = squrt_of_num + increment_factor;
        }
        squrt_of_num = squrt_of_num - increment_factor;
        increment_factor = increment_factor / 10;
        i++;
    }
    cout << "Squareroot upto " << prec << " precesion is " << squrt_of_num; 

    return 0;
}
