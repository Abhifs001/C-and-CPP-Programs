#include<iostream>
using namespace std;
class abhi{
    public :

    int sum(int a, int b){
        int sum= a+b;
        return sum;
    }

 int  sum(int c, float d){
        float  sum1= d+c;
        return sum1;
    }
};

int main(){
    abhi a;
    cout<<"First sum = "<<a.sum(2,4)<<endl;
    cout<<"second sum = "<<a.sum(6, 5.12f)<<endl;// explicitly telling the compiler that d is float because it takes the floating point literals as double in c++ by default 
}