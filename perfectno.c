//number is perfect if the sum of its factors is equal to it
#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the number to check it is perfect or not\n");
    scanf("%d",&n);
    for ( i = 1; i <=n/2; i++)
    {
        if (n%i==0)
        {
            sum=sum+i;
        }
        
    }
    if (sum==n)
    {
        printf("Number is perfect\n");
    }else{
        printf("Number is not perfect\n");
    }

    return 0;
    
}