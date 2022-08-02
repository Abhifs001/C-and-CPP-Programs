#include<stdio.h>
#include<conio.h>
int power(int ,int );
void main(){
    int n;
    
    int p;

    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Enter the power\n");
    scanf("%d",&p);

    //result
    printf(" %d raised to power %d is %d\n", n,p,power(n,p));
}
int power(int x,int y){
    if (y==0)
    {
        return 1;
    }else{
        return x*power(x,y-1);
    }
    
}