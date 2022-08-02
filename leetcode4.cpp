#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct ListNode{
    int val;
    struct ListNode*next;
    ListNode(){
        val=0;
        next=NULL;
    }
    ListNode(int x){
        val=x;   
        next=NULL; 
    }
};
class Solution{
    public:
    struct ListNode* addTwoNumbers(struct ListNode*l1,struct ListNode*l2){
struct ListNode*result, *start3=NULL,*node;
ListNode *dummy = new ListNode(); 
      node=dummy;

int carry=0;
        while(l1!=NULL || l2!=NULL || carry){
            int sum=0;
            if(l1!=NULL){
                sum=sum+l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum=sum+l2->val;
                l2=l2->next;
            }
           sum=sum+carry;
           int value=sum%10;

           carry=sum/10;
            result=new ListNode(value);
            node->next=result;
            node=node->next;
           
        }
return dummy->next;
    }
};
int main(){
    Solution a;
    struct ListNode*start1=NULL, *start2=NULL;
    struct ListNode*p1, *p2;
vector<int>arr1={9,9,9,9,9,9,9};
vector<int>arr2={9,9,9,9};
for(int i=0;i<arr1.size();i++){
    p1=new ListNode(arr1[i]);

    if(start1==NULL){
 
    start1=p1;

    }else{
        p1->next=start1;
        start1=p1;
    }
}
for(int j=0;j<arr2.size();j++){
    p2= new ListNode(arr2[j]);
    if(start2==NULL){
     
        start2=p2;
    }else{
        p2->next=start2;
        start2=p2;
    }
}
struct ListNode *answer= a.addTwoNumbers(p1, p2);
while(answer!=NULL){
    cout<<answer->val<<" ";
    answer=answer->next;
}
return 0;
}