#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,a[n];
    int temp; 
    printf("Give the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("\n%d", &a[i]);}
          printf("The orignal array was\n");
    for(i=0;i<n;i++){
      
        printf("a[%d]=%d\n", i,a[i]);}

        //reverse the element
        
        for(i=0;i<n/2;i++){
          
            temp =a[i];
            a[i]=a[n-1-i];
            a[n-1-i]=temp;
            
         
    

        }
         printf("The array in the reverse order is\n");
        for(i=0;i<n;i++){
            printf("a[%d]=%d\n", i,a[i]);

        }
        
        return 0;
    
}