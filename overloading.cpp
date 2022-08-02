// compiler takes data types and number of arguements to differentiate between the functions which are having same name 
// this is how the compiler is not confused while invoking the functions 
#include<iostream>
using namespace std;
class polyp{
    //this is the function of private access specifier


    void repchar(){
        
    for (int i = 0; i < 30; i++)
    {
        cout<<"*";
       

    } cout<<endl;
    
}
void repchar(char c){
    
    for (int i = 0; i < 30; i++)
    {
        cout<<c;
       
    }
     cout<<endl;
    
}
public:
void repchar(char c, int n ){
    polyp a;
     a.repchar();
     a.repchar('=');
    
    for (int  i = 0; i < n; i++)
    {
        cout<<c;
        
    }cout<<endl;
    
}

};
int main(){
polyp a;
// polyp a;  > ise do bar likhoge to redeclaration error dega 
    
   // a.repchar();
   //a.repchar('=');
    a.repchar('+', 20);

}
// note- Private means cannot be accessed outside the code even if the object of that class is invoking the function in main function, member function cannot be accessed if it is private
// public means func. can be accessed outside the code anywhere
// protected means they can be accessed in the inherited classes 