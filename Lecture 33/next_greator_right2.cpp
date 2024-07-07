#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int nums[] = {1,2,1};
    int n = sizeof(nums)/sizeof(int);
            stack<int> s;
            vector<int> v;
            for(int i = n; i < 2*n; i++)
            {
                nums[i] = nums[i%n];
            }
            for(int i = 0; i < 2*n; i++)
            {
                cout << nums[i] << " ";
            }

            for(int i = 2*n-1; i >= 0; i--)
            {
                while(!s.empty() and nums[i] >= s.top()){
                    s.pop();
                }   

                if(s.empty()){
                    v.push_back(-1);
                }else{
                    v.push_back(s.top());
                }

                s.push(nums[i]);
            }
            reverse(v.begin(),v.end());
            cout << endl;
            for(int i = 0; i < 2*n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
            for(int i = 0; i < n; i++){
                cout << v[i] << " ";
            }
            vector<int> v1;
            for(int i = 0; i < n; i++)
            {
                v1.push_back(v[i]);
            }
            cout << endl;
            for(int i = 0; i < n; i++){
                cout << v1[i] << " ";
            }
}