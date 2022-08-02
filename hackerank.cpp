#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int sum=0;
        int y;
        int temp=x;
        if(x<0){
            return false;
        } else{
        while(temp!=0){
                y=temp%10;
            sum=sum*10+y;
            temp=temp/10;

        }
        if(sum==x){
            return true;
        }else{
            return false;
        }
    }
        
    }
};
int main(){
    Solution a;

    int test=123;
    if(a.isPalindrome(test)){
        cout<<"true";
        
    }else{
        cout<<"False";
    }

    return 0;
}