#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    float x,y,temp;
    x=0;
    y=1;
    for(j=0;j<11;j++)
        {
            temp=y;
            for(i=1;i<=3;i++ && y++)
                {
                    cout<<"I="<<x<<" "<<"J="<<y<<endl;
                }
            x=x+0.2;
            y=temp+0.2;
        }
    return 0;
}
