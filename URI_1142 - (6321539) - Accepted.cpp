#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,x;
    cin>>n;
    x=0;
    for(i=0;i<n;i++)
        {
            for(j=0;j<3;j++)
                {
                    cout<<++x<<" ";
                }
             x++;
            cout<<"PUM"<<endl;
        }
    return 0;
}
