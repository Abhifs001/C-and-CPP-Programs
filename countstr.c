#include<stdio.h>
#include<conio.h>
int main(){
    char a[100];
    printf("Enter the string\n");
gets(a);
    int count=1;
    int c=0;
    while (a[c]!='\0')
    {
        c++;
    }
    
    for ( int i = 0; i < c; i++)
    {
        if (a[i]!=' ' && a[i+1]==' ')
        {
            count=count+1;
        }
        
        
    }
    printf("The no. of words in the string is ");
    printf("%d\n" ,count);
}