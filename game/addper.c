#include<stdio.h>

int main(){
int marks[5];
int i;
float per,sum=0;
for(i=0;i<5;i++){
    printf("Enter the Makrk of subject %d\n",i+1);
    scanf("%d",&marks[i]);
}
for(i=0;i<5;i++){
    sum+=marks[i];
    }
    printf("\nTotal Marks Obtained = %.2f\n",sum);
    per=sum/5;
    printf("obtained percentage = %.2f",per);
return 0;
}