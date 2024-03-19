#include <iostream>

void printStar(int n){
    for (int i = 0; i<n; i++){
        std::cout<<"* ";
    }
}

void printSpace(int n){
    for (int i = 0; i<n; i++){
        std::cout<<" ";
    }
}

void printPyramid(int n){
    int ancho = n*2;
    for (int i = 1; i<=n; i++){
        printSpace(n-i);
        printStar(i);
        printSpace(n-i);
        std::cout<<"\n";
    }
}

int main(){
    int n, ancho;
    std::cout<<"Introduce la altura de la piramide: ";
    std::cin>>n;
    printPyramid(n);

    return 0;
}
