#include<stdio.h>
#include<conio.h>
int fabonaci(int );
int main(){
    int n;
    int sum;
    int f=0; 
    //l=1;
   // sum=l+f;
    printf("Enter till what number you want to print fabocacci series\n");
    scanf("%d", &n);
    
    printf("Fabonacci series using recursion is\n");
    printf("%d\n",f);
    fabonaci(n-2);
}
int fabonaci(int c){
 static int l=0,f=1;
    int sum=1;
    if (c==0)
    {
          printf("Series ends\n"); 
    }else{
            sum=f+l;
             printf("%d\n",sum);  
        f=l;
        l=sum;
       
       fabonaci(c-1);
    }
    

}