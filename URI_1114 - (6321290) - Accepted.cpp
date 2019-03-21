#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    loop:
        cin>>x;
        if(x!=2002)
            {
                cout<<"Senha Invalida"<<endl;
                goto loop;
            }
        else if(x==2002)
            {
                cout<<"Acesso Permitido"<<endl;
                return 0;
            }

    return 0;
}
