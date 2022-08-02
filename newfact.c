#include<stdio.h>
#include<conio.h>
int factorial(int n);
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d", &n );
    int ans= factorial(n);
    printf("Factorial of the given number is %d", ans);
    return 0;
    
}
int factorial(int n){
    if(n==0){
        return 1;

    }else{
        return n*factorial(n-1);
    }
}