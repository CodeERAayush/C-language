#include<stdio.h>
#include<conio.h>
void india();
void africa();
void arab();
void usa();

int main()
{ int x;
scanf("%d",&x);
	printf("i am in  main\n");
	while(x<10){
//	goto sos;
	india();
//	goto sos;
	x++;
	}
	//sos : printf("aayush\n\n\n");
	printf("i am back in main");
	return 0;
	
}
void india(){
	printf("i am in india\n");
	africa();
	printf("\ni am back in india\n");
}
void africa(){
	printf("i am in africa");
	arab();
	usa();
}
void arab(){
	printf("\ni am in arab");
}
void usa(){
	printf("\ni am in usa");
}

