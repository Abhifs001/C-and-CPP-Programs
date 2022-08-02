#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
            int first = INT32_MAX; int second = INT32_MAX;
        for(int i = 0;i<nums.size();i++){
            
               
                if(nums[i]<first){
                    first = nums[i];   
                }else if(first<nums[i] && nums[i]<second){
                    second= nums[i];
                }else if(first<nums[i] && nums[i]>second){
                    return true;
                }
                

            }



               
            
        return false;
        
        
    }
};
int main(){
    Solution a;
    vector<int>test= {1,2,3,6,7,8};
    if(a.increasingTriplet(test)){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}
