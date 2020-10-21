#include <bits/stdc++.h>
using namespace std;

int main() {

    long long int num,value,max=0;
    cin >>num;
    int input[num];
    for(int i=0; i<num; i++)
    {
        cin >> input[i];
    }
    sort(input, input+num);
    for(int j=0; j<num; j++)
    {
        value = input[j]*(num-j);
        if(value>=max)
        {
            max=value;
        }
    }
    cout<<max;

	return 0;
}
