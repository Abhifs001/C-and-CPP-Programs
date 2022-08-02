#include<iostream>
using namespace std;
namespace A{
    int x=4;
    void printX(){
        cout<<x<<endl;
    }
}

namespace B{
    int x=9;
    void printX(){
        cout<<x<<endl;
    }
}
int main(){

    A::printX();
    B::printX();
    return 0;
}