#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
   vector<vector<int>>answer( n , vector<int> (n)); // for answer

            /* genration of the spiral matrix 
            1. generate four variables left, right, top, bottom
            2. traverse as left-right-bottom-left-top-right and so on.. 
            3. fill the elements in the array to form a spiral           
            */
           int left = 0;
           int right = n-1;
           int top =0;
           int bottom = n-1;
                int k =0;

    int i;
        int count= 1;
           while(left<=right && top<=bottom){
                //left to right 
                for( i= left; i<=right;i++){
                    answer[top][i]=count;
                    count++;
                }top++; // increase top to go from top to bottom
               
                for( i = top ;i<=bottom;i++){
                    answer[i][right]= count;
                   count++;
                }right--; // decrease right to go from right to left

                if(top<=bottom){
                    for( i = right;i>=left;i--){
                        answer[bottom][i]=count;
                        count++;
                    }
                }bottom--;

                    if(left<=right){
                        for( i = bottom;i>=top;i--){
                            answer[i][left]=count;
                            count++;

                        }
                         left++;
                    }
            

           }
return answer;

    }
};
int main(){

    Solution a;
    int n =3;
   vector<vector<int>> answer ;
   answer=  a.generateMatrix(n);

   for(int i =0;i<answer.size();i++){
       for(int j =0;j<answer[i].size();j++){
           cout<<answer[i][j]<<" ";
       }cout<<endl;
   }
return 0;
   }