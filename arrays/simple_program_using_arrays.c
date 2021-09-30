#include<stdio.h>

int main(){
int avg,sum=0,r;
int i;
int marks[5];
for(i= 0;i<=4;i++){
    printf("enter the marks of student i %d\n",i+1);
    scanf("\n%d",&marks[i]);
    
}
for(i=0;i<=4;i++){
//     sum=sum+marks[i];
//     avg=sum/5;
//     printf("\n%d",avg);
 sum=sum+marks[i];
 


 }
 printf("the avg is %d",sum/5);
 printf("\n");
return 0;
}