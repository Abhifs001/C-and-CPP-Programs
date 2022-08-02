#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node* next;

};
void insertB(struct node *  start);
void display(struct node *  start,struct node * p);


int main(){
    struct node *start=NULL;
    struct node *p;
    int n;
    char ch;
    // linked list implementation

    do
    {
        p=(struct node*)malloc(sizeof(struct node));

        printf("Enter the element\n");
        scanf("%d",&p->data);
        fflush(stdin);

        //now check of the linked list is empty or not

        if (start ==NULL)
        {
            p->next=NULL;
            start = p;
            
        }else{
            p->next= start;
            start=p;
        }

        printf("Do you wish to continue(Y/N)\n");
        scanf("%c", &ch);
        
    } while (ch=='y'||ch=='Y');

//printing the elements 
display(start, p);


//calling the function to insert the element in the beginning 

insertB(start);
    

}
//diplay function
void display(struct node*start, struct node * p){
    printf("The elements in the linked list are\n");

if (start==NULL)
{
    printf("The linked list is empty\n");
}else{
    p=start;
    while (p!=NULL)
    {
        printf("Element = %d\n", p->data);
        p=p->next;
    }
    
}

}

//function definition

void insertB(struct node *start){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));

    printf("Enter the element at beginning\n");
    scanf("%d",&p->data);

    p->next=start;
    start=p;
//calling the display function again to call the elements 

display(start, p);


}

