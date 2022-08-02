// Online C++ compiler to run C++ program online
#include <iostream>
#include <bitset>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <regex>
using namespace std;

//  string removeLeadingzeroes(string s ){
//        const regex pattern("^0+(?!$)");

//     // Replaces the matched
//     // value with given string
//     s = regex_replace(s , pattern, "");
//     cout<<s;
//     return s;
// }
// int stringConversion(string s, vector<int>&arr) {
// 	// Write your code here.
//     string temp="";
//     for(int i=0;i<arr.size();i++){
//         string str = bitset<8>(arr[i]).to_string();
//           str = removeLeadingzeroes(str);
//         temp+=str;
//     }
//     if(temp==s){
//         return 1;
//     }
//     return 0;
// }
class Solution {
public:
    char findKthBit(int n, int k) {
        if(n==1){
            return '0';
        }
        string ans = "";
        ans = produceString(n, ans);
        cout<<ans<<endl;
        int l=0;
        while(l!=k)l++;
        cout<< 
        // return ans[l];
        
        
    }
    
    string produceString(int n, string ans){
        
        if(n==2){ 
            ans+="011";
            return ans;
        }
      string temp = invert(produceString(n-1, ans));
        reverse ( temp.begin(), temp.end());
        return( produceString(n-1, ans) + "1" + temp );
    }
        
    
    
    // invert function 
    string invert(string s){
        for(int i =0;i<s.length();i++){
            if(s[i]=='0'){
                s[i]='1';
            }else if(s[i]=='1'){
                s[i]='0';
            }
        }
        return s;
    }
  
    
};
int main()
{
    Solution a;
    a.findKthBit(3, 1);
}