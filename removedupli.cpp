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
#include<algorithm>
#include<map>
using namespace std;
class Solution {
public:
    string removeDuplicateLetters(string s) {
        map<char,int>Freq_Record;
         sort(s.begin(), s.end());
       string answer="";
        for(int i =0;i<s.length();i++){
           Freq_Record[s[i]]++;
           if(Freq_Record[s[i]]==1){
               answer.push_back(s[i]);
           }
        }
       
        cout<<answer<<endl;
    }
};
int main(){
    Solution a;
    string s = "cbacdcbc";
   string ans= a.removeDuplicateLetters(s);
   
    return 0;

}