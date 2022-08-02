#include<stdio.h>
#include<conio.h>
int main(){
    int a,b;
    int i,n;
    printf("Enter the numbers between which you want to print prime numbers\n");
    scanf("%d%d",&a,&b);
    printf("prine numbers between %d and %d are\n",a,b);
for(n=a;n<=b;n++){
    for ( i = 2; i <=n; i++)
    {
        if (n%i==0)
        {
            break;
        }
           
    }

    if (n==i)
        {
            printf("%d\n",n);
        }
}
        return 0;
}