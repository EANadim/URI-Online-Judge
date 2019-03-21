#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,j;
    x=1;
    y=7;
    for(j=0;j<5;j++)
        {
            for(i=1;i<=3;i++ && y--)
                {
                    cout<<"I="<<x<<" "<<"J="<<y<<endl;
                }
            x=x+2;
            y=y+5;
        }
    return 0;
}
