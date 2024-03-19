#include <iostream>

int main(){
    char current;
    bool found{false};
    std::cout<<"Introduce una cadena de caracteres, acabada en un punto: ";
    std::cin>>current;
    while(current!='.'){
        if(current == 'a'){
            std::cin>>current;
            if(current == 'b'){
                std::cin>>current;
                if(current == 'c'){
                    found = true;
                }
            }
        }
        else{
            std::cin>>current;
        }
    }
    if(found){
        std::cout<<"Cadena abc SI encontrada";
    }
    else{
        std::cout<<"Cadena abc NO encontrada";
    }

    return 0;
}