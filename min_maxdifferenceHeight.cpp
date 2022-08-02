//minimize the maximum difference between heights
//idea is to get the minimum element when we add k to whole array and maximum element when we subtract k from whole array thus---> tempmax-tempmin = minimum value 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
        // 1 15 10 ----> 7 9 4
        //
class Solution {
    public:
    int mini_Mdiff(vector<int>&num, int k){
        sort(num.begin(),num.end());
        int n = num.size();
        int ans= num[n-1]-num[0];
        int tempmin=num[0]+k, tempmax= num[n-1]-k;
        int currentmin= 0, currentmax=0;
        for(int i =1;i<n;i++){
            currentmin = min(num[i]-k, tempmin);// min while subtracting k from whole array
            currentmax = max(num[i-1]+k, tempmax);// max while adding k to whole array

            if(currentmin>=0){
                ans= min(ans, currentmax-currentmin);
            }
        }
        
return ans;
    }
};
int main(){
    Solution a;
    vector<int>arr={1,15,10};
    int ans = a.mini_Mdiff(arr,6);
    cout<<ans<<endl;
}