/*This code is written in C and has following approaches :
1. Run 2 nested for loops9 i =1 to n and j=z i+1 to n  and check if arr[i]==arr[j]
2. sort the array and check the adjacent element are equal or not, if equal return it but this will take extra time
3. using the hashtable which keeps the frequency of each elements if frequency is greater than 1 return that element but this is using extra space we again further optimize it
4.
*/

#include<stdio.h>
#include<conio.h>
int findDuplicate(int* nums, int numsSize);
int main(int argc, char const *argv[])
{
    int arr[5]={3,1,3,4,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int answer=findDuplicate(arr, size);
    printf("this is the answer %d\n", answer);
    
    return 0;
}
int findDuplicate(int* nums, int numsSize){
    int arr[numsSize];
    for(int i=0;i<numsSize;i++){
        arr[nums[i]]=0;
    }
    for(int i=0;i<numsSize;i++){
        arr[nums[i]]++;
        if(arr[nums[i]]>1){
            return nums[i];
        }
    }
    for(int i=0;i<numsSize;i++){
        printf("%d\n", arr[nums[i]]);
    }
    


        
    
return 1;
}
