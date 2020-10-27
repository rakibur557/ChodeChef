#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        if(n==1)
            cout<<"no"<<endl;
        else{
            for(int i=2; i<n; i++)
            {
                if(n%i==0){
                count++;
                }
            }
        if(count>0){
            cout<<"no"<<endl;
        }
        else
            cout<<"yes"<<endl;
        }
    }

    return 0;
}
