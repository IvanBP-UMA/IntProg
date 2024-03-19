#include <iostream>
#include <array>
using namespace std;

const int MAX = 26;
typedef array<int, MAX> arr;

void contar(arr& a){
    char c;
    cout<<"Introduce una serie de letras mayusculas acabada en un punto: ";
    cin>>c;
    while(c!='.'){
        a[c-'A']++;
    }
}

int main(){
    arr a;
    return 0;
}