#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct  node{
    int data;
    struct node *left;
    struct node*right;
};
struct node *root=NULL;
 struct node* insert(struct node *, int );
void preorder(struct node *tree);
void inorder(struct node *tree);
void postorder(struct node *tree);
int count =1;
int main(){
    char ch;int choice;
    int data;
    printf("------Welcome to Binary Tree-------\n"); 
    
int i=0;
while(i!=5){
    printf("Enter element of node\n");
    fflush(stdin);
    scanf("%d",&data);
    root= insert(root, data);
    i++;
}
printf("displaying elements of binary tree\n");
printf("Preorder traversal\n");
preorder(root);
printf("Inorder Traversal\n");
inorder(root);
printf("Post order traversal\n");
postorder(root);

}
struct node*insert(struct node *p, int input){

    if(p==NULL){
        p=(struct node*)malloc(sizeof(struct node));
       
        p->left =p->right= NULL;
        p->data=input;count++;
       

       
    }else{
      // printf("%d", p->data);

        if(count%2==0){
            p->left=insert(p->left,input);
        }else{
            p->right=insert(p->right,input);
        }

     
    }
        return p;

}
void preorder(struct node *pre){
    
if(pre==NULL){
    return ;
    }else{
        printf("%d\n", pre->data);
        preorder(pre->left);
        preorder(pre->right);
    }
}
void inorder(struct node *ino){

    if(ino==NULL){
        return ;


    }
        else{
            inorder(ino->left);
            printf("%d\n", ino->data);
            inorder(ino->right);

        }


}

void postorder(struct node *pro){

    if(pro==NULL){
        return ;

    }else{
        postorder(pro->left);
        postorder(pro->right);
        printf("%d\n", pro->data);
    }
}