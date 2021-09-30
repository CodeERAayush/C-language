#include<stdio.h>

int main(){
    int x=2;
// int main[2]={1,2};
//   x= main[0]+2;
// printf("%d",x);
int *y = &x;
printf("%u\n",y);
 y;
// *y = &x;
printf("%u\n",y+3);

return 0;
}