#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//structure definition 


struct node{
    int data;
    struct node *next;

};
struct node *start=NULL;struct node* p;
void insertS();
void display( );

//main function definition 
int main(){

    struct node*p;
    char ch;
    do
    { 
        p = (struct node*)malloc(sizeof(struct node));
        printf("Enter the element\n");
        scanf("%d", &p->data);
        //fflush(stdin);
        // check whether the llinked list is empty or not 

        if (start ==NULL)
        {
           start =p;
           p->next = NULL;
        }else{
            
            p->next= start;
            start = p;

        }

        printf("Do you want to continue(Y/N)\n");
        fflush(stdin);   
        scanf("%c", &ch); 
    } while (ch=='y'||ch=='Y');
    
    //calling functioon to  display the data fields of the nodes
    display();

    //calling function for insertion at the specified location 

    insertS();


    display();
    
}
    


//display function definition 
void display(){

    if (start==NULL)
    {
        printf("Linked list is Empty\n");

    } else {
    
    p= start;
    while(p!=NULL){
        printf("element = %d\t", p->data);
        p=p->next;
    }
    }
}
void insertS(){
    struct node *q;
    int n;
    printf("\nSpecify the element after you want to insert element\n");
    scanf("%d", &n);
    q=start;
    
    while(q->data!=n){
        q=q->next;
       
        

    }
    

    
    
    p=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the new element\n");
    scanf("%d",&p->data);
    p->next= q->next;
    q->next=p;
    

    //call the function to print final element after the operation

}
    

