#include<stdio.h>

int main(){
    int x,y;
for(x=1 ; x<=4 ; x++){
    for(y=1 ; y<=4 ; y++){
if(y<=5-x)
printf("*");
else
printf(" ");
    }
   printf("\n");
}
return 0;
}