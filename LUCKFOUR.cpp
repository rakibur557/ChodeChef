#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,rem,count=0;
        cin>>n;
        while(n!=0)
        {
            rem=n%10;
            if(rem==4)
             {
                 count++;
             }
            n=n/10;
        }
        cout<<count<<endl;
    }

    return 0;
}
