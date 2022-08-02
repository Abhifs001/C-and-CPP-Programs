#include<stdio.h>
int main(){
    //wap to print greatest number among three numbers
    int a,b,c;
    printf("Enter first number\n");
    scanf("%d", &a);
    printf("Enter second number\n");
    scanf("%d", &b);
    printf("Enter third number\n");
    scanf("%d", &c);
    if(a>b && a>c)
    printf("%d is greatest", a);
    if(b>a && b>c)
    printf("%d is greatest", b);
    if(c>a && c>b)
    printf("%d is greatest", c);
}