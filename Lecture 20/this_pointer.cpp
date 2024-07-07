#include <iostream>
using namespace std;
#include <iostream>
#include <cstring>
using namespace std;
class Customer
{
    public:
    string name;
    int age;
    char gender;
    double credits;

    Customer(string name,int age,char gender,double credits) // Arguement name is same as data member name
    {
        this->name = name;//Arguements name is assign to name section of object on which parameterised constructor(member function) is invoked
        this->gender = gender;//Arguements gender is assign to gender section of object on which parameterised constructor(member function) is invoked
        this->age = age;
        this->credits = credits;
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
    Customer c("Saurabh",19,'M',300);
    c.printCustomerInfo();
    // cout << (*this).name << endl; // you cann't use this pointer here
}