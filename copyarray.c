#include<stdio.h>
#include<conio.h>
int main(){
    
    
    char p[100];
    char q[100];
       int i=0;

    printf("Enter the string you want to copy\n");
    gets(p);
    printf("The array was p = %s\n",p);
   // printf("Copying the array into another array....\n");

 
     while (p[i-1]!='\0'){
         
        q[i]=p[i];
        i++;
    
     } 
    printf("The copied aray is c = %s\n",q);
    
}