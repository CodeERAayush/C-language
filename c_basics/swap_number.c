#include<stdio.h>
void swap(int *x , int *y);

int main(){
int a,b;
printf("enter two numbers to swap\n");
scanf("%d%d",&a,&b);
 swap(&a,&b);

return 0;
}
void swap(int *x , int *y){
    int blank;
blank=*x;
*x=*y;
*y=blank;
printf("the number after swap is \n x=%d\n y=%d\n",*x,*y);

}