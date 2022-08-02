#include<stdio.h>
#include<conio.h>
int main(){
    char s[20];
    int c=0;
    printf("Enter the string to calculate length\n");
    gets(s); 
   
    printf("The string is %s\n", s);
    
    while(s[c]!='\0'){
    
        c++;
    
    }

    printf("The string length is %d " ,c);
    return 0;

}
