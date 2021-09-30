#include<stdio.h>
int factorial(int x);
int main(){
int y;
printf("enter a number\t");
scanf("%d",&y);
//factorial(y);
printf("the factorial is %d",factorial(y));
return 0;
}
int factorial(int x){
    if(x==0 || x==1){
        return 1;
    }
    else {
        printf("%d\n",x);
        return x*factorial(x-1) ;
    }
}