#include<stdio.h>
#include<conio.h>
int main(){
    int a[10],i=0,j;
    char ch;
     printf("Enter the elements\n");
        for(i=0;i<5;i++)
     
        scanf("%d",&a[i]);
       
        printf("Elements of array are\n");
        for(i=0;i<5;i++)
        printf("a[%d]=%d\n", i,a[i]);
         j=i;
        printf("Do you want to add another element in the last location(y or n)\n");
        fflush(stdin);
        scanf("%c", &ch);
        if(ch=='y'){
          
          printf("Enter the element you want to add at last location\n");
          scanf("%d", &a[j]);
        //printing the elements
        printf("The final elements are\n");
        for(j=0;j<=i;j++) 
        
        printf("Element a[%d]=%d\n",j,a[j]);
        }
        return 0;
   
 
  
  
       
}