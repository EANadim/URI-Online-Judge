#include<bits/stdc++.h>
using namespace std;

int main()
{
  int x,y,d;
  cin>>x>>y;
  if(x>y)
    d=(24-x)+(0+y);
  else if(x<y)
    d=y-x;
  else if(x==y)
    d=24;
  cout<<"O JOGO DUROU "<<d<<" HORA(S)"<<endl;
  return 0;
}
