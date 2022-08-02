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
    ListNode* swapPairs(ListNode* head) {
        ListNode*dummy=new ListNode();

        if(head->next==NULL || head==NULL)return head;
            
            ListNode*prev= dummy;
            ListNode*curr= head;

            while(curr!=NULL && curr->next!=NULL){
                prev->next=curr->next;
                curr->next=prev->next->next;
                prev->next->next=curr;

                prev=curr;
                curr=curr->next;
            }
            return dummy->next;
    }
};
int main(){

    Solution a;
    vector<int>A={1};
    ListNode*head=NULL,*end=NULL;
    for(int i=0;i<A.size();i++){
        ListNode*p=new ListNode(A[i]);

        if(head==NULL){
            head=p;
            end=p;
        }else{
            end->next=p;
            end=p;
        }
    }
ListNode*ans= a.swapPairs(head);

ListNode*temp=ans;
while(ans!=NULL){
    cout<<ans->val<<endl;
    ans=ans->next;
}


    return 0;
}