#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<math.h>
using namespace std;
class Solution {
public:
   int reverse(int x) {
        int y;int  sum =0;
          
        while(x!=0){
            y=x%10;
            x=x/10;
            if(sum>INT32_MAX/10||  (sum==INT32_MAX/10 && y>7)){return 0;}
        if(sum<INT32_MIN/10||  (sum==INT32_MIN/10 && y<-8)){return 0;}
             sum=sum*10+y;
        }
        return sum;
    }
    
};
int main(){
    Solution a;
    int test= -2147483412;
    int answer= a.reverse(test);
    cout<<answer<<endl;
    return 0;

}