#include<stdio.h>
#include<conio.h>
int  facto(int );
void main(){
    int n,a,r;
    printf("Enter the value of n and r\n");
    scanf("%d%d", &n,&r);
a= facto(n)/(facto(n-r)*facto(r));  
printf("The value of nCr is %d\n", a);  
}
int  facto(int k){
    
    int fab=k;
    int i;
    for ( i = k-1; i >0; i--)
    {
        fab=fab*i;
    }
    return fab;
    
}