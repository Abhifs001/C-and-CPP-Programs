#include<iostream>
#include<map>
#include<vector>//floyd's cyclic algorithm to find loop in linked list
using namespace std;
struct ListNode {
    ListNode* next=NULL;
    int val;
    int index;
    ListNode(){
        val=0;
       
    }
    ListNode(int inp){
        val=inp;
    }
};
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*fast=head;
        ListNode*slow=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                ListNode*ans=head;
                while(ans!=slow){
                    slow=slow->next;
                    ans=ans->next;
                }
                return ans;

            }
        }

return NULL;
        
    }
};
int main(){
    Solution a;
    vector<int>arr = {1,2};
    ListNode*head=NULL, *end=NULL;
    
    

    for(int i = 0;i<arr.size();i++){
        ListNode*p=new ListNode(arr[i]);

        if(head==NULL){
            head=p;
            end=p;
            p->index=i;
           
        }else{
         
          p->index=i;
            end->next=p;
            end=p;
        }
 }end->next=head->next;

 ListNode*answer=a.detectCycle(head);
 if(answer){
     cout<<"Cycle is at"<<answer->index<<endl;
 }else{
     cout<<"No cyccle"<<endl;
 }
 

    return 0;
}