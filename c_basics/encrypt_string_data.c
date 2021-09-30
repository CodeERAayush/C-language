#include<stdio.h>
void encrypt(char *en){
char *ptr = en ;
while(*ptr!='\0'){
*ptr = *ptr+6;
ptr++;
}

}
int main(){
char s[300];
printf("enter a message to encrypt:\n");
gets(s);
encrypt(s);
printf("\nthe message after encryption is : %s",s);

return 0;
}