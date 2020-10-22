#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

        int arr[t];
        for(int i=0; i<t; i++)
        {
            cin>>arr[i];
        }

        sort(arr,arr+t);

        for(int j = 0; j<t; j++)
        {
        cout << arr[j]<<endl;
        }

    return 0;
}
