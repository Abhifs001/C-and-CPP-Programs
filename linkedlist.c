//linked list is a linear data structure 
// but in terms of memory it is non continous 
// the reason is dynamic memory allocation

// node is the building block LL
 // it is a comnination of data and a pointer pointing towards to the next node
// for node 
// float *d; jaise yaha par pointer float type ka hai
    // waise hi hamein pointer node type ka hi chahiye 
    // isliye node *next likha

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int RN;
    struct node *next;
};

void main(){
    char ch;
    struct node *start= NULL; // ek pointer next node ko point karega to sabse first wale ko kaun karega point  isliye ek start pointer banaya wo bhi node type ka kyuki point wo node ko karega 
    // ismein null value isliye dali kyuki pehla pointer kisi ko point nahi karega

    struct node *p; // ye finally ek pointer bana jo node ke base address ko store karega
do{
    p = (struct node*)malloc(sizeof(struct node));

    //struct node * is type casting which tells ki kis type a data store hoga 

    printf("Enter the roll no.\n");
    scanf("%d", &p->RN);
  

    // ab check karna padega ki node first hai ya nahi

    if (start == NULL)
    {
        p->next=NULL;
        start = p;
    }else{ 
        p->next=start;
        start = p;
    }
    printf("do you want to continue(y/n)\n");
    fflush(stdin);
    scanf("%c", &ch);
} while (ch=='y');


//printing the elements 

printf("The elements in the linked list are\n");
if(start==NULL){
    printf("Linked list is empty\n");   
}
else{
    p =start;
        while(p!=NULL){
        printf("%d\n", p->RN);
        p = p->next;

        }
    }

}

