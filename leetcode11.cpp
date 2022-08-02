#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct ListNode{
    int val;
    ListNode*next;
    ListNode(int x){
        val=x;
        next=NULL;
    }
};
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
        ListNode*l1=list1,*l2=list2;
        if(l1==NULL){return l2;}else if(l2==NULL){return l1;}
        //to locate head
        ListNode*head,*temp;
        if(l1->val<l2->val){
           head= temp = new ListNode(l1->val);
           l1=l1->next;

        }else{
            temp=head=new ListNode(l2->val);
            l2=l2->next;
        }

        while(l1!=NULL && l2!=NULL){
                if(l1->val<l2->val){
                   temp->next=new ListNode(l1->val);
                   l1=l1->next;
                }else{
                   temp->next=new ListNode(l2->val);
                    l2=l2->next;
                }
                    temp=temp->next;
        }
        //for remaining nodes

        while(l1!=NULL){
            temp->next=new ListNode(l1->val);
            l1=l1->next;
            temp=temp->next;
        }
      while(l2!=NULL){
          temp->next=new ListNode(l2->val);
          l2=l2->next;
          temp=temp->next;
      }
       return head;

    }
};
int main(){
    Solution a;
    vector<int>test1={1,2,4};
    vector<int>test2={1,3,4};
    ListNode*head1=NULL,*head2=NULL,*end1,*end2;

    for(int i =0;i<test1.size();i++){
        ListNode*temp1= new ListNode(test1[i]);
        if(head1==NULL){
            head1=temp1;
            end1=temp1;

        }else{
            end1->next=temp1;
            end1=temp1;
        }

    }

    for(int i=0;i<test2.size();i++){
        ListNode*temp2 = new ListNode(test2[i]);
        if(head2==NULL){
            head2=temp2;
            end2=temp2;

        }else{
            end2->next=temp2;
            end2=temp2;
        }
    }
    ListNode*answer= a.mergeTwoLists(head1,head2);
    ListNode*temp=answer;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
return 0;
}