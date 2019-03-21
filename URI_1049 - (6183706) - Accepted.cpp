#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x,y,z;
    cin>>x;
    if(x=="vertebrado")
        {
            cin>>y;
            if(y=="ave")
                {
                    cin>>z;
                    if(z=="carnivoro")
                        cout<<"aguia"<<endl;
                    else if(z=="onivoro")
                        cout<<"pomba"<<endl;
                }
            else if(y=="mamifero")
                {
                    cin>>z;
                    if(z=="onivoro")
                        cout<<"homem"<<endl;
                    else if(z=="herbivoro")
                        cout<<"vaca"<<endl;
                }
        }

        else if(x=="invertebrado")
        {
            cin>>y;
            if(y=="inseto")
                {
                    cin>>z;
                    if(z=="hematofago")
                        cout<<"pulga"<<endl;
                    else if(z=="herbivoro")
                        cout<<"lagarta"<<endl;
                }
            else if(y=="anelideo")
                {
                    cin>>z;
                    if(z=="hematofago")
                        cout<<"sanguessuga"<<endl;
                    else if(z=="onivoro")
                        cout<<"minhoca"<<endl;
                }
        }

    return 0;
}
