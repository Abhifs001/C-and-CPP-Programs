#include<stdio.h>
#include<conio.h>
void main(){
    float l,b,a;
   
    printf("Enter the length and breadh\n");
    scanf("%f%f",&l,&b);
     a=(float)l*b;
    printf("Area = %f ", a);
    getch();
}