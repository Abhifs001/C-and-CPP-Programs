//Find Duplicate characters in string
/* Situation - there are repeated characters 
  Task -    to find there frequency
  action - find their frequency and remove those with frequency >1
  result - duplicate char removed
*/
//approach use a hashtable and maintain the frequency of chars
// return a new string which stores element with freq = 1 but here the space complexity is more thus we have to find its allternative
// we have simply override the given string
#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>Freq_Record(26,0) ;
       string answer="";
        for(int i =0;i<s.length();i++){
           Freq_Record[s[i]-97]++;
            if(Freq_Record[s[i]-97]==1){
              answer.push_back(s[i]);
            }
       }
        for(int i =0;i<s.length();i++){
           cout<<Freq_Record[i]<<endl;
            //if(Freq_Record[s[i]]==
       }
//cout<<answer<<endl;
return answer;
        
    }
};
int main(){
    Solution a;
    string s = "bcabc";
    string ans= a.removeDuplicateLetters(s);
    cout<<ans<<endl;
    return 0;

}