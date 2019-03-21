#include <bits/stdc++.h>
using namespace std;

int main()
{
    double V,R;
    cin>>R;
    V=(4.0/3)*3.14159*R*R*R;
    cout<<"VOLUME = ";
    std::cout<<std::fixed;
    std::cout<<std::setprecision(3)<<V<<endl;
    return 0;
}
