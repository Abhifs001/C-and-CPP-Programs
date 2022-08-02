#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int k,l, n =nums.size();
        for(k=n-2;k>=0;k--){
            if(nums[k]<nums[k+1]){
                break;
            }
        }
        if(k<0){
            reverse(nums.begin(),nums.end());
            return ;
        }

        for(l=n-1;l>=k;l--){
            if(nums[l]>nums[k]){
                break;
            }
        }
        swap(nums[k], nums[l]);
        reverse(nums.begin()+k+1, nums.end());

        for(int i =0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
        
        
    }
};
int main(){
    Solution a;
    vector<int> arr= {1,2,3};
    a.nextPermutation(arr);
}