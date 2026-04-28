#include <stdio.h>
void main()
{
    int a=10;
    int b=20;
    int c=b++;
    a=c++;
    a=a++;
    printf("a=%d b=%d",a,b);
}