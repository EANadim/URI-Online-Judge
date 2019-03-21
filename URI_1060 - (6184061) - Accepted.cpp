#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,count=0;
    float a[10];
    for(i=0;i<6;i++)
        cin>>a[i];
    for(i=0;i<6;i++)
        {
            if(a[i]>0)
                count++;
        }
    cout<<count<<" valores positivos"<<endl;
    return 0;
}
