#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include <algorithm>  
using namespace std;
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        string sub;
        vector<string>answer;
       
        unordered_map<string,int>m(0);
        
        for(int i =0;i<s.size();i++){
           
          m[ s.substr(i,10)]++;

          if( m[ s.substr(i,10)]==2)answer.push_back( s.substr(i,10));
         //cout<<m[temp]<<"  "<<temp<<endl;
       }
      
       
     
       return answer;

        
    }
};
int main(){
    Solution a;
    string test= "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
     vector<string>ans=a.findRepeatedDnaSequences(test);

for(int i =0;i<ans.size();i++){
         cout<<ans[i]<<endl;
    }
     

  

}