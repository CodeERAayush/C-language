#include<stdio.h>

int main(){
FILE *ptr;

int s[50];
ptr=fopen("write.txt","w");
 fprintf(ptr,"hey this is aayush",s);
//  putc('a',ptr);
fclose(ptr);
ptr=fopen("write.txt","r");
fscanf(ptr,"%s",s);
// fgetc(ptr);
printf("%s",s);

return 0;
}