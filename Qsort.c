#include<stdio.h>
#include<conio.h>
int part(int [],int lb,int ub);//partition function 
int qsort(int [],int lb,int ub);//function to call partition function
int main(){
    int Arr[10],i;
    printf("Enter the elements to sort the array\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&Arr[i]);
    }
    qsort(Arr,0,10);
    printf("sorted array is\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n",Arr[i]);
    }  
}

int part(int a[], int lb,int ub){
    int p,down,up,t;
    p=a[lb];
    down=lb;
    up=ub;
    while (down <up)
    {
        while (p>=a[down]  && down<up)
        {
               down++;
        }
        while (p<a[up])
        {
            up--;
        }
        if (down<up)
        {
            t=a[up]; //swap a[up] and a[down]
            a[up]=a[down];
            a[down]=t;
        }  
        
    }
    a[lb]=a[up];  // a[up] ko pehle pahuchado
    a[up]=p;
    return up;
    
}
int  qsort(int a[],int lb,int ub){
    int j;
    if(lb<ub){
    j=part(a,lb,ub);
    qsort(a,lb,j-1);// quick sort function calling itself for first list 
    qsort(a,j+1,ub);}// quick sort function calling itself for second list
    return j;
}
