#include<stdio.h>
#include<conio.h>
int main(){
    int sum,n,tem,x;
    printf("Enter the number to check whether it is pallindrome\n");
    scanf("%d", &n);
    tem=n;
    sum=0;
    while (tem!=0)
    {
        x=tem%10;
        sum=sum*10+x;
        tem=tem/10;

    }
    if(sum==n)
    {
        printf("pallindrome number\n");
        
    }else{
        printf("not a pallindrome number\n");
      
    }
      return 0;
    
    


}