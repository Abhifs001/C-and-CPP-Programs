#include<stdio.h>
#include<conio.h>
int isprime(int,int);
int main(){
    int a,b;
    printf("Enter the numbers between which you want to print prime numbers\n");
    scanf("%d%d", &a,&b);
    isprime(a,b);
}
int isprime(int x,int y){
    int i,j;
    int flag;
    
    printf("Prime number between %d and %d are\n",x,y);
    for ( i = x; i <=y; i++)
    { 
       for ( j = 2; j<=i; j++)
       {
           if (i%j==0)
           {
              break;  
           }
           
       }
       if (j==i)
       {
           printf("%d\n",i);
       }   
    }    
}