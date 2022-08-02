#include<stdio.h>
#include<conio.h>
void fabnaci();
int main(){
    fabnaci();
}
void fabnaci(){
    int n,sumn=0;

    int f,l,sum=0;
    f=0;
    l=1;
    printf("%d\n%d\n",f,l );
    for (int i = 2; i <= 8; i++)
    {
          sum=l+f;
           printf("%d\n", sum);
          
          
      f=l;
         l=sum;
    }
         
    
      
    

   
    
    
}