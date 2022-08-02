#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        for(int i =0;i<matrix.size();i++){
            for(int j=i;j<matrix[i].size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
       
        for(int i =0;i<matrix.size();i++){
            int l=0;int temp;
            int r=matrix[i].size()-1;
            while(l<=r){

                swap(matrix[i][l], matrix[i][r]);
                l++;
                r--;
            }
        }
         for(int i =0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                cout<<matrix[i][j]<<" ";
            }cout<<endl;
        }
        
    }
};

int main(){
    Solution a;
        vector<vector<int>>arr={{1,2,3},
                                {4,5,6},
                                {7,8,9}};
a.rotate(arr);


        
}