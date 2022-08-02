#include<stdio.h>
#include<conio.h>
int main(){
int a[10];
int i;
printf("Enter the elements of array\n");
for(i=0;i<=9;i++)
scanf("%d", &a[i]);
printf("Elements of the array are\n");
for(i=0;i<=9;i++)

printf( "a[%d]= %d\n", i,a[i]);

}