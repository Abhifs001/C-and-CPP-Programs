#include<stdio.h>
#include<conio.h>
int main(){
 
    int y;

    printf("Enter the year\n");
    scanf("%d", &y);
     (y%100==0 )?  (y%400==0)? printf("It is a leap year"):printf("It not a leap year")  : (y%4==0)? printf("It is a leap year"): printf("It is not a leap year");


return 0;
}
