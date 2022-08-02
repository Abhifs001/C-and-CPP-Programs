#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;// top of stack end declared

}*tos=NULL;
void push();
void pop();
void traverse();
int main(){
int n;
char ch;
// options for for user inputs
printf("Welcome to Dynamic stack!\n"); 
printf("---------Main menu-------\n"); 
printf("1. PUSH\n"); 
printf("2. POP\n"); 
printf("3. Traversing\n"); 

do
{
    printf("Enter operation you want\n");
    fflush(stdin);
    scanf("%d", &n);
switch (n)
{
case 1:
    push();
    break;
case 2:
    pop();
    break;
case 3:
    traverse();
    break;
default:
    printf("Invalid input\n");
    break;
}
printf("Do you wish to continue\n");

fflush(stdin);
scanf("%c", &ch);

    
} while (ch=='y'||ch=='Y');

}
// push definition

void push(){

    struct node *p;
    p=(struct  node*)malloc(sizeof(struct node));
    printf("Enter the element\n");
    scanf("%d", &p->data);
    // check if the node is first or not

    if (tos==NULL)
    {
        tos= p;
        p->next=NULL;
    }else{
        p->next=tos;
        tos = p;
    }
    
   
    

}
//pop definition

void pop(){
    struct node *p;
    if (tos==NULL)
    {
        printf("stack is empty\n");
    }
    else
    {
        p=tos;
        tos=tos->next;
        printf("%d is removed\n", p->data);
        free (p) ;

    }
    
}

void traverse(){
    struct node *p;
    if (tos== NULL)
    {
        printf("Stack is empty\n");
    }else{
        p=tos;
        while (p!=NULL)
        {
            printf("Element = %d\n", p->data);
            p=p->next;
        }
        
        
    }
    
}