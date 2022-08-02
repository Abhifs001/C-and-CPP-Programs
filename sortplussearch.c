#include<stdio.h>
#include<conio.h>
void Busort(int []);
void Bsearch(int [],int );
int main(){
    int a[6],i,target;
    printf("Enter the elements to sort the array\n");

    for ( i = 0; i < 6; i++)
    {
        scanf("%d",&a[i]);
    }

    //calling the function to sort the array

    Busort(a);

    //printing the sorted array 

    printf("The Bubble sorted array is\n");
    for ( i = 0; i < 6; i++)
    {
        printf("%d\n", a[i]);
    }

    //user input of searching the desired element

    printf("Enter the element you want to search\n");
    scanf("%d",&target);

    //calling the function to perform binary search in the sorted array

    Bsearch(a,target);
    
    
}
//bubble sort definition 
void Busort(int a[]){
    int i,j,tem;
    for ( i = 0; i < 6; i++)
    {
        for ( j = 0; j< 6-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                tem=a[j];
                a[j]=a[j+1];
                a[j+1]=tem;
            }
            
        }
        
    }
    
}

//Binary search definition 

void Bsearch(int a[],int tar){
    int left=0,right=6,mid;

    while (left<=right)
    { 
        mid=(left+right)/2;
        if (tar==a[mid])
        {
            printf("The element you searched is %d which is at %dth location\n",tar,mid);
            break;
        }
        else if (tar<a[mid])
        {
            right=mid-1;
        }
        else if(tar>a[mid]){
            left=mid+1;

        }
        
        
    }
    
}