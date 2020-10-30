#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int p,flag=0;
        cin>>p;

        string arr;
        cin>>arr;

        for(int i=0; i<p; i++)
        {
            if(arr[i]=='I')
            {
                flag=1;
                     break;
            }
            else if(arr[i]=='Y')
            {
                flag=2;
                break;
            }
        }

        if(flag==1)
        {
            cout<<"INDIAN"<<endl;
        }
        else if(flag==2)
        {
            cout<<"NOT INDIAN"<<endl;
        }
        else
            cout<<"NOT SURE"<<endl;
    }
    return 0;
}

