#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,x3,x4,x5,x6,x7,o1,o2,o3,o4,o5,o6,o7,N;
    cin>>N;
    if(N>0 && N<1000000)
        {
            x1=N/100;
            o1=N%100;

            x2=o1/50;
            o2=o1%50;

            x3=o2/20;
            o3=o2%20;

            x4=o3/10;
            o4=o3%10;

            x5=o4/5;
            o5=o4%5;

            x6=o5/2;
            o6=o5%2;

            x7=o6/1;
            o7=o6%1;

            cout<<N<<endl;
            cout<<x1<<" nota(s) de R$ 100,00"<<endl;
            cout<<x2<<" nota(s) de R$ 50,00"<<endl;
            cout<<x3<<" nota(s) de R$ 20,00"<<endl;
            cout<<x4<<" nota(s) de R$ 10,00"<<endl;
            cout<<x5<<" nota(s) de R$ 5,00"<<endl;
            cout<<x6<<" nota(s) de R$ 2,00"<<endl;
            cout<<x7<<" nota(s) de R$ 1,00"<<endl;

        }
     else
            return 0;
    return 0;
}
