#include<stdio.h>

int main()
{
    unsigned int withdraw;
    float balance;
    scanf("%u %f",&withdraw,&balance);
    if(withdraw>=balance)
    {
        printf("%0.2f",balance);
    }
    else if(withdraw%5 !=0)
    {
        printf("%0.2f",balance);
    }
    else if(balance>=(withdraw+0.5))
    {
        balance=balance-withdraw-0.5;
        printf("%0.2f",balance);
    }
    else
        printf("%0.2f",balance);

    return 0;
}
