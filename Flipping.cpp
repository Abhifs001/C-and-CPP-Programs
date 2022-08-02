#include<iostream>
#include<vector>
using std::vector;
using std::cout;using std::cin;using std::endl;
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        for(int i=0;i<image.size();i++){
            int left=0, right= image[i].size()-1;
            while(left<=right/2){
                std::swap(image[i][left],image[i][right-left] );
                left++;
                
            }

        }
        
      
        


        for(int i =0;i<image.size();i++){
            for(int j=0;j<image[i].size();j++){
                if(image[i][j]==0){
                    image[i][j]=1;
                }else{
                    image[i][j]=0;
                }
            }
         }

           for(int i =0;i<image.size();i++){
            for(int j=0;j<image[i].size();j++){
                cout<<image[i][j];
            }cout<<endl;
         }

    }
};
int main(){
    Solution a;
    vector<vector<int>>test= {{1,1,0,0},{1,0,0,1},{0,1,1,1},{1,0,1,0}} ;
    a.flipAndInvertImage(test);
}