#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v,t;
    double l,d;
    cin>>t>>v;
    d=v*t;
    l=((d)/12);
    std::cout<<std::fixed;
    std::cout<<std::setprecision(3)<<l<<endl;
    return 0;
}
