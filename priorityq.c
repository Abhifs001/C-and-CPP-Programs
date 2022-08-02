#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int pq[8],F=-1, R=-1;
void insert();
void Delete();
void traverse();
int main(){
    int n;
    char ch;
    printf("Welcome to Priority Queue\n");
    printf("1. Insertion\n");
    printf("2. Deletion\n");
    printf("3. Traversing\n");
// loop for repeatedly asking user about the operation

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
        Delete();
        break;
    case 3:
    traverse();
        break;
    
    default:
    printf("Invalid input\n");
        break;
    }
    printf("Do you wish to continue(y/n)\n");
fflush(stdin);
scanf("%c", &ch);
    
} while (ch=='y'||ch=='Y');




}

void insert(){
    int n, tem, i,j;

    if (F<8)
    {
        printf("Enter the element\n");
        scanf("%d", &n);

        if (F==-1)
        {
            F=R=0;
             pq[R]=n;
        }
        else
        {
             R=R+1;
             pq[R]=n;
        }
        if(R>0) {
             for ( i = 0; i < R; i++)
            {
                tem = pq[i];
                 j=i-1;
                while(pq[j]>tem && j>=0){
                pq[j+1]=pq[j];
                    j--;
                }
            pq[j+1]=tem;
        
        }
           
            
        }
        
        
    }else{
        printf("Priority queue is full\n");
    }
    
    
    

}

void Delete(){
    int n;
    if (F==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        n=pq[F];
        if(F==R){
            F=R=-1;
        }
        else{
            F++;
        }
        printf("%d is removed\n", n);
    }
    
}

void traverse(){
    int i;
    if (F==-1)
    {
        printf("Priority queue si empty\n");
    }
    else
    {
        for ( i = F; i <= R; i++)
        {
          printf("Element = %d\n", pq[i]);
        }
        
    }
    

}


