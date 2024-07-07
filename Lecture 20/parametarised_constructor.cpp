#include <iostream>
#include <cstring>
using namespace std;
class Customer
{
public:
    char name[100];
    int age;
    char gender;
    double credits;

    // Default Constructor
    Customer()
    {
        cout << "You are inside Default Constructor " << endl;
    }

    // Parameterised Constructor
    Customer(char *n, int a, char g, double c)
    {
        cout << "You are inside Parameterised Constructor " << endl << endl;
        strcpy(name, n);
        age = a;
        gender = g;
        credits = c;
    }

    void printCustomerInfo()
    {
        cout << "Name is : " << name << endl;
        cout << "Age is : " << age << endl;
        cout << "Gender is : " << gender << endl;
        cout << "Credits is :  " << credits << endl;
    }
};
int main()
{
    Customer c("Saurabh", 19, 'M', 5000); //Initialising the object (Parameterised Constructor is Invoked)

    c.printCustomerInfo();
}