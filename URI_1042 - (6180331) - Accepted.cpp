#include<bits/stdc++.h>
using namespace std;
#define SWAP(a,b)   { int t; t=a; a=b; b=t; }
void asc(int a[]);

void asc( int a[])
{
  int i, j;
  for(i=1;i<3;i++)
    {
        for(j=0;j<(3-1);j++)
        {
            if( a[j]>a[j+1] ) SWAP(a[j],a[j+1]);
        }
    }
    for(j=0;j<3;j++)
        {
            cout<<a[j]<<endl;
        }
}

int main()
{
    int arr[3];
    int x;
    int sh[3];

    for(x=0;x<3;x++)
        {
            cin>>arr[x];
        }
    for(x=0;x<3;x++)
    {
        sh[x]=arr[x];
    }

    asc(arr);
    cout<<endl;
    for(x=0;x<3;x++)
        cout<<sh[x]<<endl;
    return 0;
}
