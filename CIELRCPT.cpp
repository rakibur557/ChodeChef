#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m;
    cin>>t;
    while(t--)
    {
        cin>>m;
        int count=0,prize=2048;
    while(m>0)
    {
        count += (m/prize);
        m=m%prize;
        prize=prize/2;
    }
    cout<<count<<endl;
    }
    return 0;
}
