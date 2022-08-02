#include<stdio.h>
#include<conio.h>
int main(){
    int a[10];
    int i,j,t;
    printf("Enter the elements\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 9-i; j++)
        {
            if (a[j]>a[j+1] )
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
            
        }
        
    } printf("Sorted array is\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n",a[i]);
    }
    
    
    
}
