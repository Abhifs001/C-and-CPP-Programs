#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
}*start= NULL,*last=NULL;
void insert();
void dele();
void display();
int main(){
    char ch;
    int n;
    printf("Welcome to Circular Doubly Linked list\n");
    printf("1. insertion(from beginning\n");
    printf("2. insertion(from beginning\n");
    printf("3. Display\n");

    do{
    printf("Enter operation you want\n");
    scanf("%d",&n);

    switch(n){
        case 1:
        insert();
        break;
        case 2:
        dele();
        break;
        case 3:
        display();
        break;
        default:
        printf("\nInvalid input");

    }

printf("Do you want to continue\n");
fflush(stdin);
scanf("%c",&ch);

    }while(ch=='Y'|| ch=='y');


}
void insert(){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    printf("Enter element\n");
    scanf("%d",&p->data);

    if(start ==NULL){
        start =p;
        last=p;
        p->next=p;
        p->prev=p;

    }else{
        p->next=start;
        p->prev=last;
        last->next=p;
        last->prev=p->next;
        start=p;
    
    }
    

    
}
void dele(){
    int n;
    struct node *p;
    
    if(start==NULL){
        printf("Doubly linked list is empty\n");
    }else{
        p=start;
        printf("%d is removed\n", p->data);
        free(p);


    }
}

void display(){
    struct node *p;
    p=start;
    while(p!=last){
        printf("%d\n", p->data);
        p=p->next;
    }

    printf("%d\n",p->data);
}
