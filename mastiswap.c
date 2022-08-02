#include<stdio.h>
#include<conio.h>
void mastiswap( char []);
void main(){
    char game[10];
   char pri[]= { 'l','u','d','o','\0'};
     int flag =1;
 printf("Enter the game you want to play\n");
 fflush(stdin);
gets(game);


for (int  i = 0; i < 10; i++)
{
    if(game[i]==pri[i]){
        flag =0;
    }
}

if (flag ==0)
{
     mastiswap(game);
} else {
            printf("Ludo enter karo na please \n" );
            main();
           
         
        } 
}
   

void mastiswap(char game[]){
    char temp;
    int c;
    c=0;
    while (game[c]!='\0')
    {
        c++;
    }
    
    for (int  i = 0; i < c; i++)
    {
        if (game[i]=='u'&&game[i+2]=='o')
        {
            temp=game[i];
            game[i]=game[i+2];
            game[i+2]=temp;

            
        }
        
    }
    printf("Let's play Ludo\n");
    printf("After the misuse if swapping function\n");
    printf("u and o are swapped\n");
    printf("-------------------------------------\n");
    printf(" Do me a favour, lets play %s !!\n", game);
    printf(" Rango mein hai pyar ke  %s !!\n", game);
    printf(" haiye   %s, do me  %s!!\n", game, game);
    printf("-------------------------------------\n");
    printf("LOL!hahahaha\n"); 

}