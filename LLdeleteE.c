#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void deleteE(struct node*start);
void display(struct node*start, struct node *p);

int main(){
    char ch;

    struct node *start=NULL, *p;
    do
    {
        p=(struct node *)malloc(sizeof(struct node));
        printf("Enter the element\n");
        scanf("%d", &p->data);
        fflush(stdin);
        // check if the LL is empty

        if (start == NULL)
        {
            start= p;
            p->next=NULL;
        }else{
            p->next=start;
            start = p;
        }

        printf("Do you want to continue\n");
        scanf("%c", &ch);
        fflush(stdin);
        
    } while (ch=='y'||ch=='Y');
    // call the display function 

    display(start, p);

    // deletion at the end
    deleteE(start);

    // display again
    printf("After deleltion at end\n");
    
    display(start, p);
}

void display(struct node *start, struct node*p){
    
    printf("Elements of LL are\n");
    if (start ==NULL)
    {
        printf("Linked list is empty\n");
    }else{
        p=start;
        while (p!=NULL)
        {
            printf("element = %d\n", p->data);
            p=p->next;

        }
        
    }
    
}

// deletion function defintion 

void deleteE(struct node *start){
    struct node *p, *q;

   if (start!=NULL)
   {
        p=start;
    while (p->next!=NULL)
    {
        q=p;
        p=p->next;    
    }
    q->next=NULL;
    free(p);

}
   else
   {
       printf("Linked list is empty\n");
   }
   
    
}