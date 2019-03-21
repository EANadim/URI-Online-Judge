#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,X[9999];
    cin>>N;
    for(int i=2;i<=N;i=i+2)
        {
            std::cout << std::setprecision(9);
            std:: cout<<i<<"^2 = "<<pow(i,2)<< std::endl;
        }
    return 0;
}
