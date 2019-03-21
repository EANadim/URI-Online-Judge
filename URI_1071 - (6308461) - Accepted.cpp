#include<bits/stdc++.h>
using namespace std;
int main()
{
    long X,Y,sum,i;
    sum=0;
    cin>>X>>Y;
    if(X>Y)
        {
            for(i=(Y+1);i<=(X-1);i++)
                {
                    if(i%2!=0)
                        sum=sum+i;
                }
        }
    else if(X<Y)
        {
            for(i=(X+1);i<=(Y-1);i++)
                {
                    if(i%2!=0)
                        sum=sum+i;
                }
        }
    else if(X==Y)
        {
            sum=0;
        }
    cout<<sum<<endl;
    return 0;
}
