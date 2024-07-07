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

    void printCustomerInfo() // No arguement is required
    {
        cout << "Customer Information " << endl;
        cout << "Name is : " << name << endl;
        cout << "Age is : " << age << endl;
        cout << "Credits are : " << credits << endl;
        cout << "Gender is : " << gender << endl;

    }
};

void printCustomerInfo(Customer c)
{
    cout << "Customer Information " << endl;
    cout << "Name is : " << c.name << endl;
    cout << "Age is : " << c.age << endl;
    cout << "Gender is : " << c.gender << endl;
    cout << "Credits are : " << c.credits << endl;

}
int main()
{
    Customer c1;//Object decleration (memory allocated)
     
    // Now you can access public data members only outside class using .operator
    strcpy(c1.name,"Saurabh");
    c1.age = 20;
    c1.gender = 'M';
    c1.credits = 100.0;

    // printCustomerInfo(c1);
    c1.printCustomerInfo();

    // cout << "Customer Information " << endl;
    // cout << "Name is : " << c1.name << endl;
    // cout << "Age is : " << c1.age << endl;
    // cout << "Gender is : " << c1.gender << endl;
    // cout << "Credits are : " << c1.credits << endl;

    Customer c2;
    strcpy(c2.name,"Rohit");
    c2.age = 21;
    c2.gender = 'M';
    c2.credits = 0.5;

    cout << endl;
    // printCustomerInfo(c2); 

    c2.printCustomerInfo();
    
    // cout << "Customer Information " << endl;
    // cout << "Name is : " << c2.name << endl;
    // cout << "Age is : " << c2.age << endl;
    // cout << "Gender is : " << c2.gender << endl;
    // cout << "Credits are : " << c2.credits << endl;


}