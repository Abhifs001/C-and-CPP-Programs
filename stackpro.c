#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int stack[5], tos=-1;
void push();
void pop();
void traverse();
int main(){
    int o;
    char a;
    printf("Enter 1 for push operation\n");
    printf("Enter 2 for pop operation\n");
    printf("Enter 3 for traversing operation\n");
    printf("Enter 4 for terminating operation\n");


    do
    {
        printf("Enter the corresponding input\n"); 
    
        scanf("%d",&o );
        fflush(stdin);

        switch (o)
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
        case 4:
          printf("Program is terminated\n");
          exit(0);
        
        default:
        printf("Invalid input\n");
        
                
        }
        printf("Do you wish to continue ?( y or n)\n");
        fflush(stdin);
            scanf("%c",&a);
    } while (a=='y');
    

}
void push(){
    int n;
    if(tos<5){
        printf("Enter the elements\n");
        scanf("%d", &n);

        tos++;
        stack[tos]=n;
        
    }else{
        printf("stack is full\n");
    }
}

void pop(){
    int n;
    if (tos==-1)
    {
        printf("Stack is empty\n");
    }
    else{
        n=stack[tos];
        tos--;
        printf("%d is removed\n", n);
    }
    
}

void traverse(){
    int i;
    if (tos ==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        for ( i = tos; i >=0; i--)
        {
          printf("%d\n", stack[i]);
        }
        
    }
    
}