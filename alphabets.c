#include <stdio.h>

int main() {
    char ch;
    printf("Enter the characters\n");
    scanf("%c",&ch);
    int res= !((ch>='0')&&(ch<='9')); 
    printf("%c is a alphabet i.e is:%d",ch,res);

    return 0;
}