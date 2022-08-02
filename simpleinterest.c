#include<stdio.h>
void main(){
    int p;
    float si,r,t;
    
    printf("Enter principle\n");
    scanf("%d", &p);
    printf("Enter rate\n");
     scanf("%f", &r);
    printf("Enter time\n");
     scanf("%f", &t);
    si=p*r*t/100;
    
    printf("%f",si);
    


}