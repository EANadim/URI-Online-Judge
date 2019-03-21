#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,m1,m2,m,h,d;
    cin>>x>>m1>>y>>m2;
    if(x<y)
        {
            d=y-x-1;
            m=(60-m1+m2);
            m=(d*60)+m;
            h=0;
            if(m>=60)
                {
                    h=m/60;
                    m=m%60;
                }
        }
    else if(x>y)
        {
            d=(24-x)+y-1;
            m=60-m1+m2;
            m=(d*60)+m;
            h=0;
            if(m>=60)
                {
                    h=m/60;
                    m=m%60;
                }
        }
    else if(x==y && m1!=m2)
        {
            m=(60-m1)+m2;
            h=0;
            if(m>=60)
                {
                    h=m/60;
                    m=m%60;
                }
        }
    else if(x==y && m1==m2)
        {
            h=24;
            m=0;
        }
    cout<<"O JOGO DUROU "<<h<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl;
    return 0;
}
