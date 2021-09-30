#include<stdio.h>
void decrypt(char *dec){
    char *ptr = dec;
    while(*ptr!='\0'){
        *ptr=*ptr-6;
        ptr++;
    }
    }
int main(){
char x[300];
printf("enter the message you have to decrypt:\n");
gets(x);
decrypt(x);
printf("you message is :\n %s",x);
return 0;
}