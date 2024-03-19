//Autor: Iván Bezares Pino
#include <iostream>

int main(){
    int n;
    std::cout<<"Introduce un numero entero mayor que 0: ";
    std::cin>>n;
    for (int i = 1; i<=n; i++){
        std::cout<<n-i<<"\n";
    }
}