#include<iostream>
using namespace std;
int main()
{
    int solders,lucky=0,unlucky=0;
    cin>>solders;

    for(int i=0; i<solders; i++)
    {
        int weaponNum;
        cin>>weaponNum;

        if(weaponNum%2==0){
            lucky++;
        }
        else
            unlucky++;
    }
    if(lucky>unlucky){
        cout<<"READY FOR BATTLE"<<endl;
    }
    else
        cout<<"NOT READY"<<endl;

    return 0;
}
