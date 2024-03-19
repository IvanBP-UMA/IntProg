//Autor: Iván Bezares Pino
#include <iostream>

int main(){
    int n, originalN;
    std::cout<<"Introduce un numero natural mayor que cero: ";
    std::cin>>n;
    originalN = n;
    while (n > 0){
        for (int j = originalN -n; j>0; j--){
            std::cout<<" ";
        }
        for (int i=0; i<n; i++){
            std::cout<<"+";
        }
        n--;
        std::cout<<"\n";
    }
    
    return 0;
}