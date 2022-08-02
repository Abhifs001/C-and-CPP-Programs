/*This is kadane's Algorithm which is used for finding the maximum subarray sum in a given array of integers
This code is written in C
we will first write the Brute Force Appproach for this problem statement

1. Brute Force: 
3 nested loops 
i=0 to n
j=i to n 
k= i to j 
sum = sum + arr[k]
if sum > max update max = sum 
update sum = 0 for next iteration

CODE:- this often will give TLE error complexities are time - O(n3) and space O(1)
                    int i,j,k, maxsum=INT_MIN, temp=0;

                for(i=0;i<numsSize;i++){
                    for( j=i;j<numsSize;j++){
                        for(k=i;k<=j;k++){
                            temp=temp+nums[k];
                            
                        }if(temp>maxsum){
                            maxsum=temp;
                        }temp=0;
                    }
                }
                return maxsum;


2. Efficient Approach is the Kadane's Algorithm
It is an Iterative Dynamic Programming which uses the maximum sum subarr ending of previous iteration to calculate the current sum

The simple idea of Kadane’s algorithm is to look for all positive contiguous segments of the array (max_ending_here is used for this). And keep track of maximum sum contiguous segment among all positive segments (max_so_far is used for this). Each time we get a positive sum compare it with max_so_far and update max_so_far if it is greater than max_so_far 

max_till_now= INTMIN and max_ending= 0 - > initial condition
max ending + arr[i]
if max ending > max till now update max till now
if max ending <0
max ending = 0;
return max till now
*/
#include<stdio.h>
#include<conio.h>
#include<limits.h>
int maxSubArray(int* nums, int numsSize);
int main(int argc, char const *argv[])
{
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int size= sizeof(arr)/sizeof(arr[0]);
    int Max_subarr= maxSubArray(arr, size);
    printf("%d\n", Max_subarr);
    return 0;
}
int maxSubArray(int* nums, int numsSize){
    int max_tillnow=INT_MIN, maxEnding=0;//initialize

    for(int i=0;i<numsSize;i++){
        maxEnding=maxEnding+nums[i];//positive segments of array are considered 

        if(maxEnding>max_tillnow){
            max_tillnow= maxEnding;
        }

        if(maxEnding<0){
            maxEnding=0;//because we wont't to consider the negative ones
        }
    }

return max_tillnow;

}
