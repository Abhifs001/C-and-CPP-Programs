//wap to find factorial using recursion
#include<stdio.h>
#include<conio.h>
int   fact(int x);
int main(){
 int  n,res;
    printf("Enter the number\n");
    scanf("%d", &n);
res=fact(n);
   
     printf("The factorial is %d\n", res);
     return 0;

}
int fact(int x){

    if(x==0){
        return 1;

    } else
 
     return (x*fact(x-1));
    
}