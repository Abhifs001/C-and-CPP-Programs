#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *next;
} *f= NULL, *r=NULL;
void insert();
void remov();
void traverse();
int main(){
    int n;
    char ch;
    printf("Welcome to dynamic Queue!\n");
    printf("--------Maine menu------\n");
    printf("1. Insertion\n");
    printf("2. Deletion\n");
    printf("3. Traversal\n");

    // loop to ask for desired operation
    do
    {
        printf("Enter which operation you want\n");
        fflush(stdin);
        scanf("%d", &n);
        switch (n)
        {
        case 1:
           insert();
            break;
        case 2:
           remov();
            break;
        case 3:
           traverse();
            break;
        
        default:
        printf("Invalid input");
            break;
        }
        printf("Do you want to continue\n");
        fflush(stdin);
        scanf("%c", &ch);
    } while (ch=='y'||ch=='Y');
    


}
// insertion function definition
void insert(){
 struct node *p;
 p=(struct node *)malloc(sizeof(struct node));
 printf("Enter the Element\n");
 scanf("%d", &p->data);

 // check if the node is first 
 if (r==NULL)
 {
     f=p;
     r=p;
     p->next=NULL;
   
     
 }else{
     r->next=p;
     r=p;
     r->next=NULL;

 }
 
    
}
// deletion function definition 

void remov(){
    struct node *p;
    if (f==NULL)
    {
        printf("Dynamic Queue is empty\n");
    }
    else
    {
        if(f==r){
            p=f;
            printf("%d is removed\n", p->data);
            f=NULL;
            r=NULL;
            free(p);
        }else{
        p=f;
        f=f->next;
        printf("%d is removed\n", p->data);
        free(p);
        }
    }
    
}
//traversal function definition
void traverse(){
    struct  node *p;
   
    if (f==NULL)
    {
        printf("Dynamic Queue is empty\n");
    }else{
        p=f;
        while (p!=NULL)
        {
            printf("Element = %d\n", p->data);
            p=p->next;
        }
        

    }

  
}