#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,max_val,x[9999],index;
    for(i=0;i<100;i++)
        {
            cin>>x[i];
        }
    max_val=x[0];
    for(i=0;i<100;i++)
        {
            if(x[i]>max_val)
                {
                    max_val=x[i];
                    index=i+1;
                }
        }
    cout<<max_val<<endl;
    cout<<index<<endl;
    return 0;
}
