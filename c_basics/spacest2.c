#include<stdio.h>

int main(){
int x,y,z=0;
for(x=1 ; x<=5 ; x++)
{
	x<5? z++ : z-- ;
    for(y=2 ; y<=5 ; y++){
        if(y>=7-z)
        printf("*");
        else
        printf(" ");
    }
    printf("\n");
}

return 0;
} 
