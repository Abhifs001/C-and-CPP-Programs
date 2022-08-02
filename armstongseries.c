#include<stdio.h>
#include<conio.h>
int main(){
    int sum,x,tem,n;
    for ( n = 1; n< 1000; n++)
    {
        tem=n;
        sum=0;
        while (tem!=0)
        {
            x=tem%10;
            sum=sum+x*x*x;
            tem=tem/10;
        }
        if (sum==n)
    {
        printf("%d\n",n);
    }
        
    }
    
    
    return 0;
    
}