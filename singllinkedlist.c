#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
int data;
struct node *next;
}*start = NULL;
void insert();
void remov();
void traverse();

int main(){
    
    int n;
    char ch;
    printf("1. Inserting node\n");
    printf("2. Deleting node\n");
    printf("3. Traversing LL\n");


    do
    {
     printf("Enter the operation you want in Linked list\n");
    fflush(stdin);
    scanf("%d", &n);




    switch (n)
    {
    case 1 :
        insert();
        break;
    
    case 2:
        remov();
        break;
    
    case 3 :
        traverse();
        break;
    
    default:
    printf("Invalid input\n");
        break;
    }
    

    printf("Do you want to continue\n");
    fflush(stdin);
    scanf("%c", &ch);
    } while (ch == 'y'||ch=='Y');
    
    
}

void insert(){
    struct node *p; 
p=(struct node*)malloc(sizeof(struct node));

printf("Enter the element\n");
scanf("%d", &p->data);
// check if the node is first 

if (start== NULL)
{
    start = p;
    p->next=NULL;
}
else
{
    p->next=start ;
    start = p;
}



}

void remov(){
    struct node*p;
    // check if the LL is empty

    if (start!=NULL)
    {
        p=start;
        start= start ->next;
        printf("%d removed\n", p->data);
        free(p);
    }
    else
    {
        printf("LL is empty\n");
    }
    
}

void traverse(){
    struct node *p;
    // check if the LL is empty or not 

    if (start!=NULL)
    {
        p=start;
        while (p!=NULL)
        {
           printf("Element = %d\n", p->data);
           p=p->next;
        }
        
    }
    else
    {
       printf("LL is empty\n");
    }
    
}