#include <iostream>
#include <cstring>
using namespace std;
class Customer
{
public:
    char *name;
    int age;
    char gender;
    int credits;

    // Parameterised Constructor
    Customer(char *n, int a, char g, int c)
    {
        cout << "I am inside Parametrised Constructor " << n << endl;
        name = new char[100];
        strcpy(name, n);
        age = a;
        gender = g;
        credits = c;
    }

    ~Customer()
    {
        cout << name << " Destructor is called" << endl;
        delete[] name;
    }
};
int main()
{
    Customer c("Saurabh", 19, 'M', 5000);
    Customer c1("Sushant", 34, 'M', 25000);
}