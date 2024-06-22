// Rock Paper and Scissors
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

int game(int you, int comp)
{
    if (you == comp)
    {
        return 0;
    }

    else if (you == 's' && comp == 'p')
    {
        return -1;
    }

    else if (you == 's' && comp == 'z')
    {
        return 1;
    }

    else if (you == 'p' && comp == 's')
    {
        return 1;
    }

    else if (you == 'p' && comp == 'z')
    {
        return -1;
    }

    else if (you == 'z' && comp == 's')
    {
        return -1;
    }

    else if (you == 'z' && comp == 'p')
    {
        return 1;
    }
}

int main()
{
    int n, result;

    char comp, you, name[100];

    srand(time(NULL));
    n = rand() % 100;

    if (n < 33)
    {
        comp = 's';
    }
    else if (n > 33 && n < 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 'z';
    }

    printf("Enter your name : ");
    scanf("%[^\n]%*c", name);

    printf("Enter s for STONE, p for PAPER and z for SCISSORS : ");
    scanf("%c", &you);

    result = game(you, comp);

    if (result == 0)
    {
        printf("Game Draw !\n");
    }

    else if (result == 1)
    {
        printf("%s Won !\n", name);
    }

    else
    {
        printf("Computer Won !\n");
    }

    printf("%s : %c and Computer choose : %c", name, you, comp);

    return 0;
}