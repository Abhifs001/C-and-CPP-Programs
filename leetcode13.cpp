#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
int temp;
        for(int i = 0;i<nums.size();i++){
            for(int j=0;j<nums.size()-1-i;j++){
                if(nums[j]>nums[j+1]){
                    temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                }

            }
        }
        for(int i =0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
    }
};
int main(){
    Solution a;
    vector<int>test={2,0,2,1,1,0};
    a.sortColors(test);
    return 0;
}