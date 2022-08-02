#include<iostream>
#include<vector>
#include<set>
using std::set;
using std::cin;
using std::cout;
using std::vector;
using std::endl;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>sortedArray;
        set<int>Set;
//merging the array 
        int i=0,j=0;
        
        while(i<nums1.size() && j<nums2.size()){

          
                if(nums1[i]<=nums2[j]){
                   sortedArray.push_back(nums1[i++]);

                }else{
                    sortedArray.push_back(nums2[j++]);
                } 
             
        }
        while(i<nums1.size()){
            sortedArray.push_back(nums1[i++]);
        }

        while(j<nums2.size()){
                   sortedArray.push_back(nums2[j++]);
         }

      
        // for(auto i:sortedArray){
        //    cout<<i;
        // }
        
        double median;
        int n = sortedArray.size();
        if(n%2!=0){
           median= sortedArray[n/2];
            cout<<median;
            return median;
        }
       else{
         median = (sortedArray[(n/2)-1] + sortedArray[n/2]);
        median/=2;
       }
cout<<median<<endl;
        
    }
};

int main(){
    Solution a;
    vector<int>nums1 ={1,1};
    vector<int>nums2= {1,2};
    a.findMedianSortedArrays(nums1, nums2);
}