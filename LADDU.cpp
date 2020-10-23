#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int i,a,point=0;
        cin>>a;

        string origin;
        cin>>origin;

        for(i=0; i<a; i++)
        {
            long long int r,severity;
            string str;
            cin>>str;

            if(str=="CONTEST_WON")
            {
                point += 300;
                cin>>r;

                if(r<20)
                {
                    point +=(20-r);
                }
            }

            else if(str=="TOP_CONTRIBUTOR")
            {
                point +=300;
            }

            else if(str=="BUG_FOUND")
            {
                cin>>severity;

                point += severity;
            }

            else
                point += 50;
        }

        if(origin=="INDIAN")
        {
            cout<<(int)point/200<<endl;
        }

        else
            cout<<(int)point/400<<endl;

    }
    return 0;
}
