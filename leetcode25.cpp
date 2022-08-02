#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>arr(52,0);

        int len = 0;
        int check = 0;

        for(int i = 0;i<s.length();i++){
            if(s[i]>=65 && s[i]<=90){
                arr[s[i]-65]++;
            } if(s[i]>=97 && s[i]<=122){
                arr[s[i]-97+26]++;
            }
        }


        for(int i = 0;i<arr.size();i++){
            if (arr[i]%2==0){
                len = len+arr[i];
            }if(arr[i]%2!=0){
                len=len+arr[i]-1;
                check =1;
            }
        }
        if(check==1)len++;
        return len;
        
    }
};
int main(){


    Solution a;
    string test = "abccccdd";
   int answer =  a.longestPalindrome(test);

   cout<<answer<<endl;


   


}