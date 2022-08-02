/*Situation- Problem is based on String based problem rooted upon phone dialpad
task is to return all possible strings that can represent a number
action- 
1. Backtracking- 
For first character of digits- you make combinations of first character of string 1 with each character string 2 
if i == digit.size backtrack and increase index 
and repeat process


Result- Array of strings is returned by the function

*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> letterCombinations(string digits) {
    
        if(!digits.size())return {};
   vector<string>answer;
       const vector< string> Dialpad_letters= {    
                                    "0", 
                                    "1",
                                "abc",
                                "def",
                                "ghi",
                                "jkl",
                                "mno",
                                "pqrs",
                                "tuv",
                                "wxyz"   }; 
         
            string Temp_str;
            BackTrack(Temp_str, 0,digits, Dialpad_letters, answer);//calling backtrack function
            return answer;

    }
    void BackTrack(string Temp_str, int idx,  string Digits,  vector<string>Dialpad_letters, vector<string>&answer ){
        
        if(idx==Digits.size()){ // base case if index= digit size for example in "23" if index = 2 which is digit's size then store the temporary strong 
            answer.push_back(Temp_str);
            return ;
        }
            int pos=Digits[idx]-'0'; // example Digit[0]=2 -'0' makes pos = 2 so position =2
            for(char c: Dialpad_letters[pos]){
                BackTrack(Temp_str+c, idx+1, Digits, Dialpad_letters, answer);  //call for temp ="a" is made 
                // then again for index = 1 pos= digits[1]-'0' = 3 thus temp will store "ad"  
            }
    }
};
int main(){
    Solution a;
    string test= "23";
    vector<string> answer= a.letterCombinations(test);
for(string s:answer){
    cout<<s<<endl;
}

return 0;
}