#include <iostream>
#include <cstring>
using namespace std;
class Customer
{
    int age;

public:
    char name[100];
    char gender;

    // Setter
    void setage(int a)
    {
        age = a;
    }

    // Getter
    int getage()
    {
        return age;
    }
};
int main()
{
    Customer c;
    // cout << c.age << endl;//You can't access the private data members of a class using (.) operator


    c.setage(15);
    cout << c.getage() << endl;
}