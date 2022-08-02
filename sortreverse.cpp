#include<iostream>
#include<vector>
using namespace std;
int main();
class Solution {
public:
int i,j;

    vector<int> twoSum(vector<int>&nums, int target) {
        for( i =0;i<nums.size();i++){
            for( j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                   vector<int>ans;
                   ans={i,j};
                   return ans;
                }
            }

        }
return{};
    }
};

int main()
{
        Solution a;
    vector<int> arr={2,5,5,11};

    vector<int>Ans=a.twoSum(arr,10);
  for (int  i = 0; i < Ans.size(); i++)
  {
      cout<<Ans[i]<<" ";
  }
  
return 0;
}




