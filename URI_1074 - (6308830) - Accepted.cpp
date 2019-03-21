#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,X[9999];
    cin>>N;
    for(int i=0;i<N;i++)
        {
            cin>>X[i];
        }
    for(int j=0;j<N;j++)
        {
            if(X[j]>0 && X[j]%2==0)
                cout<<"EVEN POSITIVE"<<endl;
            else if(X[j]<0 && X[j]%2==0)
                cout<<"EVEN NEGATIVE"<<endl;
            else if(X[j]>0 && X[j]%2!=0)
                cout<<"ODD POSITIVE"<<endl;
            else if(X[j]<0 && X[j]%2!=0)
                cout<<"ODD NEGATIVE"<<endl;
            else if(X[j]==0)
                cout<<"NULL"<<endl;
        }
    return 0;
}
