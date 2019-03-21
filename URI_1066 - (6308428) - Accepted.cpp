#include<bits/stdc++.h>
using namespace std;
int main()
{
    int even,odd,pos,neg,a[10];
    even=0;
    odd=0;
    pos=0;
    neg=0;
    for(int i=0;i<5;i++)
        cin>>a[i];
    for(int j=0;j<5;j++)
        {
            if(a[j]%2==0)
                even++;
            else if(a[j]%2!=0)
                odd++;
        }
    for(int j=0;j<5;j++)
        {
            if(a[j]>0)
                pos++;
            else if(a[j]<0)
                neg++;
        }
    cout<<even<<" valor(es) par(es)"<<endl;
    cout<<odd<<" valor(es) impar(es)"<<endl;
    cout<<pos<<" valor(es) positivo(s)"<<endl;
    cout<<neg<<" valor(es) negativo(s)"<<endl;
    return 0;
}
