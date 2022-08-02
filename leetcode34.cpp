#include<bits/stdc++.h>
#include<vector>
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
    ListNode* deleteDuplicates(ListNode* head) {
                map<int,int>M;
        ListNode*traverse=head;

        while(traverse!=NULL){
            M[traverse->val]++;
            traverse=traverse->next;

        }

        map<int,int>::iterator r;
        for(r=M.begin();r!=M.end();++r){
            //cout<<r->first<<" "<<r->second<<endl;
        }
// driver part 
        
traverse=head;
ListNode*newhead=NULL,*newend=NULL;
                while(traverse!=NULL){
                    if(M[traverse->val]==1){
                        ListNode*p=new ListNode(traverse->val);
                        if(newhead==NULL){
                            newhead=p;
                            newend=p;
                        }else{
                            newend->next=p;
                            newend=p;
                        }
                        
                    }        
                   traverse=traverse->next; 
                }

return newhead;
        
    }
};
int main(){
    Solution a;
    vector<int>A={1,1,1,2};
 ListNode*head=NULL,*end=NULL;

 for(int i=0;i<A.size();i++){
     ListNode*p= new ListNode(A[i]);

     if(head==NULL){
         head=p;
         end=p;
     }else{
         end->next=p;
         end=p;
     }
 }
 ListNode*test= a.deleteDuplicates(head);

 ListNode*ans=test;

 while(ans!=NULL){
     cout<<ans->val<<endl;
     ans=ans->next;
 }


 
 

 


}