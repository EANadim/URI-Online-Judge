#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a[10],avg,sum;
    int count;
    count=0;
    sum=0;
    for(int i=0;i<6;i++)
        cin>>a[i];
    for(int j=0;j<6;j++)
        {
            if(a[j]>=0)
                {
                    count++;
                    sum=sum+a[j];
                }
        }
    cout<<count;
    cout<<" valores positivos"<<endl;
    avg=sum/count;
    std :: cout<<std :: fixed;
    std :: cout<<std :: setprecision(1)<<avg<<endl;
    return 0;
}
