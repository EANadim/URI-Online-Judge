#include<bits/stdc++.h>
using namespace std;
int main()
{
    int code[6]={1,2,3,4,5,'/0'};
    int X,Y;
    double price[6]={4.00,4.50,5.00,2.00,1.50,'/0'};
    cin>>X>>Y;
    std::cout<<std::fixed;
    std::cout<<std::setprecision(2)<<"Total: R$ "<<price[X-1]*Y<<endl;
    return 0;
}
