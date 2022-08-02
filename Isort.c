#include<stdio.h>
#include<conio.h>
void Isort(int []);
void main(){
    int i,j,a[10];
    printf("enter the elements of array\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
   Isort(a);
    printf("sorted array is\n");
    for ( i = 0; i < 10; i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
        
    }
    

}
void Isort(int A[]){
    int i,j,tem;
    for(i=1;i<10;i++){
        tem=A[i];
        j=i-1;
        while(A[j]>tem && j>=0){
            A[j+1]=A[j];
        
            j--;
        }
        A[j+1]=tem;
    }
}
