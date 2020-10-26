#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,profit,max=0;
        cin>>n;
        while(n--)
        {
            long int s,p,v;
            cin>>s>>p>>v;

            profit = p/(s+1)*v;

             if(profit>max){
                max=profit;
            }
        }
        cout<<max<<endl;
    }

    return 0;
}
//solved by: Rakibur Rahman
//https://www.codechef.com/users/rakib557
