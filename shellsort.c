#include<stdio.h>
#include<conio.h>
/*program to implement shell sort*/
void shelsort(int []);

int main(){
    int a[10], i;
    printf("Enter the elements to sort the array\n");
    for(i=0;i<10;i++){
        scanf("%d", &a[i]);
    }

    shelsort(a);
    printf("sorted array is\n");
    for(i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
}

//function definition 
void shelsort(int a[]){
    int i,j,span=5,t;
    

        while(span>0){
            for(i=span;i<10;i++){
                t=a[i];
                j=i-span;
                while (a[j]>t&&j>=0)
                {
                    a[j+span]=a[j];
                    j=j-span;
                }
                a[j+span]=t;
            }
                span = span-2;
        }
    

          
}

   
 
    
