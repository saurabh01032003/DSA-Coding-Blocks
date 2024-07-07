#include <iostream>
using namespace std;
class Customer
{
public:
    string name;
    int age;
    int gender;
    int credits;

    Customer(string n, char g, int a, int c) : name(n), age(a), gender(g), credits(c)
    {
        cout << "You are Inside Parameterised Constructor " << endl;
    }
};
int main()
{
    Customer c1("Saurabh", 'M', 19, 3000);
    cout << c1.name << endl;
    cout << c1.age << endl;
    cout << c1.gender << endl;
    cout << c1.credits << endl;
}
