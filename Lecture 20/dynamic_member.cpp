#include <iostream>
#include <cstring>
using namespace std;
class Customer
{
public:
    char *name;
    int age;
    char gender;
    double credits;

    // Parametrised Constructor
    Customer(char *n, int a, char g, double c)
    {
        cout << "Inside Parameterised Constructor " << endl;

        name = new char[100]; // Creating 1D array on heap and storing address of first index in name pointer
        strcpy(name, n);
        age = a;
        gender = g;
        credits = c;
    }
};
int main()
{
    Customer c("saurabh", 19, 'M', 5000.0);
}

// #include <iostream>
// #include <cstring>
// using namespace std;

// class customer
// {
// public:
//     char *name;
//     int age;
//     char gender;
//     double credits;

//     customer(char *n, int a, char g, double c)
//     {
//         cout << "I am inside the parameterised constructor of the customer class" << endl;
//         name = new char[100];
//         strcpy(name, n);
//         age = a;
//         gender = g;
//         credits = c;
//     }

//     // void printCustomerInfo()
//     // {
//     //     cout << "\nCustomer Information\n";
//     //     cout << "Name : " << name << endl;
//     //     cout << "Age : " << age << endl;
//     //     cout << "Gender : " << gender << endl;
//     //     cout << "Credits : " << credits << endl;
//     // }
// };

// int main()
// {

//     customer c("dinesh", 20, 'M', 5000);
//     // c.printCustomerInfo();

//     return 0;
// }