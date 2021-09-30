#include<stdio.h>

int main(){
FILE *ptr;
int num,num1;
ptr = fopen("aayush.txt","r");
fscanf(ptr,"%d",&num);
fscanf(ptr,"%d",&num1);
fclose(ptr);
 printf("%d \n%d",num,num1);

    return 0;
}