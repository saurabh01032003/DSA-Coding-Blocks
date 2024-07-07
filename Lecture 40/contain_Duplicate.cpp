// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;
// int main()
// {
//     vector<int> v = {1,2,3,1};
//     unordered_map<int,int> freqMap;//v[i],frequency of v[i]
    
//     // Build a frequency map
//     for(int i = 0;i < v.size();i++)
//     {
//         freqMap[v[i]]++;//freqMap me jao v[i] key ke corrospoding frequency increase kardo
//     }

//     // // Print frequency Map
//     // for(pair<int,int> p : freqMap)
//     // {
//     //     cout << p.first << "," << p.second << endl;
//     // }

//     bool flag = false;//Assume duplicates are not present
//     for(pair<int,int> p : freqMap)
//     {
//         if(p.second > 1)
//         {
//             // duplicate found
//             flag = true;
//             break;
//         }
//     }
//     if(flag == true)
//     {
//         cout << "Duplicate Found" << endl;
//     }else{
//         cout << "Duplicate not Found!" << endl;
//     }
// }

// Using unordered_set
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,1};
    unordered_set<int> seen;

    bool flag = false;//You haven't seent duplicate value till now
    for(int i = 0; i < v.size();i++)
    {
        if(seen.find(v[i]) != seen.end())
        {
            // You have already seen given element in your unordered_set
            flag = true;
            break;
        }
        seen.insert(v[i]);
    }
    if(flag == true)
    {
        cout << "Duplicate Found" << endl;
    }else{
        cout << "Duplicate Not Found!" << endl;
    }
}