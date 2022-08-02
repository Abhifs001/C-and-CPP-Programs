#include<stdio.h>
#include<conio.h>
struct student
{
    char name[12];
    int RN;
};

int main(){
    struct student s;
    printf("Enter name\n");
    scanf("%s", &s.name);
    
    printf("Enter roll no\n");
    scanf("%d", &s.RN);

    // printing the data 

    printf("Name = %s\n", s.name);
    printf("roll no = %d", s.RN);


}