#include<stdio.h>
#include<conio.h>
void merge(int [],int l,int m,int u);
void Msort(int [],int l,int u);
int main(){
    int A[10],i;
    printf("Enter the elements to sort the array\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&A[i]);
    }

    Msort(A,0,9);
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n",A[i]);
    }
    
    
}
void merge(int a[], int l,int m,int u){
    int i,j,k,t[10];
    i=l;
    j=m+1;
    k=0;
    while (i<=m&&j<=u)
    {
        if (a[i]<a[j])
        {
            t[k]=a[i];
            i++;
              k++;
            
        }else{
            t[k]=a[j];
              k++;
            j++;
        } 
    }

        while (j<=u)
        {
            t[k]=a[j];
            j++;
            k++;
        }
        while (i<=m)
        {
            t[k]=a[i];
            k++;
            i++;
        }
        for ( i = l,k=0;i<=u; i++,k++)
        {
           a[i]=t[k];
        }
}

void Msort(int a[],int l,int u){
    int k;
    if (l<u)
    {
        k=(l+u)/2;
        Msort(a,l,k);
        Msort(a,k+1,u);
        merge(a,l,k,u);
    }
    

}

