/*This solution is written in C
Approach: Started from backward of the array and calculate min steps to reach end of array (individually for each element) and store it in DPtable
DPtable is actually a pointer to a memory block of size equal to size of array using calloc function
if there is null in Dptable there is no path from there, thus no comparison
*/
#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
int jump(int* nums, int numsSize);
int main(){
    int arr[5]={2,3,1,1,4};
    int size= sizeof(arr)/sizeof(arr[0]);
    int answer= jump(arr, size);
    printf("%d\n", answer);
}
int jump(int* nums, int numsSize){
    int * DPtable=(int*)calloc(numsSize, sizeof(int)); int i,j,min;
    DPtable[numsSize-1]=0;
    

    for( i=numsSize-2;i>=0;i--){
        int steps= nums[i];
     min= numsSize+1;
        for(int j=1;j<=steps && i+j<numsSize;j++){
            if(DPtable[i+j]<min) {
                min=DPtable[i+j];
            }else{
                min=min;
            }
        }
       
                DPtable[i]=min+1;

            
        
    }
return DPtable[0];
    
}