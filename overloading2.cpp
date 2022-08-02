// this is the function of public access specifier 
#include<iostream>
using namespace std;
class polyp{
public:

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

void repchar(char c, int n ){
    
    
    for (int  i = 0; i < n; i++)
    {
        cout<<c;
        
    }cout<<endl;
    
}

};
int main(){
polyp a;
// polyp a;  > ise do bar likhoge to redeclaration error dega 
    
    a.repchar();
   a.repchar('=');
    a.repchar('+', 20);//

}