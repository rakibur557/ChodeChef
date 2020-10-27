#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,r=0;
        cin>>n;
        int a=n;
        while(n!=0)
        {
            r*=10;
            r+=n%10;
            n/=10;
        }
        if(a==r)
            cout<<"wins"<<endl;
        else
            cout<<"loses"<<endl;
    }
    return 0;
}
/*r = r * 10;
    r = r + n%10;
    n = n/10;
*/
