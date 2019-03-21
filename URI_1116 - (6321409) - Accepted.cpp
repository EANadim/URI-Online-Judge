#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float x,y;
    float result;
    cin>>n;
    for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            if(y==0)
                {
                    cout<<"divisao impossivel"<<endl;
                }
            else
                {
                    result=x/y;
                    std :: cout<< std :: fixed;
                    std :: cout<< std :: setprecision(1)<<result<<endl;
                }

        }

    return 0;
}
