#include<stdio.h>
#include<conio.h>
int hcf(int, int );
void main(){
    int x,y;
    printf("Enter first number\n");
    scanf("%d",&x);
    printf("Enter second number\n");
    scanf("%d",&y);

   printf("HCF of %d and %d is %d\n", x,y, hcf(x,y));

}
int hcf(int a,int b){
    int t;
   
        if(b==0){
            return a;
        }else{
            t=a%b;
            return hcf(b,t);
       

    }
    
}
