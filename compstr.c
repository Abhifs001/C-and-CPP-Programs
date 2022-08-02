#include<stdio.h>
#include<conio.h>
int main(){

    char a[100];
    char b[100];
    printf("Enter the first string\n");
    gets(a);
    printf("Enter the second string\n");
    gets(b);

    
   int i=0;
  int check =1;
       
  while (a[i]!='\0' || b[i]!='\0')
  {
      if (a[i]!=b[i])
      {
       check=100;
          break;
          
      }
      i++; 
      
      
  }
  if (check ==100)
  {
       printf("The strings are not equal");
  }else 
  {
       printf("The strings are  equal"); 
  }
  
  
       
  
          
      }
      
      

         
       
    
    
     

    
    
    
