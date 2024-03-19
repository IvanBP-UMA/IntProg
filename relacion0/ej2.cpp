#include <iostream>


int main(){
    int hour1, minute1, hour2, minute2;
    std::cout<<"Introduce un hora y sus minutos, separados por espacio: ";
    std::cin>>hour1>>minute1;
    std::cout<<"Introduce otra hora y minutos, previos al primer instante, separados por espacio: ";
    std::cin>>hour2>>minute2;

    hour1 = hour1-hour2;
    if (minute1<minute2)
    {
        hour1--;
    }
    minute1 = (minute1-minute2<0)? 60+minute1-minute2: minute1-minute2;    

    std::cout<<"La diferencia entre los dos instantes es de: "<<hour1<<" horas y "<<minute1<<" minutos";
    return 0;   
}