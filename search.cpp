#include<iostream>
#include<vector>
using namespace std;
int main(){
int n = 3;
vector<vector<int>>twod;
int count=1;
for(int i = 0;i<n;i++){
    for(int j =0;j<n;j++){

        twod[i][j]=count;
        count++;
    }
}
for(int i = 0;i<twod.size();i++){
    for(int j =0;j<twod.size();j++){

       cout<<twod[i][j]<<" ";
    }cout<<endl;
}
}