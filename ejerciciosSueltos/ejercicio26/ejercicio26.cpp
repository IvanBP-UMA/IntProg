#include <iostream>

int main(){
    int perfect{28}, sum{0}, counter{1};
    bool found{false};
    while (found == false){
        perfect++;
        for(int i = 1; i<=perfect;i++){
            if ((i!=perfect)&&(perfect%i==0)){
                sum += i;
            }
        }
        if(sum==perfect){
            found = true;
        }
        else{
            sum = 0;
        }
    }
    std::cout<<perfect<<" es un numero perfecto";
    return 0;
}