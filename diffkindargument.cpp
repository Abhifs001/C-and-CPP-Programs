
/*how to use structures and class together
1. make class 
2. declare structure and define it
3. create and define function 
4. in the main function, to pass values in the function  do this :
object.function(object.structure field = value )


*/
#include<iostream>
using namespace std;
class abhi{
    public:
    int a;
    float b,c;
struct dis  // user defined data type dis
{
    int feet;
    float inches;
};
void distance(dis d){
    a = d.feet;
    b= d.inches;

}
void distance (float e){

    c= e;

}
void display(){
    cout<<"First distance -> in feet and inches" << endl;
    cout<<a << " feet "; 
    cout<<b<< " inches"<< endl;

    cout<<"Second distace -> whole distance in inches\n";
    cout<<c<<" inches"<<endl;
}

};
int main(){
    abhi  obj;  // object created
    int p;
    float q,r;
    // user input
    cout<<"Enter feet\n";
    cin>>p;
    cout<<"Enter inches\n";
    cin>>q;
    cout<<"Enter whole distance in inches\n";
    cin>>r;

    obj.distance(obj.a= p); // function calling  first purpose
    obj.distance(obj.b = q); // function calling first purpose

    obj.distance(obj.c = r); // function calling second purpose
    obj.display();

}
