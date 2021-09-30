#include <stdio.h>
#include <time.h>
#include <string.h>


int game(char you, char play)
{

    if (man == bot)
        return 0;
    if (man == "s" && bot == "st")
        return -1;
    else if (man == "st" && bot == "s")
        return 1;
    if (man == "s" && bot == "p")
        return 1;
    else if (man == "p" && bot == "s")
        return -1;
    if (man == "st" && bot == "p")
        return 1;
    else if (man == "p" && bot == "st")
        return -1;
}

int main()
{
    int pc, num;
    char you[2];
    char play;
    // char paper[] = "p";
    // char stone[] = "st";
    // char sessior[] = "s";
    srand(time(0));
    pc = rand() % 100 + 1;

    printf("Enter St for stone P for paper & S for sessior!!\n");
    scanf("%s", you);
    strcpy(play, sessior);
    if (pc < 30)
        play='s';

    else if (pc >= 30 && pc <= 60)
        play='p';

    else
        play="st";

    num = game(you, play);

    if (num == 0)
        printf("game draw");
    if (num == 1)
        printf("you won!!");
    if (num == -1)
        printf("you loose!!");

    printf("%d", num);
    return 0;
}