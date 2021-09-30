#include <stdio.h>

int main()
{
    int x, y, z = 0;
    for (x = 1; x <= 7; x++)
    {
       x < 5? z++ : z--;
        for (y = 1; y <= 4; y++)
        {
//x < 5 ? z++ : z--;
            if (y >= 5 - z)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
