#include<iostream>
#include<math.h>
#include<vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {  
        vector<vector<int>>Bitmask;
    int outerEnd= pow(2,nums.size());
    int innerEnd = nums.size();
    vector<vector<int>>Ans_BinMatrix;
     for(int i =0;i<outerEnd;i++){
            vector<int>temp;
          for(int j=0;j<innerEnd;j++){
            if(i&(1<<j)!=0){
                temp.push_back(nums[j]);

            }
          }
          Ans_BinMatrix.push_back(temp);
     }
        
       return Ans_BinMatrix; 
    }

};
int main(){
    Solution a;
    vector<int>Array= {1,2,3};
    a.subsets(Array);
    
    return 0;
}