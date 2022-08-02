//Program is implemented using Dynamic array
// arrar reversal upto index and after index
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class A {
    public:
    void reversearra( vector<int>&nums, int index){
        int starting = index+1;
        int ending = nums.size()-1;
        while(starting <=ending){
            swap(nums[starting], nums[ending]);
            starting++;
            ending--;
        }
       
       
    }  
};
int main(){
vector<int> a={1,2,3,4,5,6};
    A obj; int k =3;
    obj.reversearra(a, k);
     for(int i =0;i<a.size();i++){
          cout<<a[i]<<endl;
          }
    
}

/* upto index  for(int i =0;i<index/2;i++){
            swap(nums[i], nums[index-i-1]);
        }
        for(int i =0;i<nums.size();i++){
          cout<<nums[i]<<endl;
          }*/