// make an tic tac toe game.....  
#include<stdio.h>
#include<string.h>
   char game[3][3]={" "};  
    char name1[30];
    char name2[30];
    int x;

    int gamePosCheck(int m)
    {
        top:
        if(m==0)
        {
            printf("\n%s its your turn",name1);
            scanf("%d",&x);
            if(x>=1 && x<=9){}
            else{
                printf("invalid input out of box try again...");
                goto top;
            }
        }
        else if(m==1)
        {
            printf("\n%s its your turn",name2);
            scanf("%d",&x);
            if(x>=1 && x<=9){}
            else{
                printf("invalid input out of box try again...");
                goto top;
            }
        }
        int a=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(a==x-1)
                {
                    if(game[i][j]=='x'||game[i][j]=='o')
                    {
                        printf(" \ninvalid input try again....\n");
                        goto top;
                    }
                    else if(m==0)
                    {
                        game[i][j]='x';
                        return x;
                     }
                     else if(m==1)
                    {
                        game[i][j]='o';
                        return x;
                    }
                }
                a++;
            }
        }
        return x;
    }
    void gamePosShow(int x)
    {
        if(x>0 && x<10)
        {
            for(int z=0;z<3;z++)
            {
                for(int l=0;l<3;l++)
                {
                    if(game[z][l]=='\0' || game[z][l]=='\n')
                    {
                        game[z][l]=' ';
                    }
                    printf(" | %c   ",game[z][l]);  
                }
                printf("\n");
                    printf("___________________");
                    printf("\n");
            }
        } 
    }
    int gameWinLoss(int q)
    {
        if(game[0][0]=='x' && game[0][1]=='x' && game[0][2]=='x' || game[1][0]=='x' && game[1][1]=='x' && game[1][2]=='x' || game[2][0]=='x' && game[2][1]=='x' && game[2][2]=='x' || game[0][0]=='x' && game[1][0]=='x' && game[2][0]=='x' || game[0][1]=='x' && game[1][1]=='x' && game[2][1]=='x' || game[0][2]=='x' && game[1][2]=='x' && game[2][2]=='x' || game[0][0]=='x' && game[1][1]=='x' && game[2][2]=='x' || game[0][2]=='x' && game[1][1]=='x' && game[2][0]=='x')
        {
            printf("\n player 1 %s is winner ....\n",name1);
            return 1;
        }
        else if(game[0][0]=='o' && game[0][1]=='o' && game[0][2]=='o' || game[1][0]=='o' && game[1][1]=='o' && game[1][2]=='o' || game[2][0]=='o' && game[2][1]=='o' && game[2][2]=='o' || game[0][0]=='o' && game[1][0]=='o' && game[2][0]=='o' || game[0][1]=='o' && game[1][1]=='o' && game[2][1]=='o' || game[0][2]=='o' && game[1][2]=='o' && game[2][2]=='o' || game[0][0]=='o' && game[1][1]=='o' && game[2][2]=='o' || game[0][2]=='o' && game[1][1]=='o' && game[2][0]=='o')
        {
            printf("\n player 2 %s is winner ....\n",name2);
            return 1;
        }
        else if(q==4)
        {
            printf("\n the match is drawn \n");
            return 1;
        }
        return 0;
    }
int main()
{
    int q;
    q=1;  
    printf("\nEnter 1st player name = ");
    fflush(stdin);
    gets(name1);
    printf("\nEnter 2nd player name = ");
    fflush(stdin);
    gets(name2);
    printf("\nenter your choice \n");
    printf("1 for first position\n2 for second pos and so on... till 9 for the last position... \n");
    int y=0,k=1,l=0;
    int i=0;
    char ans='y';
    while(ans=='y' || ans=='Y')
    {
        while(1)
        {
        x=gamePosCheck(y);
        gamePosShow(x);
           
       l=gameWinLoss(q);
        if(l==1)
        {
            break;
        }
       x=gamePosCheck(k);
       gamePosShow(x);
       l=gameWinLoss(q);
        if(l==1)
        {
            break;
        }
        q++; 
        }
    for(int z=0;z<3;z++)
            {
                for(int l=0;l<3;l++)
                {
                    if(game[z][l]=='\0')
                    {
                        printf(" ");
                    }
                    printf("|%c|",game[z][l]);                 
                }
                printf("\n");
                    printf("_________");
                    printf("\n");
            }
    printf("\n do you want to play again y/n...");
    fflush(stdin);
    scanf("%c",&ans);
    if(ans=='y' || ans=='Y')
    {
        q=1;
        int m;
        int n;
        for(m=0;m<3;m++)
        {
            for(n=0;n<3;n++)
            {
                game[m][n]=' ';
            }
        }
    } 
    }
    return 0;
}
//  completed...