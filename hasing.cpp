#include <iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>answer;
        set<vector<int>>checker; // to check duplicates 
        sort(nums.begin(), nums.end());

        //wrapping up of 2 sum with binary search technique 
        //use sum of two numbers and then check if prevous 2sum + current 2sum is equal to target or not 

        for(int i =0;i<nums.size();i++){
            for(int j =i+1;j<nums.size();j++){
                int start=j+1;
                int end = nums.size()-1;
              long long int first2sum= nums[i]+nums[j];
                while(start<=end){
                    long long int current2sum = nums[start]+nums[end];
                    long long int finalSum= first2sum+current2sum;

                    if(finalSum==target){
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[start]);
                        temp.push_back(nums[end]); 
                        // now insert in the answer matrix and check if it is already present
                        if(checker.find(temp)==checker.end()){
                            answer.push_back(temp);
                            checker.insert(temp);

                        }

                        start++;
                        end--;

                    }
                    
                if(finalSum>target){// is sum exceeds target check with smaller number
                    end--;
                }else{
                    start++;
                }

                    
                }
            }
        }
  

      
    
        for(int i =0 ;i<answer.size();i++){
            for(int j=0;j<answer[i].size();j++){
                cout<<answer[i][j];
            }cout<<endl;
        }
    
    return answer;    
    }
};
int main() {
    Solution a;
    vector<int>test = {1,0,-1,0,-2,2};
    a.fourSum(test, 0);

    return 0;
}