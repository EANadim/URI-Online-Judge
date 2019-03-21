#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    loop:
    cin>>x>>y;
    if(x>0 && y>0)
        {
            cout<<"primeiro"<<endl;
            goto loop;
        }

    else if(x>0 && y<0)
        {
            cout<<"quarto"<<endl;
            goto loop;
        }

    else if(x<0 && y>0)
        {
            cout<<"segundo"<<endl;
            goto loop;
        }

    else if(x<0 && y<0)
        {
            cout<<"terceiro"<<endl;
            goto loop;
        }

    else if(x==0 || y==0 || x==NULL || y==NULL)
        return 0;

    return 0;
}
