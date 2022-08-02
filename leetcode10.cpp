#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
sort(nums.begin(),nums.end());
int maxcount=0, n = nums.size();
int index=-1;
int count=1;
        for(int i =1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count++;
                if(count>n/2)
                    return nums[i];
                
                }else{
                    count =1;
                    }


        }
           return -1;
        }
               
    

        
};

int main(){
    vector<int>input={2,2,1,1,1,2,2};
    Solution a;
    int ans= a.majorityElement(input);
    cout<<ans<<endl;

}