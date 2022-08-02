#include<stdio.h>
#include<conio.h>
int main(){
    int a[5];
    int left, right, mid;
    int target;
    left=0;
    right=4;
    printf("Enter the array in sorted order\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to search\n");
    scanf("%d",&target);
    
    while(left<=right)
    {
        mid=(left+right)/2;
          if(target==a[mid]){
              
              printf("Element you searched is  %d = a[%d] ",a[mid], mid);
              return mid;
          }else if(target > mid){
              left = mid+1;
          
          }else if(target < a[mid]){
                    right = mid-1;
          }else {
              printf("The element does not exist\n");
          }

    }
    



    //algorithm of binary search
}