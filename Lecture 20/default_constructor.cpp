#include <iostream>
#include <cstring>
using namespace std;
class customer
{
public:
    char name[100];
    int age;
    char gender;
    double credits;

    // Default Constructor(if you don't create it Cpp inbuilt default constructor is called)
    customer() // Takes no arguement and has same name as class name
    {
        cout << "I am inside Default Constructor" << endl
             << endl;
    }

    void printCustomerInfo()
    {
        cout << "Customer Information " << endl;
        cout << "Name is : " << name << endl; 
        cout << "Age is : " << age << endl;
        cout << "Gender is : " << gender << endl;
        cout << "Credits are : " << credits << endl;
    }
};
int main()
{
    customer c1; // Default constructor is invoked

    strcpy(c1.name, "Saurabh");
    c1.age = 20;
    c1.gender = 'M';
    c1.credits = 500.8;

    c1.printCustomerInfo();
}