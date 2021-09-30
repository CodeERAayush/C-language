#include<stdio.h>
void main()
{ 
int x;
/*char c;
char d;*/

//                                                 (eligibility test program)

printf("enter your marks\t");
scanf("%d",&x);
if(x<90 && x>20){
//	printf("enter your name\t");
	printf("you are qualified\t");
	}
	
	

else if(x>90){
	printf("you are brillient\t");
//	scanf("%c",&d);
}
else{
	printf("you are not eligible");
}
/*int main()
{
    printf("hope!! the result is in your favour, if not so then try again later");
}*/
return 0;
getch();
}
