#include<iostream>
#include<map>
#include<vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
         map<int, int>mp;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        nums.resize(0);
  for(int i = 0;i<mp[0];i++){
      nums.emplace_back(0);
  }
  for(int i = 0;i<mp[1];i++){
      nums.push_back(1);
  }
  for(int i = 0;i<mp[2];i++){
      nums.push_back(2);
  }
        
        for(int i =0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
        
    }
};
int main(){
    Solution a;


    vector<int> rr= {0,0,1,2,0,2,1,0};
  a.sortColors(rr);
    
    return 0;
}