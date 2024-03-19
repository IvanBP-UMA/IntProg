#include <iostream>
#include <array>

int sumarColumna(TMatrix a, int columna){
    int res =0;
    for(int i = 0; i < a.size(); i++){
        res += a[i][columna];
    }
    return res;
}

int main(){
    return 0;
}