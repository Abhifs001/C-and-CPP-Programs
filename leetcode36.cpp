#include<iostream>
#include<map>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
   
       int start=0; int end=0;
        int ans=0;
        map<char,int>mp;
    if(s.size()==0)return 0;
        
        while(end<s.length()){
            char c = s[end];

            if(mp.find(c)!=mp.end()){
                if(mp[c]+1>start){
                    start = mp[c]+1;
                }
            }
            mp[c]=end;

            ans = max(ans,end-start+1);

            end++;
        }
        
            
       
        
        return ans;
    }
};
int main(){
    string test = "abcabcbb";
    Solution a;
   int answer =  a.lengthOfLongestSubstring(test);
   cout<<answer<<endl;

   return 0;

}