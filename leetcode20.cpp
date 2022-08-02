#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
               sort(intervals.begin(),intervals.end(),[](vector<int>&a, vector<int>&b){
            // return a[0]==b[0] ? a[1]<b[1] : a[0]<b[0];
            return a[1]<b[1];
        });
             int count=0; int prev= intervals[0][1];
             if(intervals.size()== 1){
                 return 0;
             }   
                for(int i=1;i<intervals.size();i++){
                  // if(intervals[i]==intervals[i-1]) return intervals.size()-1;
                    int start = intervals[i][0];
                
                    if(start < prev){ 
                      
                        prev = min(intervals[i][1],prev);
                        
                        count++;
                        
                    }
                 else{
                        prev = intervals[i][1];

                    }
      
             
                }
                return count;
    }
    
};
int main(){
    Solution a;
        vector<vector<int>>test= {{1,2},
                                    {2,3},
                                    {3,4},
                                    {1,3}};
               
int ans = a.eraseOverlapIntervals(test);
cout<<ans<<endl;
return 0;

                
}