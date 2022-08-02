#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    ListNode*next=NULL;
    ListNode(){
        val=0;
    }
    ListNode(int x){
        val=x;
    }
};
class Solution {
public:
// length of LL 
            int lenofLL(ListNode* node){
                int len=0;
                ListNode*temp=node;
                while(temp!=NULL){
                    len++;
                    temp=temp->next;
                }
                return len;
            }
// advancing head pointer to make nodes of LLs corresponding to each other
            void aheadnode(ListNode* &node, int d){
                while(d--){
                    node=node->next;
                }
            }


// driver function 
            ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
                ListNode* p1= headA;
                ListNode*p2=headB;

                int l1=lenofLL(headA);
                int l2=lenofLL(headB);
                
                if(l1>l2){
                    aheadnode(p1, l1-l2);
                }else{
                    aheadnode(p2, l2-l1);
                }

            
                while(p1!=p2 && p1!=NULL && p2!=NULL){
                    p1=p1->next;
                    p2=p2->next;

                }
                return p1; 
            }
};
int main(){
    Solution a;

    vector<int>A={4,1,8,4,5};
    vector<int>B={5,6,1,8,4,5};
    int target = 8;

    ListNode*head1=NULL,*end1=NULL, *head2=NULL, *end2=NULL;
    for(int i = 0;i<A.size();i++){
        ListNode*p1= new ListNode(A[i]);

        if(head1==NULL){
            head1=p1;
            end1=p1;
        }else{
            end1->next=p1;
            end1=p1;
        }
    }
    for(int i = 0;i<B.size();i++){
        ListNode*p2= new ListNode(B[i]);

        if(head2==NULL){
            head2=p2;
            end2=p2;
        }else{
            end2->next=p2;
            end2=p2;
        }
    }
//intersecting the list 
    ListNode*fast=head2;
    ListNode*slow;
    while(fast->val!=target){
        slow=fast;
        fast=fast->next; 

    }

     ListNode*traverse=head1;
    while(traverse->next->val!=fast->val){
        traverse=traverse->next;
        
    }

    // join list 

    slow->next=traverse->next;
//detecting that linked list are joined or not 

ListNode*ans=a.getIntersectionNode(head1,head2);

    cout<<"intersection at "<<ans->val<<endl;

 
return 0;

}