#include<stdio.h>
#include<conio.h>
struct structarray
{
    int RN;
    char name[20];
};
void main(){
    struct structarray s1[5];
    int i;
    for (
         i = 0; i < 5; i++)
    {
        printf("Enter name\n");
    gets(s1[i].name);
    printf("Enter roll no.\n");
    scanf("%d", &s1[i].RN);
    fflush(stdin);

    }
    
    

    //printing the records 
    for ( i = 0; i < 5; i++)
    {
        printf("Name= %s Roll no. = %d\n", s1[i].name, s1[i].RN);
    }
    

    

    
}
