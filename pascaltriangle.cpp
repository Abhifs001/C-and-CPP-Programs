#include<iostream>
using namespace std;
int main(){
int i,j,coef=1;

for(i=0;i<33;i++){
    for(j=0;j<=i;j++){
        if(i==0 || j==0){
            coef =1;
        }else{
            coef = coef*(i-j+1)/j;
        }  if(i==3)cout<<coef;
    }//cout<<endl;
}


    
    
}