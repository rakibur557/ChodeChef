#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int a,b;
        cin>>a>>b;
        if(a<b){
            cout<<"<"<<endl;
        }
        else if(a>b){
            cout<<">"<<endl;
        }
        else if(a==b){
            cout<<"="<<endl;
        }
    }
    return 0;
}
