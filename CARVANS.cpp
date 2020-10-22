#include<bits/stdc++.h>
using namespace std;
int main()
{
//    ios_base::sync_stdio(false);
    // cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int nc,speed,maxSpd,count=0;
        cin>>nc;
        for(int i=1; i<=nc; i++)
        {
            cin>>speed;

            if(i==1)
            {
                maxSpd=speed;
                count=count+1;
            }
            else if(maxSpd>speed)
            {
                maxSpd=speed;
                count=count+1;
            }
        }
        cout<<count<<endl;

    }
    return 0;
}
