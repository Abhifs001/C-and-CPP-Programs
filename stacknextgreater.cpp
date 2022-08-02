#include<iostream>
#include<vector>
#include<map> 
using std::map;
using std::cout;
using std::cin;
using std::vector;
using std::endl;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //4 1 2 
        // 1 3 4 2 
        vector<int>answer;
        map<int,int>Mymp;
    for(int i =0;i<nums2.size();i++){
        for(int j=i+1;j<nums2.size();j++){
            if(nums2[j]>nums2[i]){
                if(nums2[j]>nums2[i] ){
                        Mymp.insert({nums2[i], nums2[j]});
                    }
            }
        }
    }
    
    // for(auto i=Mymp.begin();i!=Mymp.end();++i){
    //     cout<<i->first<<" "<<i->second<<endl;
    // }

 for(int i =0;i<nums1.size();i++){
        if(Mymp.find(nums1[i])!=Mymp.end()){
            answer.push_back(Mymp[nums1[i]]);

        }else{
            answer.push_back(-1);
        }
    }

// for(auto i:answer){
//      cout<<i;
// }
    
    return answer;
    
    }
   

    
};
int main(){
    Solution a;
    vector<int>test= {1,3,5,2,4};
    vector<int>test1= {6,5,4,3,2,1,7};
    a.nextGreaterElement(test, test1);
}