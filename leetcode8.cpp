#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>
using namespace std;
struct ListNode{
    int val;
    struct ListNode*next;
    ListNode(int x){
        val=x;
        next=NULL;
    }
};
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {  
       ListNode*dummy= new ListNode(0);
       dummy->next=head;int count=0;
        if(head==NULL){return NULL;}
        ListNode*temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        count=count-n;
        if(count==0){return head->next;}

        ListNode*terminal=head;
        ListNode*traverse;
        while(count>0){
            traverse=terminal;
            terminal=terminal->next;
                count--;
        }
        traverse->next = terminal->next;
        

     
return head;
    }     

    
};
int main(){

Solution a;
ListNode*p, *start=NULL;
ListNode*head=NULL,*end=NULL;
vector <int>test={1,2,3,4,5};
int n=2;

for(int i=0;i<test.size();i++){
    p= new ListNode(test[i]);

    if( head==NULL){
        head=p;
        end=p;
    }else{
        end->next=p;
        end=p;    
    }
}
    ListNode*answer=a.removeNthFromEnd(head,n );
    while(answer!=NULL){
        cout<<answer->val<<" ";
        answer=answer->next;
    }
    return 0;
}