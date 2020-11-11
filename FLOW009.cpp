#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int q;
        double p,r,d;
        cin>>q>>p;
        r=q*p;
        if(q>=1000)
        {
            d=10*r/100;
            cout<<fixed<<setprecision(6)<<r-d<<endl;
        }
        else
            cout<<fixed<<setprecision(6)<<r<<endl;

    }
    return 0;
}
