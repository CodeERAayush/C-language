#include<stdio.h>
int main(){
	int x,y,k=1;
	for (x=1;x<=7;x++){
		x<5? k++ : k-- ;
		for(y=1;y<=6;y++){
			if(y>=7-k && y<=8-k)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
