#include<iostream>
#include<vector>
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
    void removeNthFromEnd(ListNode* head, int n) {
        int no=1;
        ListNode*find=head;
        while(find->next!=NULL){
            no=no+1;
            find=find->next;
        }
        cout<<no<<endl;
    }
};
int main(){

Solution a;
ListNode*p, *start=NULL;
vector <int>test={1,2,3,4,5};
int n=2;

for(int i=0;i<test.size();i++){
    p= new ListNode(test[i]);

    if(start==NULL){
        start=p;
    }else{
        p->next=start;
        start=p;
    }

}
    a.removeNthFromEnd(p,n );





    return 0;
}