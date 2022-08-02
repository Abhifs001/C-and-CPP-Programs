#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int a =3,b=1,c=2;
    b=b^a^c*2;
    if(b && c){
        b=1;
        if(a){
            a=a*a%5;
        }c=0;
    }
    cout<<a+b+c;

}