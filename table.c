#include<stdio.h>
#include<conio.h>
int main(){
   
    //table
    int n;
    printf("Enter the number print its table\n");
    scanf("%d", &n);
    for(int i=1;i<=10;i++)  

    printf( "%d*%d=%d\n",n,i,n*i);
    return 0;
    getch();
}