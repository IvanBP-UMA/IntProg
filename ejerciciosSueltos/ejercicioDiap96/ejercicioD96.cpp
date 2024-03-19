/*Ejercicio diapositiva 96
Autor: Iván Bezares Pino
*/

#include <iostream>

int main(){
    int year, month, day;
    bool correctDate{true};
    std::cout<<"Introduce una fecha en formato anyo mes dia, estando los valores separados por espacio: ";
    std::cin>>year>>month>>day;

    if(!(month>0&&month<13)){
        correctDate = false;
    }
    if (month%2 == 1){
        if (!(day>0&&day<32)){
            correctDate = false;
        }
    }
    else{
        if (!(day>0&&day<31)){
            correctDate = false; 
        }
    }
    if ((month == 2)&&(!(day>0&&day<29))){
        correctDate = false;
    }
    if((year%4 == 0&&year%100 != 0)||(year%400 == 0)){
        if ((month == 2)&&(!(day>0&&day<30))){
            correctDate = false;
        }
    }
    
    if (correctDate){
        std::cout<<"Fecha correcta";
    }
    else{
        std::cout<<"Error";
    }
    
    return 0;
}