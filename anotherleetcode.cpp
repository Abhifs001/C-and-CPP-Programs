#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric> 
// to return an array which contains products of elements at ith except element a[i]
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums){
        int count= 0;
        int product = 1;
        for(int i =0;i<nums.size();i++){
            if(nums[i]== 0 ){
               
                count++;
                
            }else{
                product =product*nums[i];
            }
        }

        if(count>1){vector<int>answer(nums.size(),0);
        return answer;
        }
vector<int>answer(nums.size());
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0){
                answer[i]=product;
            }else if(count==1){
                answer[i]=0;
            }else{
                answer[i]=product/nums[i];
            }
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