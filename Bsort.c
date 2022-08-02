#include<stdio.h>
#include<conio.h>
void Bsort(int []);
void main(){
    int a[10],i,j;
    printf("Enter the elements of the array\n");
    for(i=0;i<10;i++){
        scanf("%d", &a[i]);
    }
    
    Bsort(a);
    printf("The sorted aray is\n");
    for(int i=0;i<10;i++){
        printf("a[%d]=%d\n", i,a[i]);

    }
}
    void Bsort(int A[]){
        int i,j,tem;
        for(i=0;i<10;i++){
            for(j=0;j<=10-1-i;j++){
                if(A[j]>A[j+1]){
                    tem= A[j];
                    A[j]=A[j+1];
                    A[j+1]=tem;
                }
            }
        }


    }