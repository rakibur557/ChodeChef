#include<stdio.h>
int main()
{
    int a;
    scanf ("%d",&a);
    if (a%4==0)
        printf("%d\n",a+1);
    else
        printf("%d\n",a-1);
    return 0;
}
