#include<stdio.h>
#include<conio.h>
int hcf(int f,int l);
void main(){
    int x,y,res;
    printf("Enter first number\n");
    scanf("%d",&x);
    printf("Enter second number\n");
    scanf("%d",&y);
   res= hcf(x,y);
    printf("HCF of %d and %d is %d\n", x,y,res);
}
int hcf(int f,int l){
    int max, smaller;
    if (f<l)
    {
        smaller=f;
    }else{
        smaller=l;
    }

    for (int  i = 1; i <=smaller; i++)
    {
        if (f%i==0 && l%i==0)
        {
            max=i;
        }
        
    }
    
    return max;
}