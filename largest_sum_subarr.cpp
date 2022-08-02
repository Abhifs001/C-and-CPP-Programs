#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0; int Max=INT32_MIN;
        for(int i =0;i<nums.size();i++){
            sum = max(sum+nums[i], nums[i]);
            Max= max(sum, Max);
        }

        return Max;
    }

};

int main(){
    Solution a;
    vector<int>arr= {5,4,-1,7,8};
    int ans= a.maxSubArray(arr);
    cout<<ans<<endl;
}
//first i learnt to print the subarray of a given array it is done using 3 nested loops
//then i learnt find the sum of each subarray and print
// then i learnt to find the maximum sum subarray 
// but the problem is time complexity which is O(N3), also this code won't work in every situation like in the negative signed elements  
// so optimized code includes taking two variablles SUM and MAX sum collects the maximum of sum of elements and element while MAX  collects the max out of MAX and sum
/*int n=nums.size();
        int sum=0; int ans= INT32_MIN;;
        for(int i =0;i<n;i++){
            for(int j = i;j<=n;j++){
                for(int k=i;k<j;k++){
                    cout<<nums[k]<<", ";
                    sum=sum+nums[k];
                }
                ans= max(sum, ans);
                    cout<<"sum = "<<sum; sum=0;
            cout<<endl;
            }
        }  
    return ans;*/