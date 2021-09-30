#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;
int i,n;
printf("enter the value you want to allocate\n");
scanf("%d",&n);
ptr= (int*)malloc((n-1)*sizeof(int));
printf("enter the values\n");
for(i=0;i<=(n-1);i++)
{
   scanf("%d",&ptr[i]);

}
printf("you put the values\n");
for(i=0;i<=(n-1);i++)
{
    printf("%d\n",ptr[i]);

}
free(ptr);
return 0;
}