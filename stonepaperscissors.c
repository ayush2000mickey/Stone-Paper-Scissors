#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int randomnum()
{
    srand(time(NULL));
    return rand() % 2;
}

int main()
{
    int ch, tell,user,comp;
    start:
    user=0,comp=0;
    char name[50];
    printf("\n******************WELCOME TO******************\n");
    printf("***********STONE PAPER SCISSORS GAME***********\n");
    printf("Enter your name: ");
    gets(name);
    printf("\nWelcome ");
    puts(name);
    for (int i = 1; i <= 3; i++)
    {
        printf("\n***************\n");
        printf("\nPress 0 for stone.\nPress 1 for paper.\nPress 2 for scissors.\n");
        printf("\nYour turn ");
        puts(name);
        scanf("%d", &ch);
        int compturn = randomnum();
        printf("\ncomputer chooses \n%d\n", compturn);
        if (ch == compturn)
        {
            printf("\nDraw\n");
        }
        else if ((ch == 0 && comp == 2) || (ch == 1 && comp == 0) || (ch == 2 && comp == 1))
        {
            printf("\nYou win\n");
            user++;
        }
        else
        {
            printf("\ncomputer wins\n");
            comp++;
        }
    }
    printf("\nPress enter to see the final results\n");
    system("pause");
    system("cls");

    if (user > comp)
    {
        printf("\n***************\n");
        printf("Final winner is ");
        puts(name);
        printf("\ncomputer lost the game\n\n");
    }
    else if (comp > user)
    {
        printf("\n***************\n");
        printf("\nFinal winner is computer\n");
        fputs(name, stdout);
        printf(" lost the game\n\n");
    }
    else
    {
        printf("\n***************\n");
        printf("\n......Match is drawn......\n\n");
    }
    printf("If you want to play again press 1 or press any key to ecit: ");
    scanf("%d",&tell);
    if(tell == 1)
    goto start;
    return 0;
}
