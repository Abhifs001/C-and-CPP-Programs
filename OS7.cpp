#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int >arr{12,3,4,5,5};
    int n;
    cin>>n;
    if(arr.find(n)!=arr.end()){//it means element is present in map
        cout<<"rue"<<endl;
    }else{
        cout<<"gadha";
    }
}
