#include<stdio.h>
#include<conio.h>
int main(){
    int n;
     int a[10],i,j;
    char ch;
  
        printf("Enter the elements\n");
        for(i=0;i<5;i++)
        scanf("%d",&a[i]);

        printf("Elements of array are\n");
        for(i=0;i<5;i++)
        printf("a[%d]=%d\n", i,a[i]);
        printf("Do you want to add another element in the any location(y or n)\n");
        fflush(stdin);
        scanf("%c", &ch); 
        if(ch=='y'){
            printf("Enter the location where you want to insert element\n");
    scanf("%d",&n);
          for(j=i;j>n;j--){
         a[j]=a[j-1];}
          printf("Enter the element you want to add at any location\n");        
         scanf("%d", &a[n]); 

         
        //printing the elements    
        printf("The final elements are\n");  
        for(j=0;j<=i;j++)
        printf("Element a[%d]=%d\n",j,a[j]);
        }
        return 0;
}