#include<iostream>
using namespace std;
int main()
{
    int t,n,i,rev;
    cin>>t;
    for(i=0; i<t;)
    {
        rev=0;
        cin>>n;

        while(n!=0)
        {
            rev= rev*10 + n % 10;
            n/=10;
        }
        cout<<rev<<endl;
        i++;
    }

    return 0;
}
