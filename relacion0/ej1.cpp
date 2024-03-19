#include <iostream>
#include <math.h>
using std::cout;
using std::cin;

int main(){
    float degree, min, seconds;
    cout<<"Introduce el numero de grados minutos y segundos separados por espacio: ";
    cin>>degree>>min>>seconds;
    
    degree += min/60 + seconds/3600;
    float radians {degree*M_PI/180};
    cout<<"El angulo en radianes es "<<radians<<" rad";

    return 0;
}