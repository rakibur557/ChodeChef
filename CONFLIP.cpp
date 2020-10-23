#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int g,i,n,q,h;
        cin>>g;
        for(int j=0; j<g; j++)
        {
            cin>>i>>n>>q;

            h=(int)n/2;
            if(i==1 && q==1){
                cout<<h<<endl;
            }
            if(i==2 && q==1){
                cout<<n-h<<endl;
            }
            if(i==1 && q==2){
                cout<<n-h<<endl;
            }
            if(i==2 && q==2){
                cout<<h<<endl;
            }
        }

    }
    return 0;
}



