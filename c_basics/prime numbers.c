#include<stdio.h>
int main()
{
	int x,y=2,z;
	printf("enter a number\n");
	scanf("%d",&x);
	while(y<x){
		//	y++;
		if(x%y==0){
			printf("the number is composite");
			break;
		}
		
	
		else{
			printf("prime number");
			break;
		}
		y++;
		
	}
	
		
	//	if(x%y==0){
	//		printf("the number is not prime");
	//		break;
	//	}
	//	else{
	//		printf(" a prime number");
	//		break;
	//	}
	
}
