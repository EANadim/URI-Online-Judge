#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,x3,o1,o2,o3,N;
    cin>>N;
    x3=N;
    if(x3<60)
     {
            x3=N;
            x2=0;
            x1=0;
     }


    else if(x3>=60)
        {
            x2=x3/60;
            o2=x3%60;
            x3=o2;
            x1=0;
            if(x2>=60)
                {
                    x1=x2/60;
                    o1=x2%60;
                    x2=o1;
                }
        }

    cout<<x1<<":"<<x2<<":"<<x3<<endl;
    return 0;
}
