#include <stdio.h>

int main() {
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
    char res=(ch>='a')&&(ch<='z');
    printf("%c lower case alphabet i.e is:%d",ch,res);
    return 0;
}