#include <iostream>

int main(){
    int n, previous{0}, current{1}, next;
    do{
        std::cout<<"Introduce un numero natural distinto de 0: ";
        std::cin>>n;
    }while(n==0);

    for (int i = 0; i<n-2; i++){
        next = previous + current;
        previous = current;
        current = next;
    }

    std::cout<<"El numero en esa posicion de la sucesion de Fibonacci es: "<<next;
    return 0;
}