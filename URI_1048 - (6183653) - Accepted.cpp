#include<bits/stdc++.h>
using namespace std;

int main()
{
    float x,bon;
    cin>>x;
    if(x>=0.00 && x<=400.00)
        {
            bon=x*(15.0/100);
            std::cout<<std::fixed;
            std::cout<<std::setprecision(2);
            cout<<"Novo salario: "<<x+bon<<endl;
            cout<<"Reajuste ganho: "<<bon<<endl;
            cout<<"Em percentual: 15 %"<<endl;
        }
    else if(x>=400.01 && x<=800.00)
        {
            bon=x*(12.0/100);
            std::cout<<std::fixed;
            std::cout<<std::setprecision(2);
            cout<<"Novo salario: "<<x+bon<<endl;
            cout<<"Reajuste ganho: "<<bon<<endl;
            cout<<"Em percentual: 12 %"<<endl;
        }
    else if(x>=800.01 && x<=1200.00)
        {
            bon=x*(10.0/100);
            std::cout<<std::fixed;
            std::cout<<std::setprecision(2);
            cout<<"Novo salario: "<<x+bon<<endl;
            cout<<"Reajuste ganho: "<<bon<<endl;
            cout<<"Em percentual: 10 %"<<endl;
        }
    else if(x>=1200.01 && x<=2000.00)
        {
            bon=x*(7.0/100);
            std::cout<<std::fixed;
            std::cout<<std::setprecision(2);
            cout<<"Novo salario: "<<x+bon<<endl;
            cout<<"Reajuste ganho: "<<bon<<endl;
            cout<<"Em percentual: 7 %"<<endl;
        }
    else if(x>2000.00)
        {
            bon=x*(4.0/100);
            std::cout<<std::fixed;
            std::cout<<std::setprecision(2);
            cout<<"Novo salario: "<<x+bon<<endl;
            cout<<"Reajuste ganho: "<<bon<<endl;
            cout<<"Em percentual: 4 %"<<endl;
        }

    return 0;
}
