#include<stdio.h>
 int j(int *p){
  printf("%u\n",*p);
  printf("%d\n",p);
    printf("%u\n",&p);
 }
int main(){
// int m[3]={2,3,4};
int x=1;
 int *p=&x;
// p=&x;
printf("%u\n",&x);
printf("%u\n",*p);

 j(&x);
return 0;
}