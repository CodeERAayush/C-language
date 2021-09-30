#include<stdio.h>
int main()
{
	int x,v;
	printf("enter your age\t");
	scanf("%d",&x);
	//if(x<=18 && x>=90)
	
printf("enter vip pass if possible and if not press any value\n");

scanf("%d",&v);
	if(( x<=90 && x>=18)||v==1){
	
//	if(( x<=90 && x>=18)||!(v==1)){
//if( x<18 && x>=90){
		
	//printf("enter vippass no if possible ");
	printf("you can drive");
	}
	else{ printf("you cannot drive");
	}
	/*scanf("%d",&v);
	if(v==1){
		printf("you can drive");
		
	}
	else{
		printf("you cannot drive");
	}*/
//	(x<=18 ) ? printf("you cannot drive") : printf("you can drive");
	return 0;
	
}
