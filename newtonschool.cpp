#include<iostream>
using namespace std;
int main(){
    string s, flag="true";
    cin>>s;
    if(s.length()>10)return 0;
    for(int i =0;i<s.length();i++){
        if(s[i]>=97 && s[i]<=122){
            flag = "false";

        }
    }
    if(flag=="false")return 0;
    flag=="true";
     for(int i =0;i<s.length();i++){
        if(s[i]>=65 && s[i]<=90){
            flag = "false";
        }
    }
    if(flag=="false")return 0;
    if(s=="Apple"){
        cout<<"Gravity"<<endl;
    }else{
        cout<<"Space"<<endl;
    }
    
    return 0;
}