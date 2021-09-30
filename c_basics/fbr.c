#include<stdio.h>
#include<conio.h>
int factorial(int a);

int main(){
    int x,b;
printf("enter a number\n");
scanf("%d",&x);
b= factorial(x);
printf("the factorial of %d is %d",x,b);
return 0;
}
int factorial(a){
    
    if(a==1 || a==0){
        return 1;
    }
    else{
      return a * factorial(a-1);
    }
}