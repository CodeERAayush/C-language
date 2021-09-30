#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;
int i;
ptr=(int*)calloc(4,sizeof(int));
for( i=0;i<=4;i++){
    printf("%d\n",ptr[i]);
}
return 0;
}