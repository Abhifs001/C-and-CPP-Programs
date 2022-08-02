#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;
struct node*create();
void traversal(struct node *tree);
int main(){
    
    int choice;
    printf("1. Insertion in tree \n 2. Traversal in tree\n");
    printf("Enter choice\n");
    fflush(stdin);
    scanf("%d", &choice);
    if(choice==1){

    root=create();
    }

    printf("displaying the elements\n");
    traversal(root);
}
struct node*create(){
    struct node *temp;
int noe, input, count=1;
printf("enter number of elements\n");
scanf("%d",&noe);

int i =0;
while(i!=noe){

    if(root==NULL){
        temp=(struct node*)malloc(sizeof(struct node));
        printf("Enter data\n");
        fflush(stdin);
        scanf("%d",&input );
        temp->data=input;count++;

    }else{
        if(count%2==0){
            temp->left=create();
        }else{
            temp->right=create();

        }



    }
        return temp;
i++;
}
}
void traversal(struct node *tree){

    if(tree!=NULL){
        printf("%d\n",tree->data);
        traversal(tree->left);
        traversal(tree->right);
    }

}