#include <stdio.h>
void swap(int *x, int *y);

int main()
{
    int a, b;
    printf("enter two number to swap\n");
    printf("enter x\n");
    scanf("%d", &a);
    printf("\nenter y\n");
    scanf("%d", &b);
    swap(&a, &b);

    return 0;
}
void swap(int *x, int *y)
{
    int blank;
    // *y = *x + *y;
    // *x = *y - *x;
    // *y = *y - *x;
    blank=*x;
    *x=*y;
    *y=blank;
    printf("the number after swap is \n x=%d\n y=%d\n", *x, *y);
}