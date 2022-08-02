#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
          sort(nums.begin(),nums.end());
        
      return nums;  
    }
};

int main(){
    Solution a;
    vector<int>arr={5,2,3,1};
    a.sortArray(arr);
    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}