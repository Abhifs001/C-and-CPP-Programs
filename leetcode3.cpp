#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        for(int i=0;i<nums.size();i++){
            while(original==nums[i]){
                original=2*original;
               return findFinalValue(nums,original);
                i++;
                }
    
       }
       return original;
     }

        
    
};
int main(){
Solution a;
    vector<int>test={5,3,6,1,12};

 int answer= a.findFinalValue(test, 3);
    cout<<answer;

}