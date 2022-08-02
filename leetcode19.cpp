#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool result;
        
                    int row= 0;int col= matrix[0].size()-1;
                    while(row<=matrix.size()-1 && col>=0){
                        if(target==matrix[row][col]){
                            return true;
                        }else if(target>matrix[row][col]){
                            row++;

                        }else if(target<matrix[row][col]){
                            col--;

                        }
                      
                    }
                    return false;
    }
};
int main(){
    Solution a;
    vector<vector<int>>test = {{-1,3}
 };
                                 int target= -1;


        if(a.searchMatrix(test, target)){

        cout<<"true"<<endl;
        }else{
            cout<<"false"<<endl;
        }
        return 0;
}