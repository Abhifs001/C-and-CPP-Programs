#include<stdio.h>
#include<conio.h>
int sumofn(int );
int main(){
    int n;
    printf("Enter till what no. you want sum\n");
    scanf("%d", &n);
    printf("The sum till number %d is %d\n", n,sumofn(n));
    return 0;
}
int sumofn(int x){
    if(x==0){
        return 0;
    }
    else {
        return (x+sumofn(x-1));
    }

}