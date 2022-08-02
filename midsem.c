/* c features
rich library 
modular / structured programming language  
assembly language (means both high and low level language, which can communicate with computer's hardware too)
operating system unix written in c 
gaming farmeworks written in C
portable language 
*/

/*structure of C programmes

documentation 
header files 
declaration of functions (if any )
global variable declaration 
main function in which other function are called 
user defined functions  




*/

#include<stdio.h>
#include<conio.h>
int main(){
 static  int abi[8];
 int loc; 
 int se;
   printf("Enter the element\n");
    for (int  i = 5; i < 8; i++)
    {
        scanf("%d", &abi[i]);
        
    }
    // display the elements 4

    //enter special element 
    printf("Enter the special location\n");
    scanf("%d", &loc);
    printf("Enter element there\n");
    scanf("%d", &se);
    abi[loc]=se;


    for (int  i = 0; i < 8; i++)
    {
        printf("Element a[%d]=%d\n", i ,abi[i]);
    }
    
    
}


