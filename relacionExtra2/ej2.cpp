#include <iostream>

int main(){
    int num, suma{0}, digits{0}, power{1}, current, currentPower;
    do{
        std::cout<<"Introduce un numero natural: ";
        std::cin>>num;
    }while(num<=0);

    while(num/power != 0){
        power *= 10;
        digits++;
    }

    power = 1;
    for (int i = 0; i<digits; i++){
        current = ((num/power))%10;
        currentPower = current;
        for (int j= 1; j<digits; j++){
            current *= currentPower;
        }
        std::cout<<current<<"\n";
        suma+=current;
        power *= 10;
    }

    std::cout<<suma<<"\n";

    if(suma == num){
        std::cout<<num<<" es un numero narcicista";
    }
    else{
        std::cout<<num<<" NO es un numero narcicista";
    }

    return 0;
}