#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,1,2,3};
    int k = 2;

    unordered_map<int,int> freqMap;//between v[i] and  index (last occurence index of v[i] if(repeated))

    bool flag = false; // assume there doesn't exist such pair
    for(int i = 0; i < v.size();i++)
    {
        // Search v[i] in your map
        if(freqMap.find(v[i]) != freqMap.end())
        {
            // v[i] pahle map me present hai already->v[i] ki current index 'i' hai aur uski last occurence index = freqMap[v[i]]
            if(abs(i-freqMap[v[i]]) <= k)
            {
                // return true;
                flag = true;// pair found
            }else{
                freqMap[v[i]] = i;//update index corrosponding to v[i]->as 'i' is the last occurence of i
            }
        }
        // if v[i] is not present in your freqMap than insert it
        freqMap.insert({v[i],i});
    }
    if(flag == true)
    {
        cout << "Required Duplicate found!" << endl;
    }else{
        cout << "Such pair not found!" << endl;
    }

}