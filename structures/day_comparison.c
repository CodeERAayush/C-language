#include <stdio.h>

typedef struct day_comparison
{
   int a, b, c;

} day;
void display(day i){
printf("%d/%d/%d",i.a,i.b,i.c);
}
int compare(day l, day m)
{
   // for ( i = 0; i <1; i++)

   /* code */

   if (l.a < m.a)
      // printf("no");
      return 1;
   if (l.a > m.a)
      // printf("yes");
      return -1;
};

int main()
{
     int f;
   day da1,da2;
   
    printf("enter the date in dd/mm/yy format\n");
   scanf("%d %d %d",&da1.a,&da1.b,&da1.c);
   fflush(stdin);
    printf("please enter the other date you want to compare\n");
   scanf("%d %d %d ",&da2.a,&da2.b,&da2.c);
   fflush(stdin);
display(da1);
display(da2);
f= compare(da1, da2);
  printf("%d",f);

   return 0;
}