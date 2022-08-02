#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int i,j;
        unsigned int coef=1;
        vector<int>answer;
vector<vector<int>>arr(rowIndex+1);
        for(i=0;i<=rowIndex;i++){
            arr[i].resize(rowIndex+1,1);
            for(j=1;j<i;j++){
                
                    arr[i][j]=arr[i-1][j-1]+arr[i-1][j]; 
                
           
            }
        }
    

        return arr[rowIndex];
    }
};
int main(){
    Solution a;
    
    vector<int>answer= a.getRow(33);

    for(int i =0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }

    return 0;
}