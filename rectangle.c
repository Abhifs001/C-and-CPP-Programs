#include<stdio.h>
#include<conio.h>
int main(){
    int row,col;
    printf("Enter\nrow= ");
    scanf("%d",&row);
    printf("column= ");
    scanf("%d",&col);
    for (int  i = 1; i <=row; i++)
    {
        
        for (int j = 1; j<=col; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}
