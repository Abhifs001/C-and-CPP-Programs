#include<stdio.h>
#include<conio.h>
int main(){
    int a[5];
    int i;
    int max;
    int min;
    
    printf("Enter the elements of array\n");

    for(i=0;i<5;i++){
         max=a[0];//set min and max to arr0
           min=a[0];
       scanf("\n%d",&a[i]); }
    
    //largest element
       for(i=1;i<5;i++){
            
           if(a[i]>max){ // compare max with each 
               max=a[i];// if greater than max is found, set max to that number  
           }
           }
       
       printf("largest number is ");
       printf("%d",max);

       //smallest element 
       for(i=1;i<5;i++){
         
           if(a[i]<min){
               min=a[i];
           }
           }
            printf("\nsmallest number is ");
       printf("%d\n",min);
   

    }
