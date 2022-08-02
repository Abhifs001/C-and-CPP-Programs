#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>&nums) {
        sort(nums.begin(),nums.end()); int i;
        set<vector<int>>ans;
        for(i=0;i<nums.size();i++){
            int low=i+1;
            int high= nums.size()-1;
            while(low<high){
                int sum=nums[i]+nums[low]+nums[high];
                if(sum==0){
                    ans.insert(vector<int> {nums[i],nums[low],nums[high]});
                    low++;
                    while(low<high&&nums[low]==nums[low-1]){low++;}
                }else if(sum<0){
                    low++;
                    }else{
                        high--;
                    }

            }
        }

vector<vector<int>>answer(begin(ans),end(ans));
return answer;
        
    }
};

int main(){
        Solution a;
    vector<int>nums= {-1,0,1,2,-1,-4,1,1,-2};
      //-4 -1 -1 0 1 2
    vector<vector<int>>answer= a.threeSum(nums);
    for(int i =0;i<answer.size();i++){
        for(int j =0;j<answer[i].size();j++){
            cout<<answer[i][j]<<" ";
        }
        cout<<endl;
    }



    
return 0;

}