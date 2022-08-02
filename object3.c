#include<stdio.h>
#include<conio.h>
void main(){
    int a[6],i,j;
    char ch;
        printf("Enter the elements\n");
        for(i=0;i<5;i++){
        scanf("%d",&a[i]); }



        printf("Elements of array are\n");


        for(i=0;i<5;i++){
        printf("a[%d]=%d\n", i,a[i]);}

        printf("Do you want to add another element in the first location(y or n)\n");
        fflush(stdin);

        scanf("%c", &ch);

        if(ch=='y'){
            
          for(j=i;j>0;j--){
         a[j]=a[j-1]; }
         printf("Enter the element you want to add at first location\n");
scanf("%d", &a[0]);
        
} 
         
        
         
        //printing the elements
        
        printf("The final elements are\n");
        
        for(j=0;j<=i;j++){
        printf("Element a[%d]=%d\n",j,a[j]);
        }
        getch();
}