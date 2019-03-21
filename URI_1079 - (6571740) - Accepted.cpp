#include <bits/stdc++.h>
#include<math.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    float a,b,c,N;
    int i;
    cin>>N;
    for(i=0;i<N;i++)
        {
            cin>>a>>b>>c;
            std :: cout<< std :: fixed;
            std :: cout<< std :: setprecision(1)<<(a*2+b*3+c*5)/10<<endl;
        }

    return 0;
}
