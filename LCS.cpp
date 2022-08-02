#include<iostream>
using namespace std;
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int m = text1.length();
        int n = text2.length();
        
        //dynamic programming using table 
        int table[m+1][n+1];
        for(int i =0;i<=m;i++){ // row 1 = 0
            table[i][0]=0;
        }
        for(int j=0;j<=n;j++){
            table[0][j]=0;  // column 1 = 0 
        }
        int i, j ;
        for(i =1;i<=m;i++){
            for(j=1;j<=n;j++){ 
                 //if (i == 0 || j == 0) table[i][j] = 0;
                if(text1[i-1]==text2[j-1]){
                    table[i][j] = 1+ table[i-1][j-1];
                }else{
                    table[i][j] = max(table[i-1][j], table[i][j-1]);
                } 
            }
        }
       return table[m][n];
        
    }
};

int main(){
    Solution a;
    string p = "absbdab";
    string b = "bdcaba";
    int answer = a.longestCommonSubsequence(p,b);
    cout<<answer;
    return 0;
}