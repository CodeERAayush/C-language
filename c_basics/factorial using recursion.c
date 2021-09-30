#include<stdio.h>
#include<conio.h>
int factorial(int a);
int main(){
	int b;
	int a;
	scanf("%d",&a);
	b= factorial(a);
	printf("the factorial is %d",b);
return 0;
}
int factorial(a){
	int x;
	if(a==1 || a==0){
		return 1;
	}
	else{
	return a * factorial(a-1);
	//	return 0;
	}
}
