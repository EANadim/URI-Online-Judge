#include <bits/stdc++.h>
using namespace std;

int main()
{
    double A,B,C,triangle,circle,trapi,square,rectangle;
    cin>>A>>B>>C;
    triangle=(1.0/2)*A*C;
    circle=3.14159*C*C;
    trapi=((A+B)/2.0)*C;
    square=B*B;
    rectangle=A*B;
    cout<<"TRIANGULO: ";
    std::cout<<std::fixed;
    std::cout<<std::setprecision(3)<<triangle<<endl;
    cout<<"CIRCULO: ";
    std::cout<<std::fixed;
    std::cout<<std::setprecision(3)<<circle<<endl;
    cout<<"TRAPEZIO: ";
    std::cout<<std::fixed;
    std::cout<<std::setprecision(3)<<trapi<<endl;
    cout<<"QUADRADO: ";
    std::cout<<std::fixed;
    std::cout<<std::setprecision(3)<<square<<endl;
    cout<<"RETANGULO: ";
    std::cout<<std::fixed;
    std::cout<<std::setprecision(3)<<rectangle<<endl;
    return 0;
}
