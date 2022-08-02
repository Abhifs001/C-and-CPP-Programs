 #include<stdio.h>
#include<conio.h>
int main(){
    int sum,x,tem,n;
 printf("Enter the number to check it is armstrong or not\n");
 scanf("%d",&n);
 
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
        printf("Armstrong number\n",n);
    }else
    printf("Not an armstrong number\n");
    return 0;
}
        