#include<stdio.h>

int main(){
char s[]="aayush";
char *ptr = s;
while(*ptr!='\0'){
    printf("%c",*ptr);
    ptr++;
}
return 0;
}