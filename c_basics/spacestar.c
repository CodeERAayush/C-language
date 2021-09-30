#include<stdio.h>

int main(){
    int x,y,k=0;
    for(x= 1 ; x<= 5 ; x++){
       x<5? k++:k--;
        for(y=1 ;y<=5 ; y++){

        
    
    if(y>=7-k)
printf("*");
else
printf(" ");
        }
        printf("\n");
    }

return 0;
}
