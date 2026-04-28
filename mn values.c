#include <stdio.h>
int output(int i,int n,int sum)
{
    if(i>n)
    {
        return sum;
    }
}
int main()
{
    int m,n;
    printf("Enter the start and end values\n");
    scanf("%d%d",&m,&n);
    int res=output(m,n,0);
    printf("The sum is %d",res);
}