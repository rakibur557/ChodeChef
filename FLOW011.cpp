#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double salary,G_salary,HRA,DA;
        cin>>salary;

        if(salary<1500){
            HRA = 10*salary/100;
            DA = 90*salary/100;
        }
        else
        {
            HRA = 500;
            DA = 98*salary/100;
        }
        
        G_salary = salary+HRA+DA;
        cout<<fixed<<setprecision(2)<<G_salary<<endl;
    }
    return 0;
}