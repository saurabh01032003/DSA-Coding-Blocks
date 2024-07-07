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
        cout << "You are inside Parameterised Constructor " << endl
             << endl;
        strcpy(name, n);
        age = a;
        gender = g;
        credits = c;
    }

    // Copy Constructor
    Customer(Customer &c){
        cout << "You are inside Copy Constructor " << endl;
        strcpy(name,c.name);
        age = c.age;
        gender = c.gender;
        credits = c.credits;
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
    Customer c1("Saurabh", 19, 'M', 5000);//Parametrised Constructor is invoked

    // Customer c2 = c1;// or Customer c2(c1); //Default Copy Constructor is called
  

    Customer c2;//Default constructor is invoked
    // c2 = c1;
    c2.operator=(c1);//Copy assignmet operator

    c2.printCustomerInfo();
}