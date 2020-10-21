#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int rem;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int firstDigit=n%10;
        while(n!=0)
        {
            rem=n%10;
            n=n/10;
        }
        printf("%d\n",firstDigit+rem);
    }
    return 0;
}
