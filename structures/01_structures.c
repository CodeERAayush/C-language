#include <stdio.h>
typedef struct number
{
    int a;
    char b;
    float c;

} emp;

void aayush()
{
    printf("the employee is aayush pandey\n");
    printf("his salary is 20,000,000\n");
};
void vinod()
{
    printf("the employee is vinod\n");
    printf("his salary is 3,000,000\n");
};
int main()
{
    emp empl1, empl2, empl3;

    printf("enter employee number\n");

    scanf("%d", &empl1.a);

    if (empl1.a < 20)
    {
        // printf("the employee name is aayush\n");
        // printf("his salary is 20,000,000\n");
        aayush();
    }

    if (empl1.a >= 20 && empl1.a <= 60)
    {
        // printf("the employee is vinod\n");
        // printf("his salary is 3,000,000\n");
        vinod();
    }

    if (empl1.a > 60)
    {
        printf("local employs data is under processing this time\n");
    }
    return 0;
}