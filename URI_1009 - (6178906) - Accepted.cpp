#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    double fixed_sal,sales,final_sal;
    cin>>name>>fixed_sal>>sales;
    final_sal=(sales*0.15)+fixed_sal;
    cout<<"TOTAL = R$ ";
    std::cout<<std::fixed;
    std::cout<<std::setprecision(2)<<final_sal<<endl;
    return 0;
}
