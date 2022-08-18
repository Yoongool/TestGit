#include <iostream>

int add(int a, int b){
    return a+b;
}

float add2(float a, float b){
    return a+b;
}

int main(){
    int a = 1;
    int b = 2;
    std::cout << "Hello world!" << std::endl;
    std::cout << "a+b = " << add(a,b) << std::endl;
    return 0;
}