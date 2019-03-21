#include <bits/stdc++.h>
using namespace std;

int main()
{
    int empno,wrk_hr;
    float amnt_rcvd,salary;
    cin>>empno>>wrk_hr>>amnt_rcvd;
    salary=wrk_hr*amnt_rcvd;
    cout<<"NUMBER = "<<empno<<endl;
    cout<<"SALARY = U$ ";
    std :: cout<< std :: fixed;
    std :: cout<< std :: setprecision(2)<<salary<<endl;

    return 0;
}
