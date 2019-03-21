#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,x3,x4,x5,x6,x7,o1,o2,o3,o4,o5,o6,o7,X,Z,c1,c2,c3,c4,c5,p1,p2,p3,p4,p5;
    double N;
    double Y;
    cin>>N;

    X=N;
    Y=N-X;
    Z=(Y*100);
    if(N>=0 && N<=1000000.00)
        {
            x1=X/100;
            o1=X%100;

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

            c1=Z/50;
            p1=Z%50;

            c2=p1/25;
            p2=p1%25;

            c3=p2/10;
            p3=p2%10;

            c4=p3/5;
            p4=p3%5;

            c5=p4/1;
            p5=p4%1;

            cout<<"NOTAS:"<<endl;
            cout<<x1<<" nota(s) de R$ 100.00"<<endl;
            cout<<x2<<" nota(s) de R$ 50.00"<<endl;
            cout<<x3<<" nota(s) de R$ 20.00"<<endl;
            cout<<x4<<" nota(s) de R$ 10.00"<<endl;
            cout<<x5<<" nota(s) de R$ 5.00"<<endl;
            cout<<x6<<" nota(s) de R$ 2.00"<<endl;
            cout<<"MOEDAS:"<<endl;
            cout<<x7<<" moeda(s) de R$ 1.00"<<endl;
            cout<<c1<<" moeda(s) de R$ 0.50"<<endl;
            cout<<c2<<" moeda(s) de R$ 0.25"<<endl;
            cout<<c3<<" moeda(s) de R$ 0.10"<<endl;
            cout<<c4<<" moeda(s) de R$ 0.05"<<endl;
            cout<<c5<<" moeda(s) de R$ 0.01"<<endl;

        }
     else
            return 0;
    return 0;
}
