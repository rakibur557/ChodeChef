#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int budget;
        cin>>budget;
        int count=0,notes[]={1,2,5,10,50,100};

        for(int i=5; i>=0; i--)
        {
            count += budget/notes[i];
            budget %= notes[i];
        }
        cout<<count<<endl;
    }
}
