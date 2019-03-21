#include <bits/stdc++.h>
#include<math.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    int X,Y,i,sum=0;
    cin>>X>>Y;
    if(X<Y)
        {
            for(i=X;i<=Y;i++)
                {
                    if(i%13!=0)
                        sum=sum+i;
                }
        }
    else if(X>Y)
        {
            for(i=Y;i<=X;i++)
                {
                    if(i%13!=0)
                        sum=sum+i;
                }
        }
    else
        sum=0;
    cout<<sum<<endl;
    return 0;
}
