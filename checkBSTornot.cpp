//Check if the tree is BST or not.
#include<bits/stdc++.h>
using namespace std;
//first define a node using structure, also create a constructor to autoinitialize the pointer fields and fill the data.
/*Number of appraoches: 
1. Simply check the nodes recursively but that will not pass all the test cases as in a bigger node in the left subtree 

/  if(NODE == NULL)return true;
    if(NODE->left!=NULL && NODE->left->data > NODE->data)return false;
    if(NODE->right!=NULL && NODE->right->data < NODE->data) return false;
    //recusive call for checking subtrees
    if(!isBST(NODE->left) || !isBST(NODE->right))return false;
    return true; 

/
2. Inorder traversal gives sorted array- check array is sorted or not but problem is space thus keep track of the previous visited node problem -at the end prev is NULL so prev->data is not accessable 
static struct node *prev;

  if(NODE){
        if(!isBST(NODE->left))return false;//left subtree
    if(prev!=NULL && NODE->data <= prev->data)return false;
    prev= NODE;
    return isBST(NODE->right); //right subtree

   
  }
  return true; */ 

//3. left subtree should be in range of INTMIN, 13 and right subtree should be in range of root, INTMAX
/*bool isBSTvalidation(struct node* p, int min, int max){
     if(p==NULL)return true;
    if(p->data<min || p->data>max)return false;
    return isBSTvalidation(p->left, min, p->data-1) &&  isBSTvalidation(p->right, p->data+1, max);

}

bool isBST(struct node* NODE){
    int maxi= INT_MAX;int mini=INT_MIN;
    return isBSTvalidation(NODE, mini, maxi);
  
}*/
struct node{ // through 2. approach
    int data;
   struct node *left, *right;
    //Constructor definition
    node(int data){
       this-> data=data;// this keyword is used to refer the current instance of the class
      this-> left=NULL;
        this->right=NULL;
    }
};


 bool isBSTvalidation(struct node* p, int min, int max){
     if(p==NULL)return true;
    if(p->data<min || p->data>max)return false;
    return isBSTvalidation(p->left, min, p->data-1) &&  isBSTvalidation(p->right, p->data+1, max);

}

bool isBST(struct node* NODE){
    int maxi= INT_MAX;int mini=INT_MIN;
    return isBSTvalidation(NODE, mini, maxi);
  
}
int main(){
    //entering the data in the tree using new keyword- calls the constructor defined in structure and insert the values in the node field
    struct node* Q=new node(4);
                Q->left= new node(2);
                Q->right= new node(5);
                Q->left->left= new node(1);
                Q->left->right= new node(3);

    
    if(isBST(Q)==true){
        cout<<"BST"<<endl;
    }else{
        cout<<"Not BST"<<endl;
    }

return 0;
}