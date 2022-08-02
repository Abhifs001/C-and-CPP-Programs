#include<stdio.h>
#include<conio.h>
void movezero(int []);
void main(){
int i;
    int a[5];
    printf("Enter the elements of array\n");
    for ( i = 0; i < 5; i++)
{
        scanf("%d", &a[i]);
    }
    printf("Moving the zeroes to the end side of the array.....\n");
    movezero(a);
     
    for ( i = 0; i < 5; i++)
    {
        printf("\t%d",a[i]);
       
        
    }
}
    void movezero(int A[5]){
        int i,j=0;
        for ( i = 0; i < 5; i++)
        {
          
            if (A[i]!=0)
            {
                A[j++]=A[i];
                
            }

            while(j<5){
                A[j++]=0;

            }
         
            
        }
        

    }
    
    

