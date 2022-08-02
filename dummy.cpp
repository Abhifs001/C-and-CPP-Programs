#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<bits/stdc++.h>
using std::cout;using std::max;
using std::string;
using std::vector;
// class Solution {
// public:
//     int maxProduct(vector<string>& words) {
//         vector<int>Product;
//         int answer= INT_MIN;
//         //std::cout<<isStringcommon(words[0], words[2]);
//         for(int i =0;i<words.size();i++){
//             string temp=words[i];
//              for(int j = 0;j<words.size();j++){
//                 if(isStringcommon(temp, words[j])){
//                     int len1= temp.length();
//                     int len2= words[j].length();
//                    answer= max(answer, (len1*len2));

//                 }
//              }

//         }
//         if(answer==INT_MIN)return 0;

//         return answer;
        
//     }

//     bool isStringcommon(string a, string b){
//         std::set<char>S;
//         for(int i=0;i<a.length() ;i++){
//             S.insert(a[i]);
//         }
//         for(int i=0;i<b.size();i++){
//             if(S.find(b[i])!=S.end()){
//                 return false;
//             }

//         }
//         return true;
//     }
// };
class Solution {
public:
    int maxProduct(vector<string>& words) {
        
        
    }
};
int main(int argc, char const *argv[])
{
    vector<string>test= {"a","aa","aaa","aaaa"};
    Solution a;
    int answer = a.maxProduct(test);
cout<<answer<<std::endl;
    return 0;
}
