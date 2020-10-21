#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    int value, count=0;
    for(int i=0; i<n; i++)
    {
        cin>>value;
        if(value%k==0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
