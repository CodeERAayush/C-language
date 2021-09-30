#include<stdio.h>
int report( int*ptr , int*x);
int main(){
    int i=0;
int main[7]={3,4,5,6,7,8};
report(&main ,&i );
return 0;
}
int report( int*ptr , int*x){
    int i;
    for (i=0 ; i<=7 ; i++){
        printf("\nenter the marks of student %d\n",i+1);
        // scanf("%d",&ptr);
        printf("\n%d",*ptr++);
    }
 }