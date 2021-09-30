#include<stdio.h>
#include<stdlib.h>
int sum(int a , int b);
int main()
{
	int c;
	int x,y;

	printf("enter the number\n");
	scanf("%d %d",&x,&y);
	c= sum(x,y);
	printf("the sum is %d",c);
	return 0;
}
int sum(int a , int b){
int d;
	d=a+b;
	return d;
	
}
