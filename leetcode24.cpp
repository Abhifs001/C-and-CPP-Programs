#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        string answer = "";
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
int carry = 0;
        int i = 0;  
        while(i< max(num1.length(), num2.length()) ){
            int f_digit= 0;
            int s_digit = 0;

            if(i< num1.length()) f_digit =  num1[i]-'0';
            if(i < num2.length()) s_digit= num2[i]-'0';

            int sum = f_digit+ s_digit+carry;

           if (sum>=10){
               answer = answer+ to_string(sum%10);
                        carry =1;
           }else {

               answer =answer+ to_string(sum);
               carry=0;
           }

               
         i++;
        } if(carry==1)
    answer= answer+"1";
        reverse(answer.begin(),answer.end());

      return answer ; 
         
    }
};

int main(){
    Solution a;
    string w = "1";
    string x = "9";

    string ans = a.addStrings(w,x);
    cout<<ans<<endl;

    return 0;


}