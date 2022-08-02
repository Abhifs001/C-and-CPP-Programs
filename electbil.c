#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    int r;
printf("Enter the number of units\n");
scanf("%d",&n);
if (n<=100)
{
    printf("Electricity bill is Rs 200");
}else if(n>100&&n<=200)
{
    r=200 + (n-100)*4;
    printf("Bill is Rs %d",r);
}else if (n>200 &&n<=300)
{
    r=200 + 400+ (n-200)*5;
    printf("Bill is Rs %d",r);
}
else if (n>300)
{
    r=200 +400+500+ (n-100)*6;
    printf("Bill is Rs %d",r);
}





}