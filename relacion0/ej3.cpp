#include <iostream>

int main(){
    float salary;
    int years, fiveYears;
    std::cout<<"Introduce el salario del trabajador y su antiguedad, separados por un espacio: ";
    std::cin>>salary>>years;

    fiveYears = years/5;
    years = years%5;

    salary += fiveYears*60 + years*5;
    salary *= 0.75;

    std::cout<<"El salario neto del trabajador es "<<salary<<" euros";

    return 0;
}