#include<stdio.h>

int main(){
int x,y,i;
for( x=1;x<=5;x++)
{ x<3? i++:(i++)+1;
 
    for( y=1 ; y<=4 ; y++)
    {
       // if(y>=4-i && y<=5-i)
       if(y>=4-i && y<=5-i)
        printf("*");
        else 
        printf(" ");
    }
    printf("\n");
}
return 0;
}