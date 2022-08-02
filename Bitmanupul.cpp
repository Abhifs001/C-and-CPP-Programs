#include<iostream>
#include<math.h>
using std::cout;
using std::cin;
using std::endl;
class Bitmanupul
{
    
public: 
  
  int returnIthbit(int num, int n){
    return (num &(1<<(n-1)));

  }
   int setIthbit(int num, int n){
    return (num | (1<<(n-1)));

   }
   int resetIthbit(int num, int n){
   
    return (num & (~(1<<(n-1))));

   }

   int Nth_magicnum(int n){
     int base=5;
     int answer=0;
     
    while(n>0){
      int last =  n&1;
      n=n>>1;      
      answer = answer+(last*base);
      base*=5;
    }
return answer;
   }

   int countBits_num(int n){ // we assume base is binary
   // counting the number of bits in the number 
   int base =2;
      int noB= (int)(log(n)/log(base)) +1;
      return noB;


   }
 
   
};

int main(){
    Bitmanupul a;
    
    /*Sample test case : 
     14 = 1110
     n  = 3 

     return 3rd bit = 4 ----->100

     set 3rd bit = 14 no change as 3rd bit is already 1

     reset 3rd bit = 10 ----------> 1010 
     
     
     */

    cout<<"Find ith bit "<<a.returnIthbit(14, 3)<<endl;
    cout<<"set ith bit "<<a.setIthbit(14,3)<<endl;
    cout<<" Reset ith bit "<<a.resetIthbit(14,3)<<endl;

    cout<<"Nth magic number  for n= 6 " <<a.Nth_magicnum(6)<<endl;

    cout<<" NUmber of Bits in a number 10 "<< a.countBits_num(10);
    

    

    
}

