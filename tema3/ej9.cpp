#include <iostream>

int mcd(int a, int b){
    if(a>b){
        mcd(a-b, b);
    }
    else if (a == b){
        return a;
    }
    else{
        mcd(b,a);
    }
}

void leerDato(int& a){
    do{
    std::cout<<"Introduce un numero natural mayor que cero: ";
    std::cin>>a;
    }while(a<0);
}

int main(){
    int a, b, result;
    leerDato(a); 
    leerDato(b);
    result = mcd(a,b);
    std::cout<<result;
    return 0;
}