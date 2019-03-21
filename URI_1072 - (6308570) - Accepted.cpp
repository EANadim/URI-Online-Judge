#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,X[9999],in,out;
    in=0;
    out=0;
    cin>>N;
    for(int i=0;i<N;i++)
        cin>>X[i];
    for(int i=0;i<N;i++)
    {
        if(X[i]>=10 && X[i]<=20)
            in++;
    }
    out=N-in;
    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;
    return 0;
}
