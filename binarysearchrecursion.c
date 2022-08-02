#include<stdio.h>
#include<conio.h>
int recursiveBsearch(int [], int,int , int );
int main(){   
            int ar[8], target;
printf("enter the elements of array in sorted order \n");
        for(int i =0;i<8;i++){
            scanf("%d", &ar[i]);
        }
printf("Enter the element you want to search\n");
scanf("%d",&target);
                int ans= recursiveBsearch(ar, 0, 7,target);
               if(ans!=-1)
                    printf("Element you searched is at %dth location\n", ans);
                else 
                printf("Element not present");
    return 0;
}
int recursiveBsearch(int ar[], int left, int right, int target){
    int  mid;
 if(left<=right){
        mid= (left + right )/2;
        if(ar[mid]==target){
            return mid;
        }if(target>ar[mid]){ 
            return  recursiveBsearch(ar, mid+1, right, target);
        }if(ar[mid]>target){
            return recursiveBsearch(ar,left, mid-1, target);
        } 
    }
return -1;
}