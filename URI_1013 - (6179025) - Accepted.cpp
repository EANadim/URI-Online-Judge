#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    if(A>B && A>C)
        cout<<A<<" eh o maior"<<endl;
    else if(B>A && B>C)
        cout<<B<<" eh o maior"<<endl;
    else if(C>A && C>A)
        cout<<C<<" eh o maior"<<endl;
    return 0;
}
