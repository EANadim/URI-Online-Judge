#include <bits/stdc++.h>
using namespace std;

int main()
{
    int code1,code2,num_unit1,num_unit2;
    float price1,price2,pay;
    cin>>code1>>num_unit1>>price1;
    cin>>code2>>num_unit2>>price2;
    pay=(num_unit1*price1)+(num_unit2*price2);
    cout<<"VALOR A PAGAR: R$ ";
    std::cout<<std::fixed;
    std::cout<<std::setprecision(2)<<pay<<endl;
    return 0;
}
