//merge sorted array without using extra space
/*this code is written in C
1. basic approach is to merge the arrays and then sort  the combined array but this is not a good practice as merge means to sort the pair at real time
2. thus, approach is same as we'merge the lists' in the merge sort so i did but the problem is that elements are in the beginning and the space filled with zero is at last so if you apply merging method of Merge Sort you will encounter problem 

int i=0,j=0;
   while(i<m+n && j<nums2Size){
       int tem;
       if(nums1[i]<nums2[j]){
           i++;
       }else{
           tem=nums1[i];
           nums1[i]=nums2[j];
           nums1[i+1]=tem;
           j++;
       }
       if(nums1[i]==0){
           nums1[i]=nums2[j];
           j++;  
       }
   }
   TEST CASE:
4 5 6 0 0 0  
1 2 3 
the output will be  1 2 3 4 0 0 because shifting the elements towards right will override 5 and 6 which are greater than the elements of list 2


3. Therefore, we have approach from the last of the lists set i,j, k variables and compare the elements from the last of both the list at last if k is greater than 0 fill all the elements of nums2 to nums1 
code is submitted successfully


4. if you write the same code using CPP then it is simple and small
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(m+n);
        int j =0;
        for(int i =m;i<m+n;i++){
            nums1[i]=nums2[j];
            j++; 
        }
        sort(nums1.begin(),nums1.end());      
    }
};

*/
#include<stdio.h>
#include<conio.h>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n);

int main(int argc, char const *argv[])
{
    int A1[]={4,5,6,0,0,0};
    int A2[]={1,2,3};
    
   int size1=sizeof(A1)/sizeof(A1[0]);
   int size2=sizeof(A2)/sizeof(A2[0]);
   int m=3,n=3;
   merge(A1,size1,m,A2,size2,n);

    return 0;
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
   int i=m-1,j=n-1,k=nums1Size-1;
   while(i>=0 && j>=0 && k>=0){
       if(nums1[i]>nums2[j]){
           nums1[k]=nums1[i];
           i--;
       }else{
           nums1[k]=nums2[j];
           j--;
       }
       k--;
   }
   if(k>=0){
       while(k>=0 && j>=0){
       nums1[k--]=nums2[j--];
   }
   }

   
   
    for(int i=0;i<m+n;i++){
        printf("%d\n", nums1[i]);
    }

}