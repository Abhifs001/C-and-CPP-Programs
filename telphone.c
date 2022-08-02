#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    float r;

    printf("Enter the number of calls\n");
    scanf("%d",&n);
    if ( n<=100 )
    {
        printf("The bill amount is Rs 500");
    }
    else if (n>100&&n<=200)
    {
        r=500+ (n-100)*0.5;
        printf("The bill amount is Rs %f\n",r);
        
    }
    else if (n>200 &&n<=400)
    {
            r=500+ 50+ (n-200)*0.6;
      printf("The bill amount is Rs %f\n",r);
    }
    else if (n>400)
    {
        r=500+ 50+120+(n-400)*1.0;
        printf("The bill amount is Rs %f\n",r);
    }
    
   
    
}