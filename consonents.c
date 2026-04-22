#include <stdio.h>

int main() {
    char ch;
    printf("Enter the characters\n");
    scanf("%c",&ch);
    int res=(ch=='B')||(ch=='C')||(ch=='D')||(ch=='F')||(ch=='G')||(ch=='H')||(ch=='J')||(ch=='K')||(ch=='L')||(ch=='M')||(ch=='N')||(ch=='P')||(ch=='Q')||(ch=='R')||(ch=='S')||(ch=='T')||(ch=='V')||(ch=='W')||(ch=='X')||(ch=='Y')||(ch=='Z');
    printf("%c is a consonent i.e is:%d",ch,res);

    return 0;
}