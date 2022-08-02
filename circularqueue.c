#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int Q[5], R=-1,F=-1;
void push();
void pop();
void traverse();
int main(){
    char a;
    int n;
    printf("Welcome to circular queue!\n");
    printf("1. Insertion opertation\n");
    printf("2. deletion operation\n");
    printf("3. Traversing operation\n");

    do
    {
    printf("Enter operation you want\n");
    fflush(stdin);
    scanf("%d",&n);
    // switch cases 
    switch (n)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            traverse();
            break;
    
            default:
            printf("Invalid input\n");
           
        }
        
        printf("Do you want to continue\n");
        fflush(stdin);
        scanf("%c",&a);
    } while (a=='y'||a=='Y');

}
//insertion
void push(){
    int n;
    if (F==(R+1)%5)
    {
        printf("Queue is full\n");
    }else
    {
        printf("Enter element\n");
        scanf("%d", &n);
        fflush(stdin);
        if (R==-1)
        {
            F=R=0;
           
        }
        else
        {
            R=(R+1)%5;
        }
            Q[R]=n;
        
    }
    
    
}
//deletion operation
void pop(){
    int n;
    if (F==-1)
    {
        printf("Circular Queue is empty\n");
    }
    else
    {
        n=Q[F];
        if (F==R)
        {
            F=R=-1;
        }else{
            F=(F+1)%5;
        }
        printf("%d is removed\n", n);   
    }
}
//traversing operation 
void traverse(){
    int i;
    if (F==-1)
    {
        printf("Circular queue is empty\n");
    }
    else
    {
    for ( i = F; i <=R; i=(i+1)%5)
    {
        printf("Element = %d\n", Q[i]);
    }
    }
    
    
}