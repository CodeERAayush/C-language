#include<stdio.h>
int main()
{
	int x;
	printf("enter your marks obtained\n");
	scanf("%d",&x);
	if(x<=100 && x>=90)
	{
		printf("your grade is A");
		
	}
	if(x<90 && x>=80){
			printf("your grade is B");
	}
		if(x<80 && x>=70)
		{
			printf("your grade is C");
			
		}
		if(x<70 && x>=60){
			printf("your grade is D ");
		}
		
			//else{   printf("you are fail");}
		
		if(x<70){
			printf("you are fail\n first attempt in learning :-)");
		}
		return 0;
		getch();
		}

