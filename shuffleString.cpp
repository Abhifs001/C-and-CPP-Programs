#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
// this question is shuffling the string according the array which contains the indices of the characters in string 

// basically it's all about rearranging the string 
// can be done using map but it will be more complex
//so use a string answer to store the corresponding letters 

//           c o d e l e e t 
  //         4 5 6 7 0 1 2 3
  //         0 1 2 3 4 5 6 7
using std::string;
using std::vector;
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
    string answer;
    answer.resize(s.length()) ;  
for(int i=0;i<indices.size();i++){
    answer[indices[i]]=s[i];
}

std::cout<<answer;
return s;

        
    }
};

int main(){
    Solution a;
    string Word = "codeleet";
    vector<int>indices= {4,5,6,7,0,2,1,3};
    string answer= a.restoreString(Word, indices);
  //std::cout<<answer<<std::endl;


}