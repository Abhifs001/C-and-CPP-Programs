#include<stdio.h>
#include<conio.h>
int main(){
 char a[100], b[100];

 //input 
 printf("Enter the first string\n");
 gets(a);
 printf("Enter the second string\n");
 gets(b);
 int i=0,j=0;
 //join the string

 while (a[i]!='\0')
 {
     i++;
 }
 while (b[j]!='\0')
 {
     a[i]=b[j];
     j++;
     i++;
 }
//print output
printf("The string after concatenation is %s", a);
return 0;

}