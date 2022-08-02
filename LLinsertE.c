#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
//function declaration
void insertE(struct node *start);
void display(struct node *start, struct node *p);
//main function
int main(){
    struct node *start=NULL,*p;
    char ch;
    //loop for building the nodes

    do
    { p=(struct node*)malloc(sizeof(struct node));//memory allocation to node
    printf("Enter the element\n");
    scanf("%d", &p->data);
    fflush(stdin);

    //check whether the linked list is empty or not

    if (start == NULL)
    {
        start =p;
            p->next=NULL;
    }else{
        p->next=start;
        start =p;
    }

    printf("Do you wish to continue(y/n)\n");
    scanf("%c",&ch);
   
    
        
    } while (ch=='y'||ch=='Y');

    //call display function to show the elements 
     display(start, p);
    
    //call insertion function to insert the element at the end
    insertE(start);
    //display after operation
     display(start, p);    

}
void display(struct node *start, struct node *p){
    printf("The elements in the linked list are\n");

    if (start==NULL)
    {
        printf("Linked list is empty\n");
    }
    else{
        p=start;
        while (p!=NULL)
        {
            printf("Element = %d\t", p->data);
            p=p->next;
        }
        
    }
    
}

//insertion function definition
void insertE(struct node*start){
    struct node*p; 
    struct node *q;
    p=(struct node*)malloc(sizeof(struct node));
    printf("\nenter the element at the end\n");
    scanf("%d", &p->data);
    q=start;
    while(q->next!=NULL){
        q=q->next;

    }
    q->next=p;
    p->next=NULL;
    

    //display function again

    



}