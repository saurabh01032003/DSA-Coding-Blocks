#include <iostream>
#include <map> //All operation on avg ->log(n) time
// Ye tree se implement hota hai na ki linkedList se
// Ishme key sorted ordered me store hota hai
using namespace std;
int main()
{
    // Build an map using default constructor
    map<string, string> capitalMap;

    // inserting into a map
    capitalMap.insert({"India", "New Delhi"});
    capitalMap.insert(make_pair("Nepal", "Kathmandu"));

    cout << "Size is : " << capitalMap.size() << endl;

    // using []
    capitalMap["Japan"] = "Tokyo";
    capitalMap["France"] = "Paris";

    cout << "Size is : " << capitalMap.size() << endl;
    cout << endl;

    // print map using for-each loop
    // In Output key is sorted in laxicographical order 
    for (pair<string, string> p : capitalMap)
    {
        cout << "(" << p.first << "," << p.second << ")" << endl;
    }
    cout << endl;

    // print map using an iterator
    for (auto it = capitalMap.begin(), end = capitalMap.end(); it != end; it++)
    {
        cout << "(" << it->first << "," << it->second << ")" << endl; // it consist of pair of string
    }
    cout << endl;

    // Since map tree se represent hota hai toh isme bucket_count wala hisab kitab nahi hai
    // for (int i = 0; i < capitalMap.bucket_count(); i++)
    // {
    //     cout << i << " : ";
    //     for (auto it = capitalMap.begin(i), end = capitalMap.end(i); it != end; it++)
    //     {
    //         cout << "(" << it->first << "," << it->second << ")";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    // Updating a value corrosponding to a key in map using []
    capitalMap["India"] = "NEW DELHI";
    // Ab print karne pr India ke corrospondin "NEW DELHI" print Hoga but in capital Letter
    for (pair<string, string> p : capitalMap)
    {
        cout << "(" << p.first << "," << p.second << ")" << endl;
    }
    cout << endl;

    // Lookups ->Search a key

    string key = "France";
    if (capitalMap.find(key) != capitalMap.end())
    {
        // Agar key milgaya toh find bich me hi ruk jayega
        cout << "Value corrospoding to key " << key << " is : " << capitalMap[key] << endl;
    }
    else
    {
        // agar key nahi mila toh find end pe chala gaya but use mila nahi key
        cout << key << " not found!" << endl;
    }
    cout << endl;

    // Lookups ->Search a key
    key = "India";
    if (capitalMap.count(key)) // count() will return 1(i.e true) if key is found else 0(i.e false) if key not found
    {
        cout << "Value corrospoding to key " << key << " is : " << capitalMap[key] << endl;
    }
    else
    {
        cout << key << " not found!" << endl;
    }
    cout << endl;

    // Delete a key
    capitalMap.erase(key);
    for (auto p : capitalMap)
    {
        cout << "(" << p.first << "," << p.second << ")" << endl; //(India,NEW DELHI) delete ho gaya
    }
    cout << endl;

    capitalMap.clear();
    cout << "Size of CapitalMap : " << capitalMap.size() << endl;
    // Build an unordered_map using the initialiser list
    map<int, int> squareMap = {{1, 1},
                               {2, 4},
                               {3, 9},
                               make_pair(4, 16),
                               make_pair(5, 25)};
    cout << "Size of squareMap is : " << squareMap.size() << endl;
    // You will see our map is printed in random order->i.e neither based on order of insertion nor in sorted order based on key
    for (auto p : squareMap)
    {
        cout << "(" << p.first << "," << p.second << ")" << endl;
    }
}