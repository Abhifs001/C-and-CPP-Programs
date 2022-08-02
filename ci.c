#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
double p,r,t,ci,x,y,z;



printf("Enter the principle, rate and time\n");
scanf("%lf %lf %lf", &p,&r,&t);
x=(1-(r/100));
y=pow(x,t);
ci=p*y;
z=p-ci;


printf("The compound interest = %lf", z);

}