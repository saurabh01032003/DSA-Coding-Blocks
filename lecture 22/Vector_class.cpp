// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class customer
// {
// public:
//     string name;
//     int age;
//     char gender;
//     double credits;

//     // Creating Parametarised Constructor
//     customer(string name, int age, char gender, double credits)
//     {
//         this->name = name;
//         this->age = age;
//         this->gender = gender;
//         this->credits = credits;
//     }
// };

// bool creditComperator(customer c1, customer c2)
// {
//     return c1.credits > c2.credits; // for decreasing order by credits
// }

// bool ageComperator(customer c1, customer c2)
// {
//     return c1.age < c2.age; // sorting by increasing order on basis of age
// }

// int main()
// {
//     vector<customer> v;
//     v.push_back(customer("akkul", 20, 'M', 100));
//     v.push_back(customer("sabhya", 18, 'F', 250));
//     v.push_back(customer("saurabh", 21, 'M', 550));
//     v.push_back(customer("dinesh", 19, 'M', 250));

//     for (customer c : v) // c is object of customer type
//     {
//         cout << c.name << " " << endl;
//     }

//     cout << endl;
//     sort(v.begin(), v.end(), creditComperator);
//     for (customer c : v)
//     {
//         cout << c.name << " " << c.credits << endl;
//     }

//     cout << endl;
//     sort(v.begin(), v.end(), ageComperator);
//     for (customer c : v)
//     {
//         cout << c.name << " " << c.age << endl;
//     }
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     // vector<int> v(5);
//     vector<int> v1(5, 10);
//     for (int x : v1)
//     {
//         cout << x << " ";
//     }

//     cout << endl;
//     vector<int> v2(v1);
//     for (int x : v2)
//     {
//         cout << x << " ";
//     }

//     cout << endl;
//     vector<int> v3(5, 40);
//     vector<int> v4;
//     v4 = v3;
//     for (int x : v4)
//     {
//         cout << x << " ";
//     }
//     cout << endl;

//     vector<int> v5 = {10,20,30,40,50};
//     vector<int> v6(v5.begin()+1, v5.end());
//     for (int i = 0; i < v6.size(); i++)
//     {
//         cout << v6[i] << " "; 
//     }
// }

