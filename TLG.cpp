#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num_of_round, score_of_p1, score_of_p2, player1=0, player2=0,max=0,diff,winner;

    cin>>num_of_round;
    while(num_of_round--)
    {
        cin>>score_of_p1>>score_of_p2;

        player1 += score_of_p1;
        player2 += score_of_p2;

        if(player1>player2)
        {
            diff = player1-player2;

            if(max<diff)
            {
                max=diff;
                winner=1;
            }
        }
        else
        {
            diff=player2-player1;
            if(max<diff)
            {
                max=diff;
                winner=2;
            }
        }
    }
    cout<<winner<<" "<<max<<endl;
    return 0;
}
