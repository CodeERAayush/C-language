#include<stdio.h>
void encrypt(char *x){
    char *ptr=x;
    while(*ptr!='\0'){
        *ptr= *ptr+6;
        *ptr++;
    }
}
int main(){
char s[300];
printf("entr the message you want to decrypt  : \n");
gets(s);
encrypt(s);
printf("your message after  decrypting: \n %s",s);
return 0;
}
// #include<stdio.h>
// void encrypt(char *x){
//     char *ptr=x;
//     while(*ptr!='\0'){
//         *ptr= *ptr+6;
//         *ptr++;
//     }
// }
// int main(){
// char s[300];
// printf("entr the message you want to encrypt : \n");
// gets(s);
// encrypt(s);
// printf("your message after encrypting: \n %s",s);
// return 0;
// }