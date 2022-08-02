#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *next;
}*start =NULL, * last =NULL;
//main function 

int main(){
    struct node*p, *q;
    char ch;
    do
    {
        p=(struct node*)malloc(sizeof(struct node));
        printf("Enter the element of Circular Linked list\n");
        fflush(stdin);
        scanf("%d", &p->data);
        // check if the node is first or not

        if (start == NULL)
        {
            p->next=p;
            start = p;
           last = p;

        }
        else
        {
            p->next=last->next;
            last->next=p;
            last =p;
        }

        printf("Do you want to continue\n");
        fflush(stdin);
        scanf("%c",&ch);
        
    } while (ch=='y'||ch=='Y');
    

    //traversing the elements 

    printf("Elements in circular LL are\n");
     q=start;
        if(start==NULL){
            printf("LL is empty\n");
        }
        else{
    while (q->next!=start)
        { 
        printf("Element = %d\n", q->data);
       q=q->next;
        
    }
      printf("Element = %d\n",q->data);
        }
      
    
    
}