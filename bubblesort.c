#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,t;
    int a[10];
    printf("Enter the elements of array\n");
    for ( i = 0; i < 10; i++)
    { 
        scanf("%d", &a[i]);
        /* code */
    }
     
     //binarysort
     for (i = 0; i < 10; i++)
     {
         for (j = 0; j < 9-i; j++)
         {
                    if (a[j]>a[j+1])
             {
                 t=a[j];
                 a[j]=a[j+1];
                 a[j+1]=t;

             }
             
             /* code */
         }
         
         /* code */
     }

 printf("The sorted array is\n");
     for ( i = 0; i < 10; i++)
     {
        
         printf("a[%d]=%d\n",i,a[i]);
         
         
     }   
     //searching the elements through binary search

     
     
    
}