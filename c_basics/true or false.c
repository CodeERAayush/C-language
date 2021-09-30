#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
	printf("enter two numbers x and y (x<y)\n");
	scanf("%d%d",&x,&y);
	printf("the statement is true or false that %d is smaller than %d = %d",x,y,x<y);
	getch();
	
}
