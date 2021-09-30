#include<stdio.h>
int main()

{
	int i, y, z=1;
	printf("enter a number to get the factorial\n");
	scanf("%d",&y);
	for(i=1 ; i<=y ; i++){
	
		z*=i;
	}
//i=1;
/*while(i<=y){
	z*=i;
	i++;
}*/
	printf("the factorial of %d is %d",y,z);
}
