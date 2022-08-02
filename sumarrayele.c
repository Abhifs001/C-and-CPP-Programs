#include<stdio.h>
#include<conio.h>
int arraysum(int [],int n);
int main(){
    int arr[7],no;
    printf("Enter the elements of array\n");
    for (int  i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements of array are\n");
    for (int  i = 0; i < 7; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("Enter till what index you want the sum\n");
    scanf("%d",&no);
    
    printf("the sum of %d integers of array is %d\n", no,arraysum(arr,no));
    
}
int arraysum(int Q[],int z){
    if(z==1){
        return Q[0];
    }
    else{
        return arraysum(Q,z-1)+Q[z-1];
    }
}