#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) { int n = nums.size();
        map<int,int>sumfreq;int count=0;int sum=0;vector<int>prefixsum(n);

        //making an array of sum of prefixes  1 1 1 will give 1 2 3 

        for(int i =0;i<n;i++){
            sum = sum +nums[i];
            prefixsum[i]= sum;
        }

        // main loop for finding the number of subarrays equal to k 

        for(int i =0;i<n;i++){

            // check if prefix sum stores k or not

            if(prefixsum[i]==k){
                count++;  // we have k as a sum in the array so increse count
            }

                // find if prefixsum[i] - k exist in map then increase count 
                


                if(sumfreq.find(prefixsum[i]-k)!=sumfreq.end()){
                    count =count+sumfreq[prefixsum[i]-k];
                }

                sumfreq[prefixsum[i]]++;
                

        }

      

return count;


    }
};
int main(){
    Solution a;
    vector<int>test= {1,2,3};
    int k = 3;
   int ans= a.subarraySum(test, k);
   cout<<ans<<endl;
return 0;
    
}