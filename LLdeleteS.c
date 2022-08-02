#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};

void deleteS(struct node *start, struct node *p);
void display(struct node*start,struct node *p);

int main(){
    struct node *start=NULL, *p;
    char ch;

    do
    {
        p=(struct node *)malloc(sizeof(struct node));
        printf("Enter the element\n");
        scanf("%d", &p->data);
        fflush(stdin);
        //check if the node is first or not

        if (start==NULL)
        {
            start = p;
            p->next=NULL;

        }
        else
        {
            p->next=start;
            start =p;
        }
        printf("Do you want to continue\n");
        scanf("%c", &ch);
        fflush(stdin);
        
    } while (ch=='y'||ch=='Y');
    // call display function 
    display(start, p);

    // call deletion of specified node
   deleteS(start, p);

    // call display function again 
    display(start, p);
    
}

void display(struct node *start, struct node*p){

   //check first if the linked list is empty

    printf("Element in the linked list are\n");

    if (start ==NULL)
    {
        printf("Linked list is empty\n");

    }
    else
    {
        p=start;
        while (p!=NULL)
        {
            printf("element = %d\n", p->data);
            p=p->next;
        }
        
    }
    
}

void deleteS(struct node *start, struct node *p){
    struct node*q;
    int n;
    printf("Enter the element which you to delete\n");
    scanf("%d", &n);
    q=start;
    while (q->data!=n)
    {
        p=q;
        q=q->next;
        
    }
    p->next=q->next;
    free (q);

    
}