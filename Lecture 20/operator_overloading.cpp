#include <iostream>
#include <cstring>
using namespace std;
class Customer{
    public:
    char name[100];
    int age;
    char gender;
    int credits;

    Customer(char *n,int a,char g,int c)
    {
        strcpy(name,n);
        age = a;
        gender = g;
        credits = c;
    }

    bool operator<(Customer c)//c1.operator<(c2) -->(Work like this) // takes only one arguement (here c2)
    {
    //     if(credits < c.credits)
    //     {
    //         return true;
    //     }
    //     return false;

           return credits < c.credits;//c1 < c2(you can assume in mind)
    }

};
int main()
{
    Customer c1("Saurabh",19,'M',3000);
    Customer c2("Rakesh",34,'M',5000);
    if(c1 < c2)//If you don't use operator function than you will encouter error that '<'operator is not defined for customer type datatype(user defined datatype)
    {
        cout << c1.name << " has less balance " << endl;
    }else{
        cout << c2.name << " has less balance " << endl;
    }

}