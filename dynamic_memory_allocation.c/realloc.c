#include<stdio.h>

int main(){
int *ptr;
int i;
ptr = (int*)calloc(4,sizeof(int));
for(i=0;i<4;i++){
    printf("%d\n",ptr[i]);
}
ptr=realloc(ptr,5*sizeof(int));
printf("after reallocation");
for(i=0;i<5;i++){
    printf("\n0");
}
return 0;
}