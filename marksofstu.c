#include<stdio.h>
int main(){
    float per;
    int a,b,c,d,e;
    //wap to take marks and calculate percentage
    printf("Enter marks of subject 1\n");
      scanf("%d%d%d%d%d", &a,&b, &c,&d,&e);
    

   
    per=(a+b+c+d+e)/5;   
    printf("%f is your percentage\n", per);
    if(per>60)
    printf("first division");
    else 
    if(per<60 && per>40)
    printf("Second division");
    else 
    if(per <40 && per>=33)
    printf("Third Division");
    else 
    if(per<33)
    printf("Tum fail ho");

  

}