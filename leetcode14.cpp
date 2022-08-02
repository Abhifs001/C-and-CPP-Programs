#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>&intervals) {
         sort(intervals.begin(), intervals.end());
          vector<vector<int>>answer;
          int c=0;
          answer.push_back(intervals[0]);
        for(int i =1;i<intervals.size();i++){
            if(intervals[i][0]<=answer[c][1]){
                if(intervals[i][1]>=answer[c][1])

                answer[c][1]=intervals[i][1];
                
            }else{
                ++c;
                answer.push_back(intervals[i]);
            }


        }

        
        return answer;
    }
};
int main(){
    Solution a;
    vector<vector<int>>test= { {1,3},
                                {8,10},
                                {2,6},
                                {15,18}
                                };

    vector<vector<int>>answer= a.merge(test);
for(int i = 0;i<answer.size();i++){
    for(int j=0;j<answer[i].size();j++){
        cout<<answer[i][j]<<" ";
     
    }
    cout<<endl;

}


return 0;
    
}