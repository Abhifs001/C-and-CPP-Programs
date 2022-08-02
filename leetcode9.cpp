#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i =0;i<nums.size();i++){
            ans=ans^nums[i];
        }
        return ans;
    }
};

int main(){
    vector<int>input={4,1,2,1,2};
    Solution a;
    int ans= a.singleNumber(input);
    cout<<ans<<endl;

}