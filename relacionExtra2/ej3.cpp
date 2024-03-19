#include <iostream>

int main(){
    int n;
    do{
        std::cout<<"Introduce el lado del cuadrado: ";
        std::cin>>n;
    }while(n<=0);

    for(int i = 0; i<n; i++){
        if (i == 0 || i== (n-1)){
            for (int j = 0; j<n; j++){
                std::cout<<"+";
            }
        }
        else{
            std::cout<<"+";
            for (int k= 0; k<(n-2); k++){
                std::cout<<" ";
            }
            std::cout<<"+";
        }
        std::cout<<"\n";
    }
    return 0;
}