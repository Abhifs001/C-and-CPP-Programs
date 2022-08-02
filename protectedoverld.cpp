#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class base{
    protected:
    void repchar();
    public :
    void repchar3(char q){
        for (int  i = 0; i < 12; i++)
        {
            cout<<"@";
            
        }
        cout <<endl;
        
    }

    
};

class inherti: public base{
    public :
    void repchar(){
        
         for (int i = 0; i < 30; i++)
        {
        cout<<"*";
       

         } cout<<endl;
    }
    void repchar2(char c){
        
    
        for (int i = 0; i < 30; i++)
        {
        cout<<c;
       
         }
        cout<<endl;
    }
    
};



int main(){
base a;
a.repchar3('$');///public member invoking outside
inherti d;
d.repchar(); // protected member function of class base which is invoked outside the class using the child class
d.repchar2('&'); // public member invoking outside

// polyp a;  > ise do bar likhoge to redeclaration error dega 
    
   

}