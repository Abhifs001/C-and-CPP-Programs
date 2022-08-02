#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:


    vector<int> twoSum(vector<int>&nums, int target) {
        unordered_map<int,int>mapp;
        vector<int>answer;
        for( int i =0;i<nums.size();i++){
            if(mapp.find(target-nums[i])!=mapp.end() && i!=mapp[target-nums[i]]){
                answer.push_back(mapp[target- nums[i]]);
                answer.push_back(i);


            }else{
                mapp[nums[i]]=i;

            }
        }
return answer;
        }
        
    
};

int main()
{
        Solution a;
    vector<int> arr={3,2,4};

    vector<int>Ans=a.twoSum(arr,6);
  for (int  i = 0; i < Ans.size(); i++)
  {
      cout<<Ans[i]<<" ";
  }
  
return 0;


}

