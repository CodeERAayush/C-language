#include<stdio.h>

int main(){
    int x,y,k;
for(x=1;x<=4;x++){
    for(y=1 ; y<=7 ; y++){
        if(y>=x && y<=8-x && k==0){
            printf("*");
            k=1;
        }
        else{
            printf(" ");
            k=0;
        }
        

    }
    printf("\n");
}
return 0;
}