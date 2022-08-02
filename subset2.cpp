#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>AnsMatrix;
        // vector<int>temp
        int outerEnd= 1<<nums.size();
        int innerEnd= nums.size();

        for(int i =0;i<outerEnd;i++){
            vector<int>temp;
            for(int j=0;j<innerEnd;j++){
                if((i& (1<<j))!=0){
                    temp.push_back(nums[j]);
                }   
            }
            if(!isTempFound(AnsMatrix, temp))
            AnsMatrix.push_back(temp);
        }

        for(int i=0;i<AnsMatrix.size();i++){
            for(int j=0;j<AnsMatrix[i].size();j++){
                cout<<AnsMatrix[i][j];
            }cout<<endl;
        }
        
    }

    bool isTempFound(vector<vector<int>>AnsMatrix, vector<int>temp){
        for(int i=0;i<AnsMatrix.size();i++){
            if(temp==AnsMatrix[i]){
                return true;
            }
        }
    }
};
int main(){
    Solution a;
    vector<int>test= {1,2,2};
    // a.subsetsWithDup(test);
    
 
    cout<<abs(-1);
}