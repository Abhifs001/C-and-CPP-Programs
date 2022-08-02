#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data ;
    struct node *prev;
    struct node *next;

}*start =NULL, *last=NULL;
void insert();
void remov();
void display();
int main(){
    int n;
    char ch;
    printf("Welcome to doubly linked list\n");
    printf("1. Insertion \n");
    printf("2. Deletion\n");
    printf("3. Traversal \n");

    do
    {
        printf("Enter operation you want\n");
       fflush(stdin);
        scanf("%d",&n );

        switch (n)
        {
        case 1:
            insert();
            break;
        
        case 2:
            remov();
            break;
        
        case 3:
           display();
            break;
        
        default:
        printf("Invalid input\n");
            break;
        }

        printf("Do you want to continue\n");
        fflush(stdin);
        scanf("%c", &ch);


    } while (ch=='y'||ch=='Y');
    
}
void insert(){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    printf("Enter the element\n");
    scanf("%d",    &p->data);
    // check if the node is first agar first hai to agade aur pichwade ko null kardo
    if (start==NULL)
    {
       last= start=p;
        p->next=NULL;
        p->prev=NULL;
    }// agar pehla nahi hai to previous mein changes honge ya phir next mein jaha se karna ho karna 
    else
    {
         p->prev=NULL;
        p->next=start;
        start->prev=p;
        start= p;
    }
    

}
// check empty to nahi hai
//then, check pehla node to nahi hai
void remov(){
    struct node*p;
    if (start==NULL)
    {
        printf("Doubly linked list is empty\n");

    }
    else if(start->next==NULL)
    {
        p=start;
        start=last=NULL;
       
        
    }else{
        p=start;
        start=start->next;
        start->prev=NULL;
    }
     printf("%d removed\n", p->data);
        free(p);
    
}
void display(){
    struct node*p;
    if (start==NULL)
    {
        printf("Doubly linked list is empty\n");
    }
    else
    {
      p=start;
      while (p!=NULL)
      {
          printf("Element = %d\n", p->data);
          p=p->next;
      }
      
    }
    

}