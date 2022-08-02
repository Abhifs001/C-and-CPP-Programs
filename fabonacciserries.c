#include<stdio.h>
#include<conio.h>
int main(){
    int first,tem,last,sum=0;
    first=0;
    last=1;
    printf("%d\n%d\n", first,last);
    for (int i = 2; i <=8; i++)
    {
      sum=first+last;
      printf("%d\n",sum);
      
      first=last;
      last=sum;
      


    }
    
}