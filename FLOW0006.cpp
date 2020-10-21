#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i=0,rem,sum=0;
        while(n>0)
        {
            rem=n%10;
            sum=sum+rem;
            n/=10;
            i++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
