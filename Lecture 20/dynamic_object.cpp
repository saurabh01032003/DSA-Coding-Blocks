// Creating object on heap

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
        cout << "You are inside Default Constructor" << endl;
    }

    // Parameterised Constructor
    Customer(char *n, int a, char g, double c)
    {
        cout << "You are inside Parameterised Constructor" << endl;
        strcpy(name, n);
        age = a;
        gender = g;
        credits = c;
    }

    void printCustomerInfo() // No arguement is required
    {
        cout << "Customer Information " << endl;
        cout << "Name is : " << name << endl;
        cout << "Age is : " << age << endl;
        cout << "Credits are : " << credits << endl;
        cout << "Gender is : " << gender << endl;
    }
};
int main()
{
    Customer *cptr = new Customer; // Default Constructor is called
    Customer *cptr2 = new Customer("Saurabh", 19, 'M', 2500); // Parameterised Constructor is called
    cptr2->printCustomerInfo();
    cout << cptr2 -> name << endl;
}   