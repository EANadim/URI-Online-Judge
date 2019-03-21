#include <bits/stdc++.h>
#include<math.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    float A,B,C,R1,R2,Y;
    cin>>A>>B>>C;
    if(A==0)
        {
            cout<<"Impossivel calcular"<<endl;
            return 0;
        }
    Y=((B*B)-(4*A*C));
    if(Y<0)
    {
        cout<<"Impossivel calcular"<<endl;
        return 0;
    }
    R1=(-B+sqrt(Y))/(2*A);
    R2=(-B-sqrt(Y))/(2*A);
    std :: cout<< std :: fixed;
    std :: cout<< std :: setprecision(5)<<"R1 = "<<R1<<endl;
    std :: cout<< std :: setprecision(5)<<"R2 = "<<R2<<endl;
    return 0;
}
