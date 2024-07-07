#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    vector<int> v = {1,3,4,2,2};

    // // Approach-01(Brute Force)
    // // Time = O(n) and space = O(n)->hashMap
    // unordered_map<int,int> freqMap;
    // for(int i = 0;i < v.size();i++)
    // {
    //     freqMap[v[i]]++;
    // }
    // for(pair<int,int> p : freqMap)
    // {
    //     if(p.second > 1)
    //     {
    //         cout << p.first << endl;
    //     }
    // }


    // // Approach - 02
    // // Time = O(n) and Space = O(1) but we have modified our origional array

    // // we have size of array as : N+1 (e.e range of valid indices [0,1,2...N])
    // // values from 1 to N : 0 is not present
    // // Only one element repeating
    // while(true)
    // {
    //     if(v[0] == v[v[0]])
    //     {
    //         cout << v[0] << " is repeating value " << endl;
    //         return 0;
    //     }else{
    //         swap(v[0],v[v[0]]);
    //     }
    // }

    // Approach - 03
    // 0th index wale ko node banao phir v[v[0]] ko next node and keep doing till last element of array
    // i.e 1-->3-->2-->4
    //             |___| 

    int slow = v[0];//Initially slow and fast both are at 0index element (i.e both pointing to 1)
    int fast = v[0];          
    while(true)
    {
        slow = v[slow];//Move slow with 1X speed
        fast = v[v[fast]];//Move fast with 2X speed
        if(slow == fast)
        {
            // We got meeting point
            break;
        }
    }
    slow = v[0];
    // Now,move both slow and fast with same speed i.e 1X
    while(slow != fast)
    {
        slow = v[slow];
        fast = v[fast];
    }
    // Slow and fast both are and intersection point i.e our result is herefi
    cout << slow << " " << fast << endl;

}