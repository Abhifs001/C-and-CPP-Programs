#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
        int data;
        struct node *next;

};
void deleteB(struct node *start);
void display(struct node*start, struct node *p );

//main function defintion 

int main(){
    struct node *p, *start =NULL;
    char ch;
    do
    {
        p=(struct node*)malloc(sizeof(struct node));
        printf("Enter the element\n");
        scanf("%d", &p->data);
        fflush(stdin);

        //check if the there is one node only

        if (start == NULL)
        {
            start = p;
            p->next=NULL;
        }
        else
        {
            p->next=start;
            start =p;
           
        }

        printf("Do you wish to contiue\n");
        scanf("%c", &ch);
        fflush(stdin);
        
        
    } while (ch=='y'||ch=='Y');
    // display function calling 
    display(start, p);

    // deletion of first node 
    deleteB(start);

    //calling the display function again
    

   

}

// display function definition 


void display(struct node*start, struct node *p){
 
    printf("The elements in Linked list are\n");
    if (start==NULL)
    {
        printf("Linked list is empty\n");
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
void deleteB(struct node *start){
    struct node*p;
    if (start !=NULL)
    {
        p=start;
        start  = start ->next;
        free(p);

        
    }
    else
    {
        printf("Linked list is empty\n");
    }
    
     display(start ,p);

}