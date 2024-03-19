//Autor: Iván Bezares Pino
#include <iostream>
#include <math.h>

int main(){
    int number, divider{1}, digits{0}, evenCounter{0}, current{0};
    do{
        std::cout<<"Introduce un numero natural mayor o igual que 0: ";
        std::cin>>number;
    } while (number<0);

    while (number/divider != 0){
        digits++;
        divider *= 10;
    }

    for (int i = 0; i < digits; i++){
        current = (number/int(pow(10, i)))%10;
        if (current%2 == 0){
            evenCounter++;
        }
    }
    std::cout<<"El numero tiene "<<evenCounter<<" digitos pares";
    
    return 0;
}