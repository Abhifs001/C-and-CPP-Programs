#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int  main(){
    float a,b,c,r1,r2,x;
    printf("Enter the value of a,b,c\n");
    scanf("%f %f %f", &a,&b,&c);
    if (a==0)
    {
       
        printf("The equation is not quadratic\n");
       exit(0);
      
    }if (b*b-4*a*c<0)
    {
        printf("roots are imaginary\n");
         exit(0);
       
    }else if (b*b-4*a*c>=0)
    {
        x=((b*b)-(4*a*c));
    r1=(-b+sqrt(x))/2*a;
    r2=(-b-sqrt(x))/2*a;
    printf("Root 1= %f\n",r1);
    printf("Root 2= %f\n",r2);
    }
    
    return 0;
    
}