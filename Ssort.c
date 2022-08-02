#include<stdio.h>
#include<conio.h>
void Ssort(int []);
void main(){

    int i,a[10];
    printf("Enter the elements of the array\n");
    for(i=0;i<10;i++){
        scanf("%d", &a[i]);
    }
Ssort(a);
printf("Sorted array is\n");
for(i=0;i<10;i++){
printf("a[%d]=%d\n", i,a[i]);
}
}
// 5    6   4   3   7    8    2    1  ->elements
// 0    1   3   4   5    6    7    8    ->index
void Ssort(int A[]){
    int i,j,l,min;
    for(i=0;i<10;i++){
        min=A[i];// har iteration mein pehle element ko min mana
        l=i;
        for(j=i+1;j<10;j++){ //j wala loop har baar i ke agle alement se initialize karna hai
//har iteration mein pehle element ko min mana aur baki se compare kiya 
//agar koi smaller mila to usko min mein dala aur phir ascending order mein swap kardiya
        if(A[j]<min){
            min=A[j];
            l=j;
        }

        }
        if(l!=i){
            A[l]=A[i];
            A[i]=min;
        }


    }

}