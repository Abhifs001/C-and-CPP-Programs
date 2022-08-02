#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,a,b;
    int check;
    printf("Enter the numbers\n");
    scanf("%d%d",&a,&b);

 for ( i = a; i < b; ++i)
 {
   
     for (j = 2; j<=i ;j++)
     {
         if (i%j==0)
         {
             
             break;
             
         }
          
        
          
         
         
         }
         if (i==j)
         {
            printf("%d\n",i);
       
         }

        
     
          
 
          
 }
 
     
   return 0;

}