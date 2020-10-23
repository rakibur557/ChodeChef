#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
           if(n<10){
            cout<<"Thanks for helping Chef!"<<endl;
            }
            else
                cout<<"-1"<<endl;
        }
    }
}
