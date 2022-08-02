#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    string a = "abcba";
    int n = a.length();
    int check = 0;
    for(int i = 0;i<n/2;i++){ 
      int j = n-1;

      if(a[i]==a[j]){
          check = 1;

      }j--;
    }

    if(check==1){
        cout<<"yes";
        
    }



    return 0;
}
