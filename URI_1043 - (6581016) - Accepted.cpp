#include <bits/stdc++.h>
#include<math.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    float A,B,C;
    cin>>A>>B>>C;
    std :: cout<< std :: fixed;

    if((A+B)>C && (B+C)>A && (C+A)>B)
        std :: cout<< std :: setprecision(1)<<"Perimetro = "<<A+B+C<<endl;
    else
        std :: cout<<std :: setprecision(1)<<"Area = "<<0.5*C*(A+B)<<endl;

    return 0;
}
