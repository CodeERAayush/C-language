#include<stdio.h>
int fib(int x);
int main(){
   int y;
   scanf("%d",&y);
   printf("the value of %d by fibonacci series is %d",y,fib(y));


return 0;
}
fib(int x){
    if(x==0 || x==1){
        return x;
    }
    else{
        
        return fib(x-1)+fib(x-2);
    }
    printf("%d\n",x);
}
    
   

