#include<stdio.h>
int main()
{
	int x=3;
	int *j = &x;
	printf("the address of i is %u\n",j);
	printf("the value of i is %d",*j);
	printf("\nthe address of i is %u",&x);
	return 0;
}
