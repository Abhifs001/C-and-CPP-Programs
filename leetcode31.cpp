
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
// update string to new string 
  string updatestring(const string &s){
      string newstring = "@";
      for(int i =0;i<s.size();i++){
          newstring=  newstring+"#" + s.substr(i,1);
      }
      newstring= newstring+"#$";

      return newstring;
  }

    string longestPalindrome(string s) {
        string Q = updatestring(s);
    
vector<int>P(Q.length(),0);

    
      

        // define center and right : center is to check elements around it and right is limit for giving minimum value to array of longest pallindrome frequencies

        int c=0,r=0;

        for(int i =1;i<Q.size()-1;i++){
            int Mirrorofi= c-(i-c);   // find the center element -> act as mirror 

            //check if right greater than current position then we can have atleast some known value for array p

            if(r>i){
                P[i]=min(P[Mirrorofi],r-i);
            }
            // now expand around center and check how many characters are equal

            while(Q[i+1+P[i]]==Q[i-1-P[i]]){
                P[i]++;

            }

            // if there is possibility that we can have more known values than update center and right pointer
  
            if(i+P[i]>r){
                c=i;
                r=i+P[i];

            }
            

        }
// now let us find the length of longest pallindrome in S and center index 
int maxpallin=0;
int centerindex=0;



for(int i =1;i<Q.size()-1;i++){
    if(P[i]>maxpallin){
        maxpallin=P[i];
        centerindex=i;
    }

}
        return s.substr( (centerindex-1-maxpallin)/2, maxpallin);
    }
};

int main(){
    Solution a;
    string test="babad";
    string ans = a.longestPalindrome(test);
 cout<<ans;

return 0;
}