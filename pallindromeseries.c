#include<stdio.h>
#include<conio.h>
int main(){
    int sum,tem,n,x;
for(n=1;n<=100;n++) {
    tem=n;
    sum=0;
    while (tem!=0)
    {
        x=tem%10;
        sum=sum*10+x;
        tem=tem/10;      
    }

    if (n==sum)
    {
        printf("%d\t",n);
    }
    
}

return 0;
    
}