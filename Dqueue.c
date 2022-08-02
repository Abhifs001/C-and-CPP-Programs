#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int dq[7], F=-1, R=-1; //initialisation of the queue
void enqueF();
void enqueR();
void dequeF();
void dequeR();
void display();
//main function
int main(){
    char a;
    int n;
    printf("Welcome to Dqueue!\n");
    printf("1. Insertion from Front end\n");
    printf("2. Insertion from Rear end\n");
    printf("3. Deletion from Front end\n");
    printf("4. deletion from Rear end\n");
    printf("5. Traversing operation\n");

    do
    {
        printf("Enter operation you want\n");
        fflush(stdin);
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            enqueF();
            break;
        case 2:
             enqueR();
            break;
        case 3:
        dequeF();
            break;
        case 4:
         dequeR();
            break;
        case 5:
        display();
            break;
        
        
        default:
        printf("invalid input\n");
            break;
        }
        printf("Do you want to continue\n");
         fflush(stdin);
        scanf("%c", &a);
       

        
    } while (a=='y'||a=='Y');
    

}

void enqueF(){
    int n;
    if (F==0)
    {
        printf("Queue is full from front\n");
        
    }
    else
    {
        printf("Enter the element\n");
        scanf("%d", &n);
        if (F==-1)
        {
            R=F=0;

        }
        else
        {
            F=F-1;
        }
        // putting element in dq
        dq[F]=n;
        
    }
    


}
// enter from rear pointer 

void enqueR(){
    int n;
    if (R<7)
    {
        printf("enter the element\n");
        scanf("%d", &n);

        if (R==-1)
        {
            R=F=0;
        }
        else
        {
            R=R+1;

        }
        dq[R]=n;
    }
    else
    {
        printf("Dqueue is full from Rear\n");
    }
    

}

// delete from front 

void dequeF(){
    int n;

    if (F==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        n=dq[F];
        if (F==R)
        {
            F=R=-1;
        }
        else
        {
            F=F+1;
        }
        printf("%d is removed\n", n);
        
    }
    
}
void dequeR(){
    int n;
    if (R==F)
    {
        printf("Dqueue is empty\n");
    }
    else
    {
        n=dq[R];

        if (R==0)
        {
            R=F=-1;
        }
        else
        {
            R=R-1;
        }
        printf("%d is removed\n", n);
        
    }
    
    

}
void display(){
    int i;

    if (F==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        for ( i = F; i <=R; i++)
        {
            printf("Element = %d\n", dq[i]);
        }
        
    }
    
}
