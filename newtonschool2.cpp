#include<iostream>
#include<map>
using namespace std;
int main(){

        int rounds; string s;

        cin>>rounds;
        cin>>s;
        if(rounds>100)return 0;
        if(rounds!=s.length()) return 0;
        map<char,int> mp;  int maxim=0;
        for(int i = 0 ;i<s.length();i++){
            mp[s[i]]++;
            maxim= max(maxim, mp[s[i]]);
        }
            cout<<maxim<<endl;
        if(mp['N']==maxim){
            cout<<"Nutan\n";
        }else {
            cout<<"Tusla\n";
        }

    return 0;
}