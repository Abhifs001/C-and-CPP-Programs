#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric> 
// to return an array which contains products of elements at ith except element a[i]
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums){
        int m=1; int n = nums.size();
        vector<int>answer;
                answer.resize(n);
        for(int i =0;i<nums.size();i++){
               int temp = nums[i];
               nums[i]=1;
                answer[i] = (accumulate(nums.begin(), nums.end(),nums[i], multiplies<int>()));
                nums[i]=temp;
        }

        return answer;    
    }
};
int main(){
    
    Solution a;
    
    vector<int>test= {1,2,3,4};
    vector<int>answer = a.productExceptSelf(test);
    for(int i= 0 ;i<answer.size();i++){
             cout<<answer[i]<<endl;
        }

   return 0;

}