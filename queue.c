#include<stdio.h>
#include<conio.h>
int Q[10], F=-1, R=-1;
void insert();
void delete();
void traverse();
void main(){
    int n;
    char ch;
    printf("Insert operation = 1\n");
    printf("Remove operation = 2\n");
    printf("Traverse operation = 3\n");

    do
    {
        printf("Enter the corresponding input\n");
        scanf("%d", &n);
         fflush(stdin);

    switch (n)
    {
    case 1:
    insert();
        
        break;
    case 2:
    delete();

        
        break;
    case 3:
    traverse();
        
        break;
    
    default:
    printf("Invalid input\n");
       
    }
    fflush(stdin); 
    printf("Do you want to continue(y/n)\n");
    scanf("%c", &ch);
fflush(stdin);   

    } while (ch=='y'||ch=='Y');
    

}

void insert(){
    int n;
    if(R<9){
        printf("Enter the element\n");
        scanf("%d",&n);
        if (R==-1){
            R=0;
            F=0;
            Q[R]=n;
        }
        else{
            R++;
            Q[R]=n;
        }
    }else{
        printf("Queue is full\n");
    }   
}

void delete(){
    int n;
    if(F==-1){
        printf("Queue is empty\n");
    }else{
        if (F==R)
        {
            n=Q[R];
            R=F=-1;
        }else{
            n=Q[F];
            F++;
        }
        printf("%d is removed\n",n);
        
    }
}

void traverse(){
    int i;
    if (F==-1)
    {
        printf("Queue is empty\n");
    }else{
        for ( i = F; i <=R;i++)
        {
            printf("element = %d\n",Q[i]);
        }
        
    }
    
}
