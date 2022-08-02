#include<iostream>
#include<vector>
#include<set>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>answer;
        set<int>s1;
        set<int>s2;
        for(int i =0;i<nums1.size();i++){
            s1.insert(nums1[i]);
            
        }
        for(int i =0;i<nums2.size();i++){
            if(s1.find(nums2[i])!=s1.end()){
             s2.insert(nums1[i]);

            }
           
        }
         for(auto p : s1){
                answer.push_back(p);
                
            }

  return answer;
    }

    vector<int> Union(vector<int>& nums1, vector<int>& nums2){
        vector<int>answer;
        int l=0;

        while(l<nums1.size() && l<nums2.size()){
            
        }
    }
};
int main(){
    Solution a;
    vector<int>A1={1,2,2,1};
    vector<int>A2 = {2,2};

    //output - union  = 1,2,4,6,7 intersection = 2,4
    vector<int>answer = a.intersection(A1,A2);

    for(int i =0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
}