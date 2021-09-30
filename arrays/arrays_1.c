#include<stdio.h>

int main(){
int x=23;
int *ptr = &x;
printf("%u",ptr);
printf("\n%d",*ptr);
printf("\n%u",&ptr);
ptr++;
printf("\n%u",ptr);
printf("\n%d",*ptr);
return 0;
}