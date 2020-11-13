#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	   }
	   x=a[0];
	   for(int i=1;i<n;i++)
	   {
	     x=__gcd(x,a[i]); 
	   }
	   for(int i=0;i<n;i++)
	   {
	       cout<<a[i]/x<<" ";
	   }
	   cout<<endl;
	}
	return 0;
}
