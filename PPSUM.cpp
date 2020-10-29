#include<bits/stdc++.h>
using namespace std;

int sum(int h, int num)
{
    int value=0;
    if(h==1){
        for(int i=1; i<=num; i=i+1)
        {
            value += i;
        }
        cout<<value<<endl;
    }
    else if(h>1)
    {
        for(int i=1; i<=num; i=i+1)
        {
            value += i;
        }
        sum((h-1),value);
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d,n;
        cin>>d>>n;
        sum(d,n);
    }

    return 0;
}
