#include<iostream>
#include<vector>
using namespace std;

class moving{
    public:
    vector<int> Move_NegOneSide(vector<int>&a){
        int l = 0, h= a.size(),i=0, temp;
while(l<h){
    if(a[l]<0 && i!=l){
        swap(a[i], a[l]);
        i++;
        
    }
    l++;
}
      

      return a; 
    }


};
int main(){
    moving a;
    vector<int>test= {1,32,4,-4,8,-83, 8, -43};
    //  -4, 32, 4 , 1 , 8, -83, 8, -43
    vector<int>answer= a.Move_NegOneSide(test);

    for(int i =0;i<answer.size();i++){
        cout<<answer[i]<<" ";

    }
    return 0;
}