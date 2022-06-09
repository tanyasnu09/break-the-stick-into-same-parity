#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
    printf("enter length and enter the required length");
    scanf("%d%d",&a,&b);
    c=b-a;
    if ((c%2==0 && b%2==0) ||( c%2!=0 && b%2!=0))
    {
    printf("yes");
}
else
{
    printf("no");
}
}