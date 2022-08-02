#include<stdio.h>
#include<conio.h>
int fact(int  );//recusrsive function declararation
void main(){
    int n;
    printf("Enter the number to calculate factortial\n");
    scanf("%d", &n);
  
    printf("Factorial of %d is %d\n", n,   fact(n));
}
int fact(int j){ //function definition for call by referennce
//pointer variable declaration to store the value of at address of n




if (j==0)
{
    return 1;

}else{
    
    return j*fact(j-1);
}


}