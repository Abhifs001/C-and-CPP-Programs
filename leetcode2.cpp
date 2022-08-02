#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:

int maxProfit(vector<int>&prices){
     vector<int>array;
        int dif;
int MaxProfit=0,Minprice=prices[0];
 
        for(int i=0;i<prices.size();i++){
            
            MaxProfit=max(MaxProfit, prices[i]-Minprice);
            Minprice=min(Minprice,prices[i]);

        }
         
                 return MaxProfit;
 
}


};

int main(){
    Solution a;
 vector<int>test={7,1,5,3,6,4};
 int finans= a.maxProfit(test);
printf("%d",finans);
    return 0;
}
