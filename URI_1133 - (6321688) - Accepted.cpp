#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x<y)
        {
            for(int i=x+1;i<y;i++)
                {
                    if(i%5==2 || i%5==3)
                        cout<<i<<endl;
                }
        }
    if(x>y)
        {
            for(int j=y+1;j<x;j++)
                {
                    if(j%5==2 || j%5==3)
                        cout<<j<<endl;
                }
        }
    return 0;
}
