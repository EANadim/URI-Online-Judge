#include <bits/stdc++.h>
#include<math.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    int M,N,i,sum;
    loop:
    cin>>M>>N;
    sum=0;
    if(M>0 && N>0)
        {
            if(M>N)
                {
                    for(i=N;i<=M;i++)
                        {
                            cout<<i<<" ";
                            sum=sum+i;
                        }
                    cout<<"Sum="<<sum<<endl;
                }
            else if(M<N)
                {
                    for(i=M;i<=N;i++)
                        {
                            cout<<i<<" ";
                            sum=sum+i;
                        }
                    cout<<"Sum="<<sum<<endl;
                }
            goto loop;
        }
    else
            return 0;
}
