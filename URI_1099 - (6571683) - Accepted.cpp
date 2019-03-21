#include <bits/stdc++.h>
#include<math.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    int X,Y,N,i,j,sum=0;
    cin>>N;
    for(i=0;i<N;i++)
        {
            sum=0;
            cin>>X>>Y;
            if(X<Y)
                {
                    for(j=(X+1);j<Y;j++)
                        {
                            if(j%2!=0)
                                sum=sum+j;
                        }
                    cout<<sum<<endl;
                }
            else if(X>Y)
                {
                    for(j=(Y+1);j<X;j++)
                        {
                            if(j%2!=0)
                                sum=sum+j;
                        }
                    cout<<sum<<endl;
                }
            else
                cout<<0<<endl;
        }

    return 0;
}
