#include <iostream>

int main(){
    int firstPos{0}, lastPos{0}, current, counter{1};
    std::cout<<"Introduzca una serie de numeros terminada en 0: ";
    do{
        std::cin>>current;
        if (current == 12){
            lastPos = counter;
            if (!firstPos){
                firstPos = counter;
            }
        }
        counter++; 
    } while (current != 0);

    std::cout<<"Primera aparicion del 12: "<<firstPos<<"\n";
    std::cout<<"Ultima aparicion del 12: "<<lastPos<<"\n";
    
    return 0;
}