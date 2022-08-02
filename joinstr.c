#include<stdio.h>
#include<conio.h>

int main(){

    
 char a[100];
    char b[100];
  int i,j;
    printf("Enter first string\n");
    gets(a);
    
    printf("Enter the second string\n");
    gets(b);
    

   
for (  i = 0; a[i] !='\0'; i++)
{
   a[i]=a[i];

}
for ( j = 0; a[j]!='\0';  j++,i++)
{
      a[i]=b[j];
}
       printf("\nThe string after concatenation = %s\n",a); 
    return 0;

   
}