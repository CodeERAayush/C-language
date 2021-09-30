#include<stdio.h>
int main()
{
int x;
printf("enter a number\t");
scanf("%d",&x);
do{
printf("the number is \t %d\n",x);
++x;
}while(x<10);
return 0;
getch();

}
