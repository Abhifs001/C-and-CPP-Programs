#include<stdio.h>
#include<conio.h>
void twodarr();
void main(){

    twodarr();
}
void twodarr(){
    int i,j;
    int a[3][3];
    printf("Enter the elements of twodarray\n");
    for(i=0;i<3;i++){

        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);

        }
    }
    printf("array elements of 2d array are\n");
        for(i=0;i<3;i++){

        for(j=0;j<3;j++){
           printf("%d ",a[i][j]);

        }
        printf("\n");
    }
}