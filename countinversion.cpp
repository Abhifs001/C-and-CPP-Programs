//This code is written using C++
/* suppose array is 8,3,2 then the inversions are  8,3   8,2   3,2 thus, no. of inversions = 3;
this we have to count 
        Brute force - use nested for loop 
        for i in range 0 to n 
        for j in range i+1 to n
        if a[i]>a[j] increase count
        return count 
        time complexity = O(n2) 
        for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				count++;
			}
		}
	}

Optimal Approach- use merge sort, divide list into 2 halves count inversion for individiual list and combine the counts to get final one 
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
    public:

//Funtion to merge the list 

long long merge(long long *arr, int left, int mid, int right){
    int i =left,j=mid, k=0;
    int temp[right-left+1];
    long long count=0;

    while(i<mid && j<=right){
        if(arr[i]<=arr[j]){
            temp[k++]= arr[i++];
        }else{
            temp[k++]=arr[j++];
            count= count+(mid-i);
        }
        
    }
    while(i<mid){
            temp[k++]=arr[i++];
        }
        while(j<=right){
            temp[k++]=arr[j++];
        }
        for (i = left, k = 0; i <= right; i++, k++) {
    arr[i] = temp[k];
  }
    return count;
}

//recurive function to divide the list
long long mergesort(long long *arr, int left, int right){
long long count=0;
    int mid;
    if(right>left){
        mid=(left+right)/2;
        count= count+ mergesort(arr, left, mid);
        count=count+ mergesort(arr, mid+1, right);
        //recursive call
        count= count+merge(arr, left, mid+1, right);
    }
    return count;
}
    long long getInversions(long long *arr, int n){
    // Write your code here.
    return mergesort(arr, 0, n-1);
}

};
int main(){
    Solution a;
    long long arr[]= {8,3,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    long long answer= a.getInversions(arr,size);
    cout<<answer<<endl;

    return 0;
}