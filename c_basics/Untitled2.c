#include<stdio.h>
void encrypt(char *st){
    char *ptr = st;
    while(*ptr!='\0'){
    *ptr = *ptr-1;
    ptr++;
    }
    


}
int main(){
    // char c[];
char s[300];
printf("enter the message to encrypt :\n");
gets(s);

//scanf("%s",&s);
//gets(s);
//puts(s);
encrypt(s); 
printf("\nthe message after encryption is : \n%s",s);

return 0;
}
