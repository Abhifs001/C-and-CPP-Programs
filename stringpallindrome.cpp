//Pallindrome Validation
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
//Brute force approach is that use an array and insert all the elements except special characters and space then through loop validate the string as a pallindrome
class Solution {
public:
    bool isPalindrome(string s) {
    vector<char>temp;
       // temp.resize(s.length());
         //   s.erase(remove(s.begin(), s.end(), ' '), s.end());
        for(int i =0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z'  || s[i]>='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9'){
               temp.push_back(tolower(s[i]));
            }
        } int n = temp.size();
        for(int i =0;i<n/2;i++){
            if(temp[i]!=temp[n-1-i]);
            return false; 
        }
        return true;
    }
};
int main(){
    Solution a;
    string s= "A man, a plan, a canal: Panama";
    if(a.isPalindrome(s))cout<<" Yes";
    else cout<<"No";

    return 0;

}