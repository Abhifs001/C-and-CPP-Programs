#include<iostream>
#include<vector>
//this is unpotimized code as it uses extra space time complexity is O(n2)
 /*int s= nums.size(); 
        int tem;   int temp;
        for(int i =0;i<k;i++){
            temp=nums[s-1];
            for(int j=s;j>0;j--){
                    nums[j]=nums[j-1];
            }
  nums[0]=temp;
            }
        */
//first optimized code:-> here we are using swapping to rotate the array time complexity becomes O(n)
/*  for(int j=0;j<size-k;j++){
                swap(nums[j], nums[size-1]);
            } */

using namespace std;
//another way 
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size=nums.size();
       vector<int>temp;
       temp.resize(size);

       for(int i=0;i<size;i++ ){
           temp[(i+k)%size]= nums[i];
       }                
for(int i =0;i<temp.size();i++){
    cout<<temp[i]<<endl;
}
      
    }
};
int main(){

    Solution a;
    vector<int>arra={1,2,3,4,5,6,7};
    int k =3;
    a.rotate(arra, k);

}