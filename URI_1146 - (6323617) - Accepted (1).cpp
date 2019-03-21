#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,X;
    cin>>X;
    while(X>0)
        {

            for(i=1;i<=X;i++)
                {
                    cout<<i;
                    if(i==X)
                        continue;
                    else
                        cout<<" ";
                }
            cout<<endl;

            cin>>X;
        }
    return 0;
}