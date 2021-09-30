#include<stdio.h>

typedef struct day_comparison
{
   int a,b,c;
   
}day;
int compare(day l , day m){
if(l.a<m.a)
printf("no");
if(l.a>m.a)
printf("yes");
return 0;
};

int main(){
day da1;
day da2;
printf("enter the date in dd/mm/yy format\n");
scanf("%d %d %d",&da1.a,&da1.b,&da1.c);
printf("please enter the other date you want to compare\n");
scanf("%d %d %d ",&da2.a,&da2.b,&da2.c);
compare(da1,da2);
return 0; 
}
