/*set all the rows and coloumns to zero where there is a single 0 element

we have make record of rows and coloumns where 0 occurs 

so we will traverse matrix and store row and column no. 

then for each row in rowvector set matrix[row no.][index 0 to size]=0

then for each columns in coloumn vectpr set matrix[index 0 to size][coloumn no.]=0



*/
#include<iostream>
#include<vector>
class Solution {
public:
    void setZeroes(std::vector<std::vector<int>>& matrix) {
            std::vector<int>row, column;

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    row.push_back(i);
                    column.push_back(j);   
                }
            }
        }
        
                for(auto i : row){
                    for(int j =0;j<matrix[0].size();j++){
                        matrix[i][j]=0;
                    }
                }

                for(auto i : column){
                    for(int k=0;k<matrix.size();k++){
                        matrix[k][i]=0;
                    }
                }

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
             std::cout<<matrix[i][j]<<" ";
            }std::cout<<std::endl;
        }
        
    }

    
        
    
};
int main(){
    Solution a;
    std::vector<std::vector<int>> test= {{1,1,1},
                                          {1,0,1},
                                          {1,1,1} };
    a.setZeroes(test);
    return 0;
}