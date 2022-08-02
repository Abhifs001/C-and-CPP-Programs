#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        // store the particular words of string in array
        vector<string>st;
      string temp = "";

      for(int i =0;i<s.size();i++){
          if(s[i]!=' '){
              temp =temp + s[i];

          }else{
              st.push_back(temp);
              temp="";
          }
      }st.push_back(temp);

      if(pattern.size()!=st.size())return false;

      unordered_map<char, int> m1;
      unordered_map<string,int>m2;

      for(int i =0; i<pattern.size();i++){
          if(m1[pattern[i]]!=m2[st[i]])return false;

          m1[pattern[i]]=i+1;
          m2[st[i]]=i+1;
      }     
       return true;
    }
};
int main(){
    Solution a;
    string g = "abba";
    string b= "dog cat cat dog";
        
int  ah = a.wordPattern(g,b);
   if(ah ){
       cout<<"true"<<endl;

   }else{
       cout<<"false"<<endl;
   }
    return 0;
}