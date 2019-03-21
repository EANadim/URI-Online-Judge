#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count,a[10];
    count=0;
    for(int i=0;i<5;i++)
        cin>>a[i];
    for(int j=0;j<5;j++)
        {
            if(a[j]%2==0)
                    count++;;
        }
    cout<<count;
    cout<<" valores pares"<<endl;
    return 0;
}
