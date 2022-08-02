#include<stdio.h>
#include<conio.h>
int main(){
    int i,j;
    int n;
    
    printf("Enter the number\n");
    scanf("%d",&n);
printf("The pattern is\n");
    for ( i = 1; i <=n; i++)
    {
        
        for ( j= 1; j <=n-i; j++)
        {
                printf(" ");

        }
        for ( j = 1; j <=i; j++)
        {
           
            printf(" %d",j-1);
        }
        printf("\n");
        
            }
    
}